#pragma once

#include "CoreMinimal.h"
#include "ILauncher.h"
#include "Modules/ModuleManager.h"

class IPlugin;
DECLARE_LOG_CATEGORY_EXTERN(LogModdingEditor, Log, All);

class FModdingEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

	FString CurrentlyBuildingDLCName;
	
	void OnLauncherCreated(ILauncherRef Launcher);
	void OnLauncherWorkerStarted(ILauncherWorkerPtr LauncherWorker, ILauncherProfileRef Profile);
	void OnLauncherCompleted(bool Succeeded, double TotalTime, int32 ErrorCode);
	FDelegateHandle LauncherCallbackHandle;
	FDelegateHandle LauncherStartedCallbackHandle;

	static void LoadTagPathForMod (TSharedRef<IPlugin> Mod);
};
