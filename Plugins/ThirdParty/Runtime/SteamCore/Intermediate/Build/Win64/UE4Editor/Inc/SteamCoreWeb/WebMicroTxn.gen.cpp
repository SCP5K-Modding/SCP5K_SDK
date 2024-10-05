// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebMicroTxn.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebMicroTxn() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebMicroTxn_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebMicroTxn();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebMicroTxn::execAdjustAgreement)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_agreementID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_nextProcessDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustAgreement(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_agreementID,Z_Param_AppID,Z_Param_nextProcessDate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execCancelAgreement)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_agreementID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAgreement(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_agreementID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execFinalizeTxn)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinalizeTxn(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_OrderId,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execGetReport)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Time);
		P_GET_PROPERTY(FStrProperty,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetReport(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_Time,Z_Param_Type,Z_Param_MaxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execGetUserAgreementInfo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserAgreementInfo(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execGetUserInfo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ipaddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserInfo(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_ipaddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execInitTxn)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
		P_GET_PROPERTY(FStrProperty,Z_Param_userSession);
		P_GET_PROPERTY(FStrProperty,Z_Param_ipaddress);
		P_GET_TARRAY(int32,Z_Param_ItemId);
		P_GET_TARRAY(int32,Z_Param_Quantity);
		P_GET_TARRAY(FString,Z_Param_Amount);
		P_GET_TARRAY(FString,Z_Param_Description);
		P_GET_TARRAY(FString,Z_Param_Category);
		P_GET_TARRAY(int32,Z_Param_associatedBundle);
		P_GET_TARRAY(FString,Z_Param_billingType);
		P_GET_TARRAY(FString,Z_Param_startDate);
		P_GET_TARRAY(FString,Z_Param_endDate);
		P_GET_TARRAY(FString,Z_Param_Period);
		P_GET_TARRAY(int32,Z_Param_Frequency);
		P_GET_TARRAY(FString,Z_Param_recurringAmt);
		P_GET_TARRAY(int32,Z_Param_bundleCount);
		P_GET_TARRAY(int32,Z_Param_bundleID);
		P_GET_TARRAY(int32,Z_Param_bundleQty);
		P_GET_TARRAY(FString,Z_Param_bundleDesc);
		P_GET_TARRAY(FString,Z_Param_bundleCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitTxn(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_OrderId,Z_Param_SteamID,Z_Param_AppID,Z_Param_Language,Z_Param_Currency,Z_Param_userSession,Z_Param_ipaddress,Z_Param_ItemId,Z_Param_Quantity,Z_Param_Amount,Z_Param_Description,Z_Param_Category,Z_Param_associatedBundle,Z_Param_billingType,Z_Param_startDate,Z_Param_endDate,Z_Param_Period,Z_Param_Frequency,Z_Param_recurringAmt,Z_Param_bundleCount,Z_Param_bundleID,Z_Param_bundleQty,Z_Param_bundleDesc,Z_Param_bundleCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execMakeTransactionID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UWebMicroTxn::MakeTransactionID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execProcessAgreement)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_agreementID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessAgreement(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_OrderId,Z_Param_SteamID,Z_Param_agreementID,Z_Param_AppID,Z_Param_Amount,Z_Param_Currency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execQueryTxn)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
		P_GET_PROPERTY(FStrProperty,Z_Param_transID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryTxn(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_OrderId,Z_Param_transID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execRefundTxn)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefundTxn(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_OrderId,Z_Param_AppID);
		P_NATIVE_END;
	}
	void UWebMicroTxn::StaticRegisterNativesUWebMicroTxn()
	{
		UClass* Class = UWebMicroTxn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAgreement", &UWebMicroTxn::execAdjustAgreement },
			{ "CancelAgreement", &UWebMicroTxn::execCancelAgreement },
			{ "FinalizeTxn", &UWebMicroTxn::execFinalizeTxn },
			{ "GetReport", &UWebMicroTxn::execGetReport },
			{ "GetUserAgreementInfo", &UWebMicroTxn::execGetUserAgreementInfo },
			{ "GetUserInfo", &UWebMicroTxn::execGetUserInfo },
			{ "InitTxn", &UWebMicroTxn::execInitTxn },
			{ "MakeTransactionID", &UWebMicroTxn::execMakeTransactionID },
			{ "ProcessAgreement", &UWebMicroTxn::execProcessAgreement },
			{ "QueryTxn", &UWebMicroTxn::execQueryTxn },
			{ "RefundTxn", &UWebMicroTxn::execRefundTxn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics
	{
		struct WebMicroTxn_eventAdjustAgreement_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			FString agreementID;
			int32 AppID;
			FString nextProcessDate;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_agreementID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_agreementID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextProcessDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nextProcessDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_agreementID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_agreementID = { "agreementID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, agreementID), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_agreementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_agreementID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_nextProcessDate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_nextProcessDate = { "nextProcessDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, nextProcessDate), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_nextProcessDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_nextProcessDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_agreementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_nextProcessDate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebMicroTxn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "AdjustAgreement", nullptr, nullptr, sizeof(WebMicroTxn_eventAdjustAgreement_Parms), Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics
	{
		struct WebMicroTxn_eventCancelAgreement_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			FString agreementID;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_agreementID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_agreementID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_agreementID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_agreementID = { "agreementID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, agreementID), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_agreementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_agreementID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_agreementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebMicroTxn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "CancelAgreement", nullptr, nullptr, sizeof(WebMicroTxn_eventCancelAgreement_Parms), Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_CancelAgreement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics
	{
		struct WebMicroTxn_eventFinalizeTxn_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString OrderId;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventFinalizeTxn_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventFinalizeTxn_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_OrderId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventFinalizeTxn_Parms, OrderId), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_OrderId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventFinalizeTxn_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebMicroTxn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "FinalizeTxn", nullptr, nullptr, sizeof(WebMicroTxn_eventFinalizeTxn_Parms), Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics
	{
		struct WebMicroTxn_eventGetReport_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString Time;
			FString Type;
			int32 MaxResults;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, Type), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_MaxResults,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebMicroTxn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "GetReport", nullptr, nullptr, sizeof(WebMicroTxn_eventGetReport_Parms), Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_GetReport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics
	{
		struct WebMicroTxn_eventGetUserAgreementInfo_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserAgreementInfo_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserAgreementInfo_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserAgreementInfo_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserAgreementInfo_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebMicroTxn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "GetUserAgreementInfo", nullptr, nullptr, sizeof(WebMicroTxn_eventGetUserAgreementInfo_Parms), Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics
	{
		struct WebMicroTxn_eventGetUserInfo_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 ipaddress;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ipaddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserInfo_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserInfo_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserInfo_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_ipaddress = { "ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserInfo_Parms, ipaddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_ipaddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebMicroTxn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "GetUserInfo", nullptr, nullptr, sizeof(WebMicroTxn_eventGetUserInfo_Parms), Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_GetUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics
	{
		struct WebMicroTxn_eventInitTxn_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString OrderId;
			FString SteamID;
			int32 AppID;
			FString Language;
			FString Currency;
			FString userSession;
			FString ipaddress;
			TArray<int32> ItemId;
			TArray<int32> Quantity;
			TArray<FString> Amount;
			TArray<FString> Description;
			TArray<FString> Category;
			TArray<int32> associatedBundle;
			TArray<FString> billingType;
			TArray<FString> startDate;
			TArray<FString> endDate;
			TArray<FString> Period;
			TArray<int32> Frequency;
			TArray<FString> recurringAmt;
			TArray<int32> bundleCount;
			TArray<int32> bundleID;
			TArray<int32> bundleQty;
			TArray<FString> bundleDesc;
			TArray<FString> bundleCategory;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ipaddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ipaddress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemId_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Amount_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_associatedBundle_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_associatedBundle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_billingType_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_billingType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_startDate_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_startDate;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_endDate_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_endDate;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Period_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Period;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Frequency_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Frequency;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_recurringAmt_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_recurringAmt;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bundleCount_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bundleCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bundleID_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bundleID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bundleQty_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bundleQty;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bundleDesc_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bundleDesc;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bundleCategory_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bundleCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_OrderId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, OrderId), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_OrderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Currency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_userSession_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_userSession = { "userSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, userSession), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_userSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_userSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ipaddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ipaddress = { "ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, ipaddress), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ipaddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ipaddress_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ItemId_Inner = { "ItemId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, ItemId), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Amount_Inner = { "Amount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Amount), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Description_Inner = { "Description", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Description), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Category), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_associatedBundle_Inner = { "associatedBundle", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_associatedBundle = { "associatedBundle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, associatedBundle), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_billingType_Inner = { "billingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_billingType = { "billingType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, billingType), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_startDate_Inner = { "startDate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_startDate = { "startDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, startDate), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_endDate_Inner = { "endDate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, endDate), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Period_Inner = { "Period", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Period), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Frequency_Inner = { "Frequency", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Frequency), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_recurringAmt_Inner = { "recurringAmt", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_recurringAmt = { "recurringAmt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, recurringAmt), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCount_Inner = { "bundleCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCount = { "bundleCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, bundleCount), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleID_Inner = { "bundleID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleID = { "bundleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, bundleID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleQty_Inner = { "bundleQty", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleQty = { "bundleQty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, bundleQty), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleDesc_Inner = { "bundleDesc", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleDesc = { "bundleDesc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, bundleDesc), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCategory_Inner = { "bundleCategory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCategory = { "bundleCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, bundleCategory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_userSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ipaddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ItemId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Quantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Amount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Description_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Category_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_associatedBundle_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_associatedBundle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_billingType_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_billingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_startDate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_startDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_endDate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Period_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Frequency_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_recurringAmt_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_recurringAmt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleQty_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleQty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleDesc_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCategory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebMicroTxn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "InitTxn", nullptr, nullptr, sizeof(WebMicroTxn_eventInitTxn_Parms), Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_InitTxn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics
	{
		struct WebMicroTxn_eventMakeTransactionID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventMakeTransactionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebMicroTxn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "MakeTransactionID", nullptr, nullptr, sizeof(WebMicroTxn_eventMakeTransactionID_Parms), Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics
	{
		struct WebMicroTxn_eventProcessAgreement_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString OrderId;
			FString SteamID;
			FString agreementID;
			int32 AppID;
			int32 Amount;
			FString Currency;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_agreementID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_agreementID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_OrderId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, OrderId), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_OrderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_agreementID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_agreementID = { "agreementID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, agreementID), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_agreementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_agreementID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_agreementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebMicroTxn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "ProcessAgreement", nullptr, nullptr, sizeof(WebMicroTxn_eventProcessAgreement_Parms), Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics
	{
		struct WebMicroTxn_eventQueryTxn_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString OrderId;
			FString transID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_transID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_OrderId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, OrderId), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_OrderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_transID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_transID = { "transID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, transID), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_transID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_transID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_transID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebMicroTxn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "QueryTxn", nullptr, nullptr, sizeof(WebMicroTxn_eventQueryTxn_Parms), Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_QueryTxn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics
	{
		struct WebMicroTxn_eventRefundTxn_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString OrderId;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventRefundTxn_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventRefundTxn_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_OrderId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventRefundTxn_Parms, OrderId), METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_OrderId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventRefundTxn_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebMicroTxn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "RefundTxn", nullptr, nullptr, sizeof(WebMicroTxn_eventRefundTxn_Parms), Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_RefundTxn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebMicroTxn_NoRegister()
	{
		return UWebMicroTxn::StaticClass();
	}
	struct Z_Construct_UClass_UWebMicroTxn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebMicroTxn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebMicroTxn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement, "AdjustAgreement" }, // 4231802506
		{ &Z_Construct_UFunction_UWebMicroTxn_CancelAgreement, "CancelAgreement" }, // 2436300246
		{ &Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn, "FinalizeTxn" }, // 2316357417
		{ &Z_Construct_UFunction_UWebMicroTxn_GetReport, "GetReport" }, // 856371731
		{ &Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo, "GetUserAgreementInfo" }, // 3508377461
		{ &Z_Construct_UFunction_UWebMicroTxn_GetUserInfo, "GetUserInfo" }, // 827235602
		{ &Z_Construct_UFunction_UWebMicroTxn_InitTxn, "InitTxn" }, // 929717831
		{ &Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID, "MakeTransactionID" }, // 971366932
		{ &Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement, "ProcessAgreement" }, // 2011308857
		{ &Z_Construct_UFunction_UWebMicroTxn_QueryTxn, "QueryTxn" }, // 2098811986
		{ &Z_Construct_UFunction_UWebMicroTxn_RefundTxn, "RefundTxn" }, // 323315621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebMicroTxn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebMicroTxn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebMicroTxn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebMicroTxn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebMicroTxn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebMicroTxn_Statics::ClassParams = {
		&UWebMicroTxn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebMicroTxn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebMicroTxn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebMicroTxn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebMicroTxn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebMicroTxn, 2226836756);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebMicroTxn>()
	{
		return UWebMicroTxn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebMicroTxn(Z_Construct_UClass_UWebMicroTxn, &UWebMicroTxn::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebMicroTxn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebMicroTxn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
