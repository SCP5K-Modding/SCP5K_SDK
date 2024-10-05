// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordSdk/Public/DiscordSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordSettings() {}
// Cross Module References
	DISCORDSDK_API UClass* Z_Construct_UClass_UDiscordSettings_NoRegister();
	DISCORDSDK_API UClass* Z_Construct_UClass_UDiscordSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DiscordSdk();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordSettings::execToString)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDiscordSettings::ToString(Z_Param_Value);
		P_NATIVE_END;
	}
	void UDiscordSettings::StaticRegisterNativesUDiscordSettings()
	{
		UClass* Class = UDiscordSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToString", &UDiscordSettings::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordSettings_ToString_Statics
	{
		struct DiscordSettings_eventToString_Parms
		{
			int64 Value;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordSettings_ToString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordSettings_eventToString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordSettings_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordSettings_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordSettings_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordSettings_ToString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordSettings_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordSettings_ToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordSettings_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordSettings, nullptr, "ToString", nullptr, nullptr, sizeof(DiscordSettings_eventToString_Parms), Z_Construct_UFunction_UDiscordSettings_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSettings_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordSettings_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordSettings_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordSettings_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordSettings_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordSettings_NoRegister()
	{
		return UDiscordSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordSdkVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordSdkVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordApplicationManagerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordApplicationManagerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordUserManagerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordUserManagerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordImageManagerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordImageManagerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordActivityManagerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordActivityManagerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordRelationShipManagerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordRelationShipManagerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordLobbyManagerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordLobbyManagerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordNetworkManagerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordNetworkManagerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordOverlayManagerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordOverlayManagerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordStorageManagerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordStorageManagerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordStoreManagerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordStoreManagerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordVoiceManagerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordVoiceManagerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordAchievementManagerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscordAchievementManagerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordSdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordSettings_ToString, "ToString" }, // 1413802657
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordSdkVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordSdkVersion = { "DiscordSdkVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordSdkVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordSdkVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordSdkVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordApplicationManagerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordApplicationManagerVersion = { "DiscordApplicationManagerVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordApplicationManagerVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordApplicationManagerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordApplicationManagerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordUserManagerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordUserManagerVersion = { "DiscordUserManagerVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordUserManagerVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordUserManagerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordUserManagerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordImageManagerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordImageManagerVersion = { "DiscordImageManagerVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordImageManagerVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordImageManagerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordImageManagerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordActivityManagerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordActivityManagerVersion = { "DiscordActivityManagerVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordActivityManagerVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordActivityManagerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordActivityManagerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordRelationShipManagerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordRelationShipManagerVersion = { "DiscordRelationShipManagerVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordRelationShipManagerVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordRelationShipManagerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordRelationShipManagerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordLobbyManagerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordLobbyManagerVersion = { "DiscordLobbyManagerVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordLobbyManagerVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordLobbyManagerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordLobbyManagerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordNetworkManagerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordNetworkManagerVersion = { "DiscordNetworkManagerVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordNetworkManagerVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordNetworkManagerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordNetworkManagerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordOverlayManagerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordOverlayManagerVersion = { "DiscordOverlayManagerVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordOverlayManagerVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordOverlayManagerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordOverlayManagerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordStorageManagerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordStorageManagerVersion = { "DiscordStorageManagerVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordStorageManagerVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordStorageManagerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordStorageManagerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordStoreManagerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordStoreManagerVersion = { "DiscordStoreManagerVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordStoreManagerVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordStoreManagerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordStoreManagerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordVoiceManagerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordVoiceManagerVersion = { "DiscordVoiceManagerVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordVoiceManagerVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordVoiceManagerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordVoiceManagerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordAchievementManagerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordAchievementManagerVersion = { "DiscordAchievementManagerVersion", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, DiscordAchievementManagerVersion), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordAchievementManagerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordAchievementManagerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordSettings_Statics::NewProp_ClientId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSettings" },
		{ "ModuleRelativePath", "Public/DiscordSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDiscordSettings_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordSettings, ClientId), METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::NewProp_ClientId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordSdkVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordApplicationManagerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordUserManagerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordImageManagerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordActivityManagerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordRelationShipManagerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordLobbyManagerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordNetworkManagerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordOverlayManagerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordStorageManagerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordStoreManagerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordVoiceManagerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_DiscordAchievementManagerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordSettings_Statics::NewProp_ClientId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordSettings_Statics::ClassParams = {
		&UDiscordSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordSettings, 3347509696);
	template<> DISCORDSDK_API UClass* StaticClass<UDiscordSettings>()
	{
		return UDiscordSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordSettings(Z_Construct_UClass_UDiscordSettings, &UDiscordSettings::StaticClass, TEXT("/Script/DiscordSdk"), TEXT("UDiscordSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
