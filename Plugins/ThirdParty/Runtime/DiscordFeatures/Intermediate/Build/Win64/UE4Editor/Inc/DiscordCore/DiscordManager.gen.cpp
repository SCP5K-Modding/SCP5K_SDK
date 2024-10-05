// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/DiscordManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordManager() {}
// Cross Module References
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager_NoRegister();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
	void UDiscordManager::StaticRegisterNativesUDiscordManager()
	{
	}
	UClass* Z_Construct_UClass_UDiscordManager_NoRegister()
	{
		return UDiscordManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordManager_Statics::ClassParams = {
		&UDiscordManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordManager, 1466902524);
	template<> DISCORDCORE_API UClass* StaticClass<UDiscordManager>()
	{
		return UDiscordManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordManager(Z_Construct_UClass_UDiscordManager, &UDiscordManager::StaticClass, TEXT("/Script/DiscordCore"), TEXT("UDiscordManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
