// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreSettings() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSettings_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	void USteamCoreSettings::StaticRegisterNativesUSteamCoreSettings()
	{
	}
	UClass* Z_Construct_UClass_USteamCoreSettings_NoRegister()
	{
		return USteamCoreSettings::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncTaskTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsyncTaskTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelaunchInSteam_MetaData[];
#endif
		static void NewProp_bRelaunchInSteam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelaunchInSteam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVACEnabled_MetaData[];
#endif
		static void NewProp_bVACEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVACEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowP2PPacketRelay_MetaData[];
#endif
		static void NewProp_bAllowP2PPacketRelay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowP2PPacketRelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2PConnectionTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_P2PConnectionTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SteamAppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamDevAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SteamDevAppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerQueryPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameServerQueryPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_DisabledSubsystems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_DisabledSubsystems = { "DisabledSubsystems", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, DisabledSubsystems), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_DisabledSubsystems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_DisabledSubsystems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bDebugging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging = { "bDebugging", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_AsyncTaskTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_AsyncTaskTimeout = { "AsyncTaskTimeout", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, AsyncTaskTimeout), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_AsyncTaskTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_AsyncTaskTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bRelaunchInSteam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam = { "bRelaunchInSteam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bVACEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled = { "bVACEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bAllowP2PPacketRelay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay = { "bAllowP2PPacketRelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout = { "P2PConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, P2PConnectionTimeout), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppId = { "SteamAppId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, SteamAppId), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppId = { "SteamDevAppId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, SteamDevAppId), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, Port), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort = { "GameServerQueryPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, GameServerQueryPort), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreSettings" },
		{ "ModuleRelativePath", "Public/SteamCoreSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, GameVersion), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_DisabledSubsystems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_AsyncTaskTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSettings_Statics::ClassParams = {
		&USteamCoreSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamCoreSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreSettings, 150757429);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreSettings>()
	{
		return USteamCoreSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreSettings(Z_Construct_UClass_USteamCoreSettings, &USteamCoreSettings::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
