// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebEconMarketService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebEconMarketService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconMarketService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconMarketService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebEconMarketService::execCancelAppListingsForUser)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_UBOOL(Z_Param_bSynchronous);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAppListingsForUser(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_bSynchronous);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconMarketService::execGetAssetID)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_listingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAssetID(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_listingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconMarketService::execGetMarketEligibility)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMarketEligibility(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconMarketService::execGetPopular)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FIntProperty,Z_Param_rows);
		P_GET_PROPERTY(FIntProperty,Z_Param_Start);
		P_GET_PROPERTY(FIntProperty,Z_Param_filterAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_eCurrency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPopular(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_Language,Z_Param_rows,Z_Param_Start,Z_Param_filterAppID,Z_Param_eCurrency);
		P_NATIVE_END;
	}
	void UWebEconMarketService::StaticRegisterNativesUWebEconMarketService()
	{
		UClass* Class = UWebEconMarketService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAppListingsForUser", &UWebEconMarketService::execCancelAppListingsForUser },
			{ "GetAssetID", &UWebEconMarketService::execGetAssetID },
			{ "GetMarketEligibility", &UWebEconMarketService::execGetMarketEligibility },
			{ "GetPopular", &UWebEconMarketService::execGetPopular },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics
	{
		struct WebEconMarketService_eventCancelAppListingsForUser_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			bool bSynchronous;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static void NewProp_bSynchronous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSynchronous;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_SteamID_MetaData)) };
	void Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous_SetBit(void* Obj)
	{
		((WebEconMarketService_eventCancelAppListingsForUser_Parms*)Obj)->bSynchronous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous = { "bSynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconMarketService_eventCancelAppListingsForUser_Parms), &Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconMarketService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "CancelAppListingsForUser", nullptr, nullptr, sizeof(WebEconMarketService_eventCancelAppListingsForUser_Parms), Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics
	{
		struct WebEconMarketService_eventGetAssetID_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString listingID;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_listingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_listingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_listingID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_listingID = { "listingID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, listingID), METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_listingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_listingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_listingID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconMarketService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "GetAssetID", nullptr, nullptr, sizeof(WebEconMarketService_eventGetAssetID_Parms), Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconMarketService_GetAssetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics
	{
		struct WebEconMarketService_eventGetMarketEligibility_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetMarketEligibility_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetMarketEligibility_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetMarketEligibility_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconMarketService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "GetMarketEligibility", nullptr, nullptr, sizeof(WebEconMarketService_eventGetMarketEligibility_Parms), Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics
	{
		struct WebEconMarketService_eventGetPopular_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString Language;
			int32 rows;
			int32 Start;
			int32 filterAppID;
			int32 eCurrency;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rows;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_filterAppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_eCurrency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_rows = { "rows", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, rows), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Start), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_filterAppID = { "filterAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, filterAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_eCurrency = { "eCurrency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, eCurrency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_rows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_filterAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_eCurrency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconMarketService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "GetPopular", nullptr, nullptr, sizeof(WebEconMarketService_eventGetPopular_Parms), Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconMarketService_GetPopular()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebEconMarketService_NoRegister()
	{
		return UWebEconMarketService::StaticClass();
	}
	struct Z_Construct_UClass_UWebEconMarketService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebEconMarketService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebEconMarketService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser, "CancelAppListingsForUser" }, // 3330663292
		{ &Z_Construct_UFunction_UWebEconMarketService_GetAssetID, "GetAssetID" }, // 448302800
		{ &Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility, "GetMarketEligibility" }, // 1514665160
		{ &Z_Construct_UFunction_UWebEconMarketService_GetPopular, "GetPopular" }, // 3325917783
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebEconMarketService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebEconMarketService.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebEconMarketService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebEconMarketService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebEconMarketService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebEconMarketService_Statics::ClassParams = {
		&UWebEconMarketService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebEconMarketService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebEconMarketService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebEconMarketService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebEconMarketService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebEconMarketService, 2543450583);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebEconMarketService>()
	{
		return UWebEconMarketService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebEconMarketService(Z_Construct_UClass_UWebEconMarketService, &UWebEconMarketService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebEconMarketService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebEconMarketService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
