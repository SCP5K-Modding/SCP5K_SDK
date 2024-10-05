// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionStartAssetTransaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionStartAssetTransaction() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionStartAssetTransaction::execStartAssetTransactionAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetID);
		P_GET_PROPERTY(FIntProperty,Z_Param_assetQuantity);
		P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FStrProperty,Z_Param_ipaddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_referer);
		P_GET_UBOOL(Z_Param_bClientAuth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionStartAssetTransaction**)Z_Param__Result=USteamCoreWebAsyncActionStartAssetTransaction::StartAssetTransactionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_AssetID,Z_Param_assetQuantity,Z_Param_Currency,Z_Param_Language,Z_Param_ipaddress,Z_Param_referer,Z_Param_bClientAuth);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionStartAssetTransaction::StaticRegisterNativesUSteamCoreWebAsyncActionStartAssetTransaction()
	{
		UClass* Class = USteamCoreWebAsyncActionStartAssetTransaction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartAssetTransactionAsync", &USteamCoreWebAsyncActionStartAssetTransaction::execStartAssetTransactionAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics
	{
		struct SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppID;
			FString SteamID;
			FString AssetID;
			int32 assetQuantity;
			FString Currency;
			FString Language;
			FString ipaddress;
			FString referer;
			bool bClientAuth;
			USteamCoreWebAsyncActionStartAssetTransaction* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_assetQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ipaddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ipaddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_referer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_referer;
		static void NewProp_bClientAuth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientAuth;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, AssetID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_assetQuantity = { "assetQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, assetQuantity), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Currency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_ipaddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_ipaddress = { "ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, ipaddress), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_ipaddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_ipaddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_referer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_referer = { "referer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, referer), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_referer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_referer_MetaData)) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms*)Obj)->bClientAuth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth = { "bClientAuth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_AssetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_assetQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_ipaddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_referer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_bClientAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionStartAssetTransaction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction, nullptr, "StartAssetTransactionAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionStartAssetTransaction_eventStartAssetTransactionAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_NoRegister()
	{
		return USteamCoreWebAsyncActionStartAssetTransaction::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync, "StartAssetTransactionAsync" }, // 223684448
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionStartAssetTransaction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionStartAssetTransaction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionStartAssetTransaction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::ClassParams = {
		&USteamCoreWebAsyncActionStartAssetTransaction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionStartAssetTransaction, 1356453816);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionStartAssetTransaction>()
	{
		return USteamCoreWebAsyncActionStartAssetTransaction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionStartAssetTransaction(Z_Construct_UClass_USteamCoreWebAsyncActionStartAssetTransaction, &USteamCoreWebAsyncActionStartAssetTransaction::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionStartAssetTransaction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionStartAssetTransaction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
