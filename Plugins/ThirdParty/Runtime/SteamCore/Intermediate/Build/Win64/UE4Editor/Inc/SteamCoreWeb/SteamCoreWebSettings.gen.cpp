// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebSettings() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSettings_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	void USteamCoreWebSettings::StaticRegisterNativesUSteamCoreWebSettings()
	{
	}
	UClass* Z_Construct_UClass_USteamCoreWebSettings_NoRegister()
	{
		return USteamCoreWebSettings::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncTaskTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsyncTaskTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledSubsystems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisabledSubsystems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugging_MetaData[];
#endif
		static void NewProp_bDebugging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDevMode_MetaData[];
#endif
		static void NewProp_bDevMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDevMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevSteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DevSteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSandboxMode_MetaData[];
#endif
		static void NewProp_bSandboxMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSandboxMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AsyncTaskTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreWebSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreWebSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AsyncTaskTimeout = { "AsyncTaskTimeout", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreWebSettings, AsyncTaskTimeout), METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AsyncTaskTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AsyncTaskTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DisabledSubsystems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreWebSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreWebSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DisabledSubsystems = { "DisabledSubsystems", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreWebSettings, DisabledSubsystems), METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DisabledSubsystems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DisabledSubsystems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreWebSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreWebSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging_SetBit(void* Obj)
	{
		((USteamCoreWebSettings*)Obj)->bDebugging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging = { "bDebugging", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreWebSettings), &Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreWebSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreWebSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode_SetBit(void* Obj)
	{
		((USteamCoreWebSettings*)Obj)->bDevMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode = { "bDevMode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreWebSettings), &Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreWebSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreWebSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreWebSettings, Key), METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreWebSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreWebSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreWebSettings, AppID), METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DevSteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreWebSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreWebSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DevSteamID = { "DevSteamID", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreWebSettings, DevSteamID), METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DevSteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DevSteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreWebSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreWebSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode_SetBit(void* Obj)
	{
		((USteamCoreWebSettings*)Obj)->bSandboxMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode = { "bSandboxMode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreWebSettings), &Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreWebSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AsyncTaskTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DisabledSubsystems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DevSteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebSettings_Statics::ClassParams = {
		&USteamCoreWebSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamCoreWebSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebSettings, 3967439002);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebSettings>()
	{
		return USteamCoreWebSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebSettings(Z_Construct_UClass_USteamCoreWebSettings, &USteamCoreWebSettings::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
