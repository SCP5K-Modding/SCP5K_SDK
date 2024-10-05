// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionInitTxn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionInitTxn() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionInitTxn::execInitTxnAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
		*(USteamCoreWebAsyncActionInitTxn**)Z_Param__Result=USteamCoreWebAsyncActionInitTxn::InitTxnAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_OrderId,Z_Param_SteamID,Z_Param_AppID,Z_Param_Language,Z_Param_Currency,Z_Param_userSession,Z_Param_ipaddress,Z_Param_ItemId,Z_Param_Quantity,Z_Param_Amount,Z_Param_Description,Z_Param_Category,Z_Param_associatedBundle,Z_Param_billingType,Z_Param_startDate,Z_Param_endDate,Z_Param_Period,Z_Param_Frequency,Z_Param_recurringAmt,Z_Param_bundleCount,Z_Param_bundleID,Z_Param_bundleQty,Z_Param_bundleDesc,Z_Param_bundleCategory);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionInitTxn::StaticRegisterNativesUSteamCoreWebAsyncActionInitTxn()
	{
		UClass* Class = USteamCoreWebAsyncActionInitTxn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitTxnAsync", &USteamCoreWebAsyncActionInitTxn::execInitTxnAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics
	{
		struct SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms
		{
			UObject* WorldContextObject;
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
			USteamCoreWebAsyncActionInitTxn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_OrderId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, OrderId), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_OrderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Currency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_userSession_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_userSession = { "userSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, userSession), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_userSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_userSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ipaddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ipaddress = { "ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, ipaddress), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ipaddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ipaddress_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ItemId_Inner = { "ItemId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, ItemId), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Amount_Inner = { "Amount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Amount), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Description_Inner = { "Description", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Description), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Category), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_associatedBundle_Inner = { "associatedBundle", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_associatedBundle = { "associatedBundle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, associatedBundle), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_billingType_Inner = { "billingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_billingType = { "billingType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, billingType), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_startDate_Inner = { "startDate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_startDate = { "startDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, startDate), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_endDate_Inner = { "endDate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, endDate), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Period_Inner = { "Period", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Period), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Frequency_Inner = { "Frequency", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, Frequency), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_recurringAmt_Inner = { "recurringAmt", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_recurringAmt = { "recurringAmt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, recurringAmt), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleCount_Inner = { "bundleCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleCount = { "bundleCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, bundleCount), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleID_Inner = { "bundleID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleID = { "bundleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, bundleID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleQty_Inner = { "bundleQty", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleQty = { "bundleQty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, bundleQty), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleDesc_Inner = { "bundleDesc", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleDesc = { "bundleDesc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, bundleDesc), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleCategory_Inner = { "bundleCategory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleCategory = { "bundleCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, bundleCategory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_userSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ipaddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ItemId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Quantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Amount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Description_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Category_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_associatedBundle_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_associatedBundle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_billingType_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_billingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_startDate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_startDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_endDate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Period_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Frequency_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_recurringAmt_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_recurringAmt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleQty_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleQty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleDesc_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleCategory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_bundleCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionInitTxn.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn, nullptr, "InitTxnAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionInitTxn_eventInitTxnAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_NoRegister()
	{
		return USteamCoreWebAsyncActionInitTxn::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionInitTxn_InitTxnAsync, "InitTxnAsync" }, // 3226800846
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionInitTxn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionInitTxn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionInitTxn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::ClassParams = {
		&USteamCoreWebAsyncActionInitTxn::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionInitTxn, 721947603);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionInitTxn>()
	{
		return USteamCoreWebAsyncActionInitTxn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionInitTxn(Z_Construct_UClass_USteamCoreWebAsyncActionInitTxn, &USteamCoreWebAsyncActionInitTxn::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionInitTxn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionInitTxn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
