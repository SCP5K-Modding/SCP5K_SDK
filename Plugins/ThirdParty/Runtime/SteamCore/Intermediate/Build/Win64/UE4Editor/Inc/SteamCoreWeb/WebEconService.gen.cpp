// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebEconService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebEconService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebEconService::execCancelTradeOffer)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_tradeOfferID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelTradeOffer(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_tradeOfferID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execDeclineTradeOffer)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_tradeOfferID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeclineTradeOffer(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_tradeOfferID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execFlushAssetAppearanceCache)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushAssetAppearanceCache(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execFlushContextCache)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushContextCache(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execFlushInventoryCache)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushInventoryCache(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_contextID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execGetTradeHistory)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxTrades);
		P_GET_PROPERTY(FIntProperty,Z_Param_startAfterTime);
		P_GET_PROPERTY(FStrProperty,Z_Param_startAfterTradeID);
		P_GET_UBOOL(Z_Param_bNavigatingBack);
		P_GET_UBOOL(Z_Param_bGetDescriptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_UBOOL(Z_Param_bIncludeFailed);
		P_GET_UBOOL(Z_Param_bIncludeTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTradeHistory(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_maxTrades,Z_Param_startAfterTime,Z_Param_startAfterTradeID,Z_Param_bNavigatingBack,Z_Param_bGetDescriptions,Z_Param_Language,Z_Param_bIncludeFailed,Z_Param_bIncludeTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execGetTradeOffer)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_tradeOfferID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTradeOffer(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_tradeOfferID,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execGetTradeOffers)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_bGetSentOffers);
		P_GET_UBOOL(Z_Param_bGetReceivedOffers);
		P_GET_UBOOL(Z_Param_bGetDescriptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_UBOOL(Z_Param_bActiveOnly);
		P_GET_UBOOL(Z_Param_bHistoricalOnly);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeHistoricalCutoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTradeOffers(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_bGetSentOffers,Z_Param_bGetReceivedOffers,Z_Param_bGetDescriptions,Z_Param_Language,Z_Param_bActiveOnly,Z_Param_bHistoricalOnly,Z_Param_timeHistoricalCutoff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execGetTradeOffersSummary)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeLastVisit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTradeOffersSummary(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_timeLastVisit);
		P_NATIVE_END;
	}
	void UWebEconService::StaticRegisterNativesUWebEconService()
	{
		UClass* Class = UWebEconService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelTradeOffer", &UWebEconService::execCancelTradeOffer },
			{ "DeclineTradeOffer", &UWebEconService::execDeclineTradeOffer },
			{ "FlushAssetAppearanceCache", &UWebEconService::execFlushAssetAppearanceCache },
			{ "FlushContextCache", &UWebEconService::execFlushContextCache },
			{ "FlushInventoryCache", &UWebEconService::execFlushInventoryCache },
			{ "GetTradeHistory", &UWebEconService::execGetTradeHistory },
			{ "GetTradeOffer", &UWebEconService::execGetTradeOffer },
			{ "GetTradeOffers", &UWebEconService::execGetTradeOffers },
			{ "GetTradeOffersSummary", &UWebEconService::execGetTradeOffersSummary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics
	{
		struct WebEconService_eventCancelTradeOffer_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString tradeOfferID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tradeOfferID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tradeOfferID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventCancelTradeOffer_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventCancelTradeOffer_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_tradeOfferID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_tradeOfferID = { "tradeOfferID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventCancelTradeOffer_Parms, tradeOfferID), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_tradeOfferID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_tradeOfferID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_tradeOfferID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "CancelTradeOffer", nullptr, nullptr, sizeof(WebEconService_eventCancelTradeOffer_Parms), Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_CancelTradeOffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics
	{
		struct WebEconService_eventDeclineTradeOffer_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString tradeOfferID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tradeOfferID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tradeOfferID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventDeclineTradeOffer_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventDeclineTradeOffer_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_tradeOfferID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_tradeOfferID = { "tradeOfferID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventDeclineTradeOffer_Parms, tradeOfferID), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_tradeOfferID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_tradeOfferID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_tradeOfferID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "DeclineTradeOffer", nullptr, nullptr, sizeof(WebEconService_eventDeclineTradeOffer_Parms), Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_DeclineTradeOffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics
	{
		struct WebEconService_eventFlushAssetAppearanceCache_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushAssetAppearanceCache_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushAssetAppearanceCache_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushAssetAppearanceCache_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "FlushAssetAppearanceCache", nullptr, nullptr, sizeof(WebEconService_eventFlushAssetAppearanceCache_Parms), Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics
	{
		struct WebEconService_eventFlushContextCache_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushContextCache_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushContextCache_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushContextCache_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "FlushContextCache", nullptr, nullptr, sizeof(WebEconService_eventFlushContextCache_Parms), Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_FlushContextCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics
	{
		struct WebEconService_eventFlushInventoryCache_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			FString contextID;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_contextID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, contextID), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_contextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_contextID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_contextID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "FlushInventoryCache", nullptr, nullptr, sizeof(WebEconService_eventFlushInventoryCache_Parms), Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_FlushInventoryCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics
	{
		struct WebEconService_eventGetTradeHistory_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 maxTrades;
			int32 startAfterTime;
			FString startAfterTradeID;
			bool bNavigatingBack;
			bool bGetDescriptions;
			FString Language;
			bool bIncludeFailed;
			bool bIncludeTotal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxTrades;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startAfterTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startAfterTradeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_startAfterTradeID;
		static void NewProp_bNavigatingBack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavigatingBack;
		static void NewProp_bGetDescriptions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetDescriptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static void NewProp_bIncludeFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeFailed;
		static void NewProp_bIncludeTotal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeTotal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_maxTrades = { "maxTrades", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, maxTrades), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_startAfterTime = { "startAfterTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, startAfterTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_startAfterTradeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_startAfterTradeID = { "startAfterTradeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, startAfterTradeID), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_startAfterTradeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_startAfterTradeID_MetaData)) };
	void Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bNavigatingBack_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeHistory_Parms*)Obj)->bNavigatingBack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bNavigatingBack = { "bNavigatingBack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeHistory_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bNavigatingBack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeHistory_Parms*)Obj)->bGetDescriptions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeHistory_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Language_MetaData)) };
	void Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeFailed_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeHistory_Parms*)Obj)->bIncludeFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeFailed = { "bIncludeFailed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeHistory_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeFailed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeTotal_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeHistory_Parms*)Obj)->bIncludeTotal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeTotal = { "bIncludeTotal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeHistory_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeTotal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_maxTrades,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_startAfterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_startAfterTradeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bNavigatingBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bGetDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeTotal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "GetTradeHistory", nullptr, nullptr, sizeof(WebEconService_eventGetTradeHistory_Parms), Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_GetTradeHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics
	{
		struct WebEconService_eventGetTradeOffer_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString tradeOfferID;
			FString Language;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tradeOfferID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tradeOfferID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffer_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffer_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_tradeOfferID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_tradeOfferID = { "tradeOfferID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffer_Parms, tradeOfferID), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_tradeOfferID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_tradeOfferID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffer_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_tradeOfferID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "GetTradeOffer", nullptr, nullptr, sizeof(WebEconService_eventGetTradeOffer_Parms), Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_GetTradeOffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics
	{
		struct WebEconService_eventGetTradeOffers_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			bool bGetSentOffers;
			bool bGetReceivedOffers;
			bool bGetDescriptions;
			FString Language;
			bool bActiveOnly;
			bool bHistoricalOnly;
			int32 timeHistoricalCutoff;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_bGetSentOffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetSentOffers;
		static void NewProp_bGetReceivedOffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetReceivedOffers;
		static void NewProp_bGetDescriptions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetDescriptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static void NewProp_bActiveOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActiveOnly;
		static void NewProp_bHistoricalOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHistoricalOnly;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeHistoricalCutoff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffers_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffers_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetSentOffers_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bGetSentOffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetSentOffers = { "bGetSentOffers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetSentOffers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetReceivedOffers_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bGetReceivedOffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetReceivedOffers = { "bGetReceivedOffers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetReceivedOffers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bGetDescriptions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffers_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Language_MetaData)) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bActiveOnly_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bActiveOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bActiveOnly = { "bActiveOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bActiveOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bHistoricalOnly_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bHistoricalOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bHistoricalOnly = { "bHistoricalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bHistoricalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_timeHistoricalCutoff = { "timeHistoricalCutoff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffers_Parms, timeHistoricalCutoff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetSentOffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetReceivedOffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bActiveOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bHistoricalOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_timeHistoricalCutoff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "GetTradeOffers", nullptr, nullptr, sizeof(WebEconService_eventGetTradeOffers_Parms), Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_GetTradeOffers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics
	{
		struct WebEconService_eventGetTradeOffersSummary_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 timeLastVisit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeLastVisit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffersSummary_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffersSummary_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_timeLastVisit = { "timeLastVisit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffersSummary_Parms, timeLastVisit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_timeLastVisit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebEconService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "GetTradeOffersSummary", nullptr, nullptr, sizeof(WebEconService_eventGetTradeOffersSummary_Parms), Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebEconService_NoRegister()
	{
		return UWebEconService::StaticClass();
	}
	struct Z_Construct_UClass_UWebEconService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebEconService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebEconService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebEconService_CancelTradeOffer, "CancelTradeOffer" }, // 704225128
		{ &Z_Construct_UFunction_UWebEconService_DeclineTradeOffer, "DeclineTradeOffer" }, // 3445304680
		{ &Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache, "FlushAssetAppearanceCache" }, // 1404357382
		{ &Z_Construct_UFunction_UWebEconService_FlushContextCache, "FlushContextCache" }, // 158736603
		{ &Z_Construct_UFunction_UWebEconService_FlushInventoryCache, "FlushInventoryCache" }, // 2684436325
		{ &Z_Construct_UFunction_UWebEconService_GetTradeHistory, "GetTradeHistory" }, // 1670190783
		{ &Z_Construct_UFunction_UWebEconService_GetTradeOffer, "GetTradeOffer" }, // 591114859
		{ &Z_Construct_UFunction_UWebEconService_GetTradeOffers, "GetTradeOffers" }, // 1355510444
		{ &Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary, "GetTradeOffersSummary" }, // 2038863346
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebEconService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebEconService.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebEconService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebEconService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebEconService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebEconService_Statics::ClassParams = {
		&UWebEconService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebEconService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebEconService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebEconService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebEconService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebEconService, 3017784257);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebEconService>()
	{
		return UWebEconService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebEconService(Z_Construct_UClass_UWebEconService, &UWebEconService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebEconService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebEconService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
