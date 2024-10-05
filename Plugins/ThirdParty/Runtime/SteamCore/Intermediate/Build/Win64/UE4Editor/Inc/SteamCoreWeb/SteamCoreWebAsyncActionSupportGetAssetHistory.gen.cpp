// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionSupportGetAssetHistory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionSupportGetAssetHistory() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionSupportGetAssetHistory::execSupportGetAssetHistoryAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetID);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionSupportGetAssetHistory**)Z_Param__Result=USteamCoreWebAsyncActionSupportGetAssetHistory::SupportGetAssetHistoryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_AssetID,Z_Param_contextID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionSupportGetAssetHistory::StaticRegisterNativesUSteamCoreWebAsyncActionSupportGetAssetHistory()
	{
		UClass* Class = USteamCoreWebAsyncActionSupportGetAssetHistory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SupportGetAssetHistoryAsync", &USteamCoreWebAsyncActionSupportGetAssetHistory::execSupportGetAssetHistoryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics
	{
		struct SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppID;
			FString AssetID;
			FString contextID;
			USteamCoreWebAsyncActionSupportGetAssetHistory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AssetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, AssetID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AssetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AssetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_contextID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, contextID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_contextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_contextID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_AssetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_contextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionSupportGetAssetHistory.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory, nullptr, "SupportGetAssetHistoryAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionSupportGetAssetHistory_eventSupportGetAssetHistoryAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_NoRegister()
	{
		return USteamCoreWebAsyncActionSupportGetAssetHistory::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync, "SupportGetAssetHistoryAsync" }, // 3752750790
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionSupportGetAssetHistory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionSupportGetAssetHistory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionSupportGetAssetHistory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::ClassParams = {
		&USteamCoreWebAsyncActionSupportGetAssetHistory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionSupportGetAssetHistory, 3155589694);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionSupportGetAssetHistory>()
	{
		return USteamCoreWebAsyncActionSupportGetAssetHistory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory(Z_Construct_UClass_USteamCoreWebAsyncActionSupportGetAssetHistory, &USteamCoreWebAsyncActionSupportGetAssetHistory::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionSupportGetAssetHistory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionSupportGetAssetHistory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
