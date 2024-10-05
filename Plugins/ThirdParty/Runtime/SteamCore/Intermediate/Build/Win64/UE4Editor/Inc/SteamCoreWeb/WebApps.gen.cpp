// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebApps.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebApps() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebApps_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebApps();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebApps::execGetAppBetas)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppBetas(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetAppBuilds)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppBuilds(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetAppDepotVersions)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppDepotVersions(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetAppList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppList(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetCheatingReports)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeBegin);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeEnd);
		P_GET_UBOOL(Z_Param_bIncludeReports);
		P_GET_UBOOL(Z_Param_bIncludeBans);
		P_GET_PROPERTY(FIntProperty,Z_Param_reportidMin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCheatingReports(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_timeBegin,Z_Param_timeEnd,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_reportidMin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetPlayersBanned)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayersBanned(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetServerList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filter);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServerList(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_Filter,Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetServersAtAddress)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_addr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServersAtAddress(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_addr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execSetAppBuildLive)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_buildID);
		P_GET_PROPERTY(FStrProperty,Z_Param_betaKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAppBuildLive(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_buildID,Z_Param_betaKey,Z_Param_Description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execUpToDateCheck)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Version);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpToDateCheck(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_AppID,Z_Param_Version);
		P_NATIVE_END;
	}
	void UWebApps::StaticRegisterNativesUWebApps()
	{
		UClass* Class = UWebApps::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAppBetas", &UWebApps::execGetAppBetas },
			{ "GetAppBuilds", &UWebApps::execGetAppBuilds },
			{ "GetAppDepotVersions", &UWebApps::execGetAppDepotVersions },
			{ "GetAppList", &UWebApps::execGetAppList },
			{ "GetCheatingReports", &UWebApps::execGetCheatingReports },
			{ "GetPlayersBanned", &UWebApps::execGetPlayersBanned },
			{ "GetServerList", &UWebApps::execGetServerList },
			{ "GetServersAtAddress", &UWebApps::execGetServersAtAddress },
			{ "SetAppBuildLive", &UWebApps::execSetAppBuildLive },
			{ "UpToDateCheck", &UWebApps::execUpToDateCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebApps_GetAppBetas_Statics
	{
		struct WebApps_eventGetAppBetas_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBetas_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBetas_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBetas_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebApps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppBetas", nullptr, nullptr, sizeof(WebApps_eventGetAppBetas_Parms), Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetAppBetas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics
	{
		struct WebApps_eventGetAppBuilds_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 Count;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebApps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppBuilds", nullptr, nullptr, sizeof(WebApps_eventGetAppBuilds_Parms), Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetAppBuilds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics
	{
		struct WebApps_eventGetAppDepotVersions_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppDepotVersions_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppDepotVersions_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppDepotVersions_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebApps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppDepotVersions", nullptr, nullptr, sizeof(WebApps_eventGetAppDepotVersions_Parms), Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetAppDepotVersions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetAppList_Statics
	{
		struct WebApps_eventGetAppList_Parms
		{
			FScriptDelegate Callback;
			FString Key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppList_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebApps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppList", nullptr, nullptr, sizeof(WebApps_eventGetAppList_Parms), Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetAppList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics
	{
		struct WebApps_eventGetCheatingReports_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 timeBegin;
			int32 timeEnd;
			bool bIncludeReports;
			bool bIncludeBans;
			int32 reportidMin;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeBegin;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeEnd;
		static void NewProp_bIncludeReports_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
		static void NewProp_bIncludeBans_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_reportidMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_timeBegin = { "timeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, timeBegin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_timeEnd = { "timeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, timeEnd), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
	{
		((WebApps_eventGetCheatingReports_Parms*)Obj)->bIncludeReports = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebApps_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
	{
		((WebApps_eventGetCheatingReports_Parms*)Obj)->bIncludeBans = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebApps_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_reportidMin = { "reportidMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, reportidMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_timeBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_timeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_reportidMin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebApps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetCheatingReports", nullptr, nullptr, sizeof(WebApps_eventGetCheatingReports_Parms), Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetCheatingReports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics
	{
		struct WebApps_eventGetPlayersBanned_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetPlayersBanned_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetPlayersBanned_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetPlayersBanned_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebApps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetPlayersBanned", nullptr, nullptr, sizeof(WebApps_eventGetPlayersBanned_Parms), Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetPlayersBanned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetServerList_Statics
	{
		struct WebApps_eventGetServerList_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString Filter;
			int32 Limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, Filter), METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Filter_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServerList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebApps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetServerList", nullptr, nullptr, sizeof(WebApps_eventGetServerList_Parms), Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics
	{
		struct WebApps_eventGetServersAtAddress_Parms
		{
			FScriptDelegate Callback;
			FString addr;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_addr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetServersAtAddress_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_addr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_addr = { "addr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetServersAtAddress_Parms, addr), METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_addr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_addr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_addr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebApps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetServersAtAddress", nullptr, nullptr, sizeof(WebApps_eventGetServersAtAddress_Parms), Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetServersAtAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics
	{
		struct WebApps_eventSetAppBuildLive_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 buildID;
			FString betaKey;
			FString Description;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buildID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_betaKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_betaKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_buildID = { "buildID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, buildID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_betaKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_betaKey = { "betaKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, betaKey), METADATA_PARAMS(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_betaKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_betaKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_buildID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_betaKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Description,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebApps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "SetAppBuildLive", nullptr, nullptr, sizeof(WebApps_eventSetAppBuildLive_Parms), Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_SetAppBuildLive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics
	{
		struct WebApps_eventUpToDateCheck_Parms
		{
			FScriptDelegate Callback;
			int32 AppID;
			int32 Version;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventUpToDateCheck_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventUpToDateCheck_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventUpToDateCheck_Parms, Version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Version,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebApps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "UpToDateCheck", nullptr, nullptr, sizeof(WebApps_eventUpToDateCheck_Parms), Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_UpToDateCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebApps_NoRegister()
	{
		return UWebApps::StaticClass();
	}
	struct Z_Construct_UClass_UWebApps_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebApps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebApps_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebApps_GetAppBetas, "GetAppBetas" }, // 3774500346
		{ &Z_Construct_UFunction_UWebApps_GetAppBuilds, "GetAppBuilds" }, // 70442249
		{ &Z_Construct_UFunction_UWebApps_GetAppDepotVersions, "GetAppDepotVersions" }, // 2524278690
		{ &Z_Construct_UFunction_UWebApps_GetAppList, "GetAppList" }, // 2444524689
		{ &Z_Construct_UFunction_UWebApps_GetCheatingReports, "GetCheatingReports" }, // 18863504
		{ &Z_Construct_UFunction_UWebApps_GetPlayersBanned, "GetPlayersBanned" }, // 3713939696
		{ &Z_Construct_UFunction_UWebApps_GetServerList, "GetServerList" }, // 3309703224
		{ &Z_Construct_UFunction_UWebApps_GetServersAtAddress, "GetServersAtAddress" }, // 1175896197
		{ &Z_Construct_UFunction_UWebApps_SetAppBuildLive, "SetAppBuildLive" }, // 2138161401
		{ &Z_Construct_UFunction_UWebApps_UpToDateCheck, "UpToDateCheck" }, // 3269445820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebApps_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebApps.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebApps.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebApps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebApps>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebApps_Statics::ClassParams = {
		&UWebApps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebApps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebApps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebApps()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebApps_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebApps, 3569949724);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebApps>()
	{
		return UWebApps::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebApps(Z_Construct_UClass_UWebApps, &UWebApps::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebApps"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebApps);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
