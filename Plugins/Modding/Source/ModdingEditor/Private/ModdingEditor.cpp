#include "ModdingEditor.h"

#include "GameplayTagsManager.h"
#include "ILauncherServicesModule.h"
#include "Engine/AssetManager.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FModdingEditorModule"

DEFINE_LOG_CATEGORY(LogModdingEditor)

void FModdingEditorModule::StartupModule()
{
	IModuleInterface::StartupModule();

	TArray<TSharedRef<IPlugin>> Plugins = IPluginManager::Get().GetDiscoveredPlugins();

	TArray<FPrimaryAssetTypeInfo> AssetTypeInfo;
	UAssetManager::GetIfValid()->GetPrimaryAssetTypeInfoList(AssetTypeInfo);
	TArray<FString> PluginPaths;
	
	for (int32 i = 0; i < Plugins.Num(); i++)
	{
		if (Plugins[i]->IsEnabled() && Plugins[i]->GetDescriptor().Category.Contains("Mods"))
		{
			UE_LOG(LogModdingEditor, Display, TEXT("Found Mod %s, Adding to primary asset search paths."), *Plugins[i]->GetName())
			LoadTagPathForMod(Plugins[i]);

			PluginPaths.Add("/"+Plugins[i]->GetName());
		}
	}

	for (FPrimaryAssetTypeInfo& TypeInfo : AssetTypeInfo)
	{
		TypeInfo.AssetScanPaths.Append(PluginPaths);
		UAssetManager::GetIfValid()->ScanPathsForPrimaryAssets(TypeInfo.PrimaryAssetType, PluginPaths, TypeInfo.AssetBaseClassLoaded, TypeInfo.bHasBlueprintClasses, TypeInfo.bIsEditorOnly, false);
	}

	ILauncherServicesModule& ProjectLauncherServicesModule = FModuleManager::LoadModuleChecked<ILauncherServicesModule>("LauncherServices");
	LauncherCallbackHandle = ProjectLauncherServicesModule.OnCreateLauncherDelegate.AddRaw(this, &FModdingEditorModule::OnLauncherCreated);
}

void FModdingEditorModule::ShutdownModule()
{
    
}
void FModdingEditorModule::OnLauncherCreated(ILauncherRef Launcher)
{
	Launcher->FLauncherWorkerStartedDelegate.AddRaw(this, &FModdingEditorModule::OnLauncherWorkerStarted);
}
void FModdingEditorModule::OnLauncherWorkerStarted(ILauncherWorkerPtr LauncherWorker, ILauncherProfileRef Profile)
{
	if (!Profile->IsCreatingDLC())
		return;

	LauncherWorker->OnCompleted().AddRaw(this, &FModdingEditorModule::OnLauncherCompleted);
	
	TArray<TSharedRef<IPlugin>> Plugins = IPluginManager::Get().GetDiscoveredPlugins();
	
	TArray<FPrimaryAssetTypeInfo> AssetTypeInfo;
	UAssetManager::GetIfValid()->GetPrimaryAssetTypeInfoList(AssetTypeInfo);
	bool bFoundMod = false;
	TSharedPtr<IPlugin> Plugin;

	CurrentlyBuildingDLCName = Profile->GetDLCName();
	
	for (int32 i = 0; i < Plugins.Num(); i++)
	{
		if (Plugins[i]->IsEnabled() && Plugins[i]->GetName() == Profile->GetDLCName())
		{
			UE_LOG(LogModdingEditor, Log, TEXT("Found Mod %s During Packaging, Adding to primary asset search paths."), *Plugins[i]->GetName())
			LoadTagPathForMod(Plugins[i]);

			Plugin = Plugins[i];
			bFoundMod = true;
			break;
		}
	}

	if (bFoundMod)
	{
		//Enable explicitly loaded so the game loads it properly
		FPluginDescriptor Descriptor = Plugin->GetDescriptor();
		Descriptor.bExplicitlyLoaded = true;
		
		FText FailReason;
		Plugin->UpdateDescriptor(Descriptor, FailReason);

		//Force primary assets to use the plugin as a search path
		for (FPrimaryAssetTypeInfo& TypeInfo : AssetTypeInfo)
		{
			TypeInfo.AssetScanPaths.AddUnique("/"+Plugin->GetName());
			UAssetManager::GetIfValid()->ScanPathForPrimaryAssets(TypeInfo.PrimaryAssetType, "/"+Plugin->GetName(), TypeInfo.AssetBaseClassLoaded, TypeInfo.bHasBlueprintClasses, TypeInfo.bIsEditorOnly, true);
		}
	}
	else
	{
		UE_LOG(LogModdingEditor, Warning, TEXT("Failed to find Mod %s During Packaging."), *Profile->GetDLCName())
	}
}
void FModdingEditorModule::OnLauncherCompleted(bool Succeeded, double TotalTime, int32 ErrorCode)
{
	TArray<TSharedRef<IPlugin>> Plugins = IPluginManager::Get().GetDiscoveredPlugins();
	
	bool bFoundMod = false;
	
	for (int32 i = 0; i < Plugins.Num(); i++)
	{
		if (Plugins[i]->IsEnabled() && Plugins[i]->GetName() == CurrentlyBuildingDLCName)
		{
			//Disable explicitly loaded so we can edit the mod
			FPluginDescriptor Descriptor = Plugins[i]->GetDescriptor();
			Descriptor.bExplicitlyLoaded = false;
			
			FText FailReason;
			Plugins[i]->UpdateDescriptor(Descriptor, FailReason);
			bFoundMod = true;
			break;
		}
	}
}
void FModdingEditorModule::LoadTagPathForMod(TSharedRef<IPlugin> Mod)
{
	FString TagPath = Mod->GetBaseDir() / TEXT("Config/Tags/");
	if (FPaths::DirectoryExists(TagPath))
		UGameplayTagsManager::Get().AddTagIniSearchPath(TagPath);
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FModdingEditorModule, ModdingEditor)