// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Apps.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApps() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UApps_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UApps();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UApps::execBGetDLCDataByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DLC);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
		P_GET_UBOOL_REF(Z_Param_Out_bAvailable);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BGetDLCDataByIndex(Z_Param_DLC,Z_Param_Out_AppID,Z_Param_Out_bAvailable,Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsAppInstalled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsAppInstalled(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsCybercafe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsCybercafe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsDlcInstalled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsDlcInstalled(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsLowViolence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsLowViolence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsSubscribed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsSubscribed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsSubscribedApp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsSubscribedApp(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsSubscribedFromFamilySharing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsSubscribedFromFamilySharing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsSubscribedFromFreeWeekend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsSubscribedFromFreeWeekend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsTimedTrial)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SecondsAllowed);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SecondsPlayed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsTimedTrial(Z_Param_Out_SecondsAllowed,Z_Param_Out_SecondsPlayed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsVACBanned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsVACBanned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetAppBuildId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetAppBuildId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetAppInstallDir)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetAppInstallDir(Z_Param_AppID,Z_Param_Out_Folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetAppOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UApps::GetAppOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetAvailableGameLanguages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UApps::GetAvailableGameLanguages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetCurrentBetaName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::GetCurrentBetaName(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetCurrentGameLanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UApps::GetCurrentGameLanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetDLCCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetDLCCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetDlcDownloadProgress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::GetDlcDownloadProgress(Z_Param_AppID,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetEarliestPurchaseUnixTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetEarliestPurchaseUnixTime(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetFileDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFileDetails(FOnFileDetailsResult(Z_Param_Out_Callback),Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetInstalledDepots)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxDepots);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Depots);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetInstalledDepots(Z_Param_AppID,Z_Param_MaxDepots,Z_Param_Out_Depots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetLaunchCommandLine)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CommandLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetLaunchCommandLine(Z_Param_Out_CommandLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetLaunchQueryParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UApps::GetLaunchQueryParam(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execInstallDLC)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UApps::InstallDLC(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execMarkContentCorrupt)
	{
		P_GET_UBOOL(Z_Param_bMissingFilesOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::MarkContentCorrupt(Z_Param_bMissingFilesOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execUninstallDLC)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UApps::UninstallDLC(Z_Param_AppID);
		P_NATIVE_END;
	}
	void UApps::StaticRegisterNativesUApps()
	{
		UClass* Class = UApps::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BGetDLCDataByIndex", &UApps::execBGetDLCDataByIndex },
			{ "BIsAppInstalled", &UApps::execBIsAppInstalled },
			{ "BIsCybercafe", &UApps::execBIsCybercafe },
			{ "BIsDlcInstalled", &UApps::execBIsDlcInstalled },
			{ "BIsLowViolence", &UApps::execBIsLowViolence },
			{ "BIsSubscribed", &UApps::execBIsSubscribed },
			{ "BIsSubscribedApp", &UApps::execBIsSubscribedApp },
			{ "BIsSubscribedFromFamilySharing", &UApps::execBIsSubscribedFromFamilySharing },
			{ "BIsSubscribedFromFreeWeekend", &UApps::execBIsSubscribedFromFreeWeekend },
			{ "BIsTimedTrial", &UApps::execBIsTimedTrial },
			{ "BIsVACBanned", &UApps::execBIsVACBanned },
			{ "GetAppBuildId", &UApps::execGetAppBuildId },
			{ "GetAppInstallDir", &UApps::execGetAppInstallDir },
			{ "GetAppOwner", &UApps::execGetAppOwner },
			{ "GetAvailableGameLanguages", &UApps::execGetAvailableGameLanguages },
			{ "GetCurrentBetaName", &UApps::execGetCurrentBetaName },
			{ "GetCurrentGameLanguage", &UApps::execGetCurrentGameLanguage },
			{ "GetDLCCount", &UApps::execGetDLCCount },
			{ "GetDlcDownloadProgress", &UApps::execGetDlcDownloadProgress },
			{ "GetEarliestPurchaseUnixTime", &UApps::execGetEarliestPurchaseUnixTime },
			{ "GetFileDetails", &UApps::execGetFileDetails },
			{ "GetInstalledDepots", &UApps::execGetInstalledDepots },
			{ "GetLaunchCommandLine", &UApps::execGetLaunchCommandLine },
			{ "GetLaunchQueryParam", &UApps::execGetLaunchQueryParam },
			{ "InstallDLC", &UApps::execInstallDLC },
			{ "MarkContentCorrupt", &UApps::execMarkContentCorrupt },
			{ "UninstallDLC", &UApps::execUninstallDLC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics
	{
		struct Apps_eventBGetDLCDataByIndex_Parms
		{
			int32 DLC;
			int32 AppID;
			bool bAvailable;
			FString Name;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DLC;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_bAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAvailable;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_DLC = { "DLC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBGetDLCDataByIndex_Parms, DLC), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBGetDLCDataByIndex_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit(void* Obj)
	{
		((Apps_eventBGetDLCDataByIndex_Parms*)Obj)->bAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable = { "bAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBGetDLCDataByIndex_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBGetDLCDataByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_DLC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BGetDLCDataByIndex", nullptr, nullptr, sizeof(Apps_eventBGetDLCDataByIndex_Parms), Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BGetDLCDataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsAppInstalled_Statics
	{
		struct Apps_eventBIsAppInstalled_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBIsAppInstalled_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsAppInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsAppInstalled_Parms), &Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsAppInstalled", nullptr, nullptr, sizeof(Apps_eventBIsAppInstalled_Parms), Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsAppInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsCybercafe_Statics
	{
		struct Apps_eventBIsCybercafe_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsCybercafe_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsCybercafe_Parms), &Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsCybercafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsCybercafe", nullptr, nullptr, sizeof(Apps_eventBIsCybercafe_Parms), Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsCybercafe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsCybercafe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics
	{
		struct Apps_eventBIsDlcInstalled_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBIsDlcInstalled_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsDlcInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsDlcInstalled_Parms), &Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsDlcInstalled", nullptr, nullptr, sizeof(Apps_eventBIsDlcInstalled_Parms), Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsDlcInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsLowViolence_Statics
	{
		struct Apps_eventBIsLowViolence_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsLowViolence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsLowViolence_Parms), &Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsLowViolence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsLowViolence", nullptr, nullptr, sizeof(Apps_eventBIsLowViolence_Parms), Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsLowViolence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsLowViolence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsSubscribed_Statics
	{
		struct Apps_eventBIsSubscribed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsSubscribed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsSubscribed_Parms), &Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribed", nullptr, nullptr, sizeof(Apps_eventBIsSubscribed_Parms), Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsSubscribed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics
	{
		struct Apps_eventBIsSubscribedApp_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBIsSubscribedApp_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsSubscribedApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsSubscribedApp_Parms), &Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribedApp", nullptr, nullptr, sizeof(Apps_eventBIsSubscribedApp_Parms), Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsSubscribedApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics
	{
		struct Apps_eventBIsSubscribedFromFamilySharing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsSubscribedFromFamilySharing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsSubscribedFromFamilySharing_Parms), &Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribedFromFamilySharing", nullptr, nullptr, sizeof(Apps_eventBIsSubscribedFromFamilySharing_Parms), Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics
	{
		struct Apps_eventBIsSubscribedFromFreeWeekend_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsSubscribedFromFreeWeekend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsSubscribedFromFreeWeekend_Parms), &Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribedFromFreeWeekend", nullptr, nullptr, sizeof(Apps_eventBIsSubscribedFromFreeWeekend_Parms), Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsTimedTrial_Statics
	{
		struct Apps_eventBIsTimedTrial_Parms
		{
			int32 SecondsAllowed;
			int32 SecondsPlayed;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsAllowed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsPlayed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_SecondsAllowed = { "SecondsAllowed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBIsTimedTrial_Parms, SecondsAllowed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_SecondsPlayed = { "SecondsPlayed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBIsTimedTrial_Parms, SecondsPlayed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsTimedTrial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsTimedTrial_Parms), &Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_SecondsAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_SecondsPlayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsTimedTrial", nullptr, nullptr, sizeof(Apps_eventBIsTimedTrial_Parms), Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsTimedTrial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsVACBanned_Statics
	{
		struct Apps_eventBIsVACBanned_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsVACBanned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsVACBanned_Parms), &Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsVACBanned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsVACBanned", nullptr, nullptr, sizeof(Apps_eventBIsVACBanned_Parms), Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsVACBanned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsVACBanned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetAppBuildId_Statics
	{
		struct Apps_eventGetAppBuildId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetAppBuildId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetAppBuildId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppBuildId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAppBuildId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAppBuildId", nullptr, nullptr, sizeof(Apps_eventGetAppBuildId_Parms), Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetAppBuildId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetAppBuildId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetAppInstallDir_Statics
	{
		struct Apps_eventGetAppInstallDir_Parms
		{
			int32 AppID;
			FString Folder;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Folder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetAppInstallDir_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetAppInstallDir_Parms, Folder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetAppInstallDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_Folder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAppInstallDir", nullptr, nullptr, sizeof(Apps_eventGetAppInstallDir_Parms), Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetAppInstallDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetAppOwner_Statics
	{
		struct Apps_eventGetAppOwner_Parms
		{
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UApps_GetAppOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetAppOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetAppOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAppOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAppOwner", nullptr, nullptr, sizeof(Apps_eventGetAppOwner_Parms), Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetAppOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetAppOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetAppOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics
	{
		struct Apps_eventGetAvailableGameLanguages_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetAvailableGameLanguages_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAvailableGameLanguages", nullptr, nullptr, sizeof(Apps_eventGetAvailableGameLanguages_Parms), Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetAvailableGameLanguages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics
	{
		struct Apps_eventGetCurrentBetaName_Parms
		{
			FString Name;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetCurrentBetaName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventGetCurrentBetaName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventGetCurrentBetaName_Parms), &Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetCurrentBetaName", nullptr, nullptr, sizeof(Apps_eventGetCurrentBetaName_Parms), Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetCurrentBetaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics
	{
		struct Apps_eventGetCurrentGameLanguage_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetCurrentGameLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetCurrentGameLanguage", nullptr, nullptr, sizeof(Apps_eventGetCurrentGameLanguage_Parms), Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetCurrentGameLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetDLCCount_Statics
	{
		struct Apps_eventGetDLCCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDLCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetDLCCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDLCCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetDLCCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetDLCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetDLCCount", nullptr, nullptr, sizeof(Apps_eventGetDLCCount_Parms), Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetDLCCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDLCCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetDLCCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetDLCCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics
	{
		struct Apps_eventGetDlcDownloadProgress_Parms
		{
			int32 AppID;
			int32 BytesDownloaded;
			int32 BytesTotal;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetDlcDownloadProgress_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetDlcDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetDlcDownloadProgress_Parms, BytesTotal), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventGetDlcDownloadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventGetDlcDownloadProgress_Parms), &Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_BytesDownloaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_BytesTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetDlcDownloadProgress", nullptr, nullptr, sizeof(Apps_eventGetDlcDownloadProgress_Parms), Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetDlcDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics
	{
		struct Apps_eventGetEarliestPurchaseUnixTime_Parms
		{
			int32 AppID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetEarliestPurchaseUnixTime_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetEarliestPurchaseUnixTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetEarliestPurchaseUnixTime", nullptr, nullptr, sizeof(Apps_eventGetEarliestPurchaseUnixTime_Parms), Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetFileDetails_Statics
	{
		struct Apps_eventGetFileDetails_Parms
		{
			FScriptDelegate Callback;
			FString Filename;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetFileDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetFileDetails_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetFileDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetFileDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetFileDetails", nullptr, nullptr, sizeof(Apps_eventGetFileDetails_Parms), Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetFileDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetFileDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetFileDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetInstalledDepots_Statics
	{
		struct Apps_eventGetInstalledDepots_Parms
		{
			int32 AppID;
			int32 MaxDepots;
			TArray<int32> Depots;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDepots;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Depots_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Depots;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_MaxDepots = { "MaxDepots", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, MaxDepots), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_Depots_Inner = { "Depots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_Depots = { "Depots", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, Depots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_MaxDepots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_Depots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_Depots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetInstalledDepots", nullptr, nullptr, sizeof(Apps_eventGetInstalledDepots_Parms), Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetInstalledDepots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics
	{
		struct Apps_eventGetLaunchCommandLine_Parms
		{
			FString CommandLine;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandLine;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_CommandLine = { "CommandLine", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetLaunchCommandLine_Parms, CommandLine), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetLaunchCommandLine_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_CommandLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetLaunchCommandLine", nullptr, nullptr, sizeof(Apps_eventGetLaunchCommandLine_Parms), Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetLaunchCommandLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics
	{
		struct Apps_eventGetLaunchQueryParam_Parms
		{
			FString Key;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetLaunchQueryParam_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetLaunchQueryParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetLaunchQueryParam", nullptr, nullptr, sizeof(Apps_eventGetLaunchQueryParam_Parms), Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetLaunchQueryParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_InstallDLC_Statics
	{
		struct Apps_eventInstallDLC_Parms
		{
			int32 AppID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_InstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventInstallDLC_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_InstallDLC_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_InstallDLC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_InstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "InstallDLC", nullptr, nullptr, sizeof(Apps_eventInstallDLC_Parms), Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_InstallDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_InstallDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_InstallDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_InstallDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics
	{
		struct Apps_eventMarkContentCorrupt_Parms
		{
			bool bMissingFilesOnly;
			bool ReturnValue;
		};
		static void NewProp_bMissingFilesOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMissingFilesOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit(void* Obj)
	{
		((Apps_eventMarkContentCorrupt_Parms*)Obj)->bMissingFilesOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly = { "bMissingFilesOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventMarkContentCorrupt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "MarkContentCorrupt", nullptr, nullptr, sizeof(Apps_eventMarkContentCorrupt_Parms), Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_MarkContentCorrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_UninstallDLC_Statics
	{
		struct Apps_eventUninstallDLC_Parms
		{
			int32 AppID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_UninstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventUninstallDLC_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_UninstallDLC_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_UninstallDLC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_UninstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "UninstallDLC", nullptr, nullptr, sizeof(Apps_eventUninstallDLC_Parms), Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_UninstallDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_UninstallDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_UninstallDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_UninstallDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UApps_NoRegister()
	{
		return UApps::StaticClass();
	}
	struct Z_Construct_UClass_UApps_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLCInstalled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DLCInstalled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileDetailsResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FileDetailsResultDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApps_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApps_BGetDLCDataByIndex, "BGetDLCDataByIndex" }, // 1475016789
		{ &Z_Construct_UFunction_UApps_BIsAppInstalled, "BIsAppInstalled" }, // 4034424259
		{ &Z_Construct_UFunction_UApps_BIsCybercafe, "BIsCybercafe" }, // 127229115
		{ &Z_Construct_UFunction_UApps_BIsDlcInstalled, "BIsDlcInstalled" }, // 4101721178
		{ &Z_Construct_UFunction_UApps_BIsLowViolence, "BIsLowViolence" }, // 1228074383
		{ &Z_Construct_UFunction_UApps_BIsSubscribed, "BIsSubscribed" }, // 2186402812
		{ &Z_Construct_UFunction_UApps_BIsSubscribedApp, "BIsSubscribedApp" }, // 1011636591
		{ &Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing, "BIsSubscribedFromFamilySharing" }, // 956306911
		{ &Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend, "BIsSubscribedFromFreeWeekend" }, // 3011382847
		{ &Z_Construct_UFunction_UApps_BIsTimedTrial, "BIsTimedTrial" }, // 3831051747
		{ &Z_Construct_UFunction_UApps_BIsVACBanned, "BIsVACBanned" }, // 2710277345
		{ &Z_Construct_UFunction_UApps_GetAppBuildId, "GetAppBuildId" }, // 45283064
		{ &Z_Construct_UFunction_UApps_GetAppInstallDir, "GetAppInstallDir" }, // 2129720969
		{ &Z_Construct_UFunction_UApps_GetAppOwner, "GetAppOwner" }, // 2217433831
		{ &Z_Construct_UFunction_UApps_GetAvailableGameLanguages, "GetAvailableGameLanguages" }, // 4225375474
		{ &Z_Construct_UFunction_UApps_GetCurrentBetaName, "GetCurrentBetaName" }, // 3860419719
		{ &Z_Construct_UFunction_UApps_GetCurrentGameLanguage, "GetCurrentGameLanguage" }, // 3273611807
		{ &Z_Construct_UFunction_UApps_GetDLCCount, "GetDLCCount" }, // 4250252943
		{ &Z_Construct_UFunction_UApps_GetDlcDownloadProgress, "GetDlcDownloadProgress" }, // 2582170699
		{ &Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime, "GetEarliestPurchaseUnixTime" }, // 1915151420
		{ &Z_Construct_UFunction_UApps_GetFileDetails, "GetFileDetails" }, // 210345409
		{ &Z_Construct_UFunction_UApps_GetInstalledDepots, "GetInstalledDepots" }, // 966346440
		{ &Z_Construct_UFunction_UApps_GetLaunchCommandLine, "GetLaunchCommandLine" }, // 1967342435
		{ &Z_Construct_UFunction_UApps_GetLaunchQueryParam, "GetLaunchQueryParam" }, // 3333224254
		{ &Z_Construct_UFunction_UApps_InstallDLC, "InstallDLC" }, // 944284166
		{ &Z_Construct_UFunction_UApps_MarkContentCorrupt, "MarkContentCorrupt" }, // 1961198626
		{ &Z_Construct_UFunction_UApps_UninstallDLC, "UninstallDLC" }, // 3605930631
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApps_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Apps.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled = { "DLCInstalled", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApps, DLCInstalled), Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate = { "FileDetailsResultDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApps, FileDetailsResultDelegate), Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApps>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApps_Statics::ClassParams = {
		&UApps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApps()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApps_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApps, 65725929);
	template<> STEAMCORE_API UClass* StaticClass<UApps>()
	{
		return UApps::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApps(Z_Construct_UClass_UApps, &UApps::StaticClass, TEXT("/Script/SteamCore"), TEXT("UApps"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApps);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
