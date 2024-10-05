// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionGetTradeHistory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionGetTradeHistory() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetTradeHistory::execGetTradeHistoryAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
		*(USteamCoreWebAsyncActionGetTradeHistory**)Z_Param__Result=USteamCoreWebAsyncActionGetTradeHistory::GetTradeHistoryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_maxTrades,Z_Param_startAfterTime,Z_Param_startAfterTradeID,Z_Param_bNavigatingBack,Z_Param_bGetDescriptions,Z_Param_Language,Z_Param_bIncludeFailed,Z_Param_bIncludeTotal);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetTradeHistory::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeHistory()
	{
		UClass* Class = USteamCoreWebAsyncActionGetTradeHistory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTradeHistoryAsync", &USteamCoreWebAsyncActionGetTradeHistory::execGetTradeHistoryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 maxTrades;
			int32 startAfterTime;
			FString startAfterTradeID;
			bool bNavigatingBack;
			bool bGetDescriptions;
			FString Language;
			bool bIncludeFailed;
			bool bIncludeTotal;
			USteamCoreWebAsyncActionGetTradeHistory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_maxTrades = { "maxTrades", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, maxTrades), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_startAfterTime = { "startAfterTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, startAfterTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_startAfterTradeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_startAfterTradeID = { "startAfterTradeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, startAfterTradeID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_startAfterTradeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_startAfterTradeID_MetaData)) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bNavigatingBack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack = { "bNavigatingBack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bGetDescriptions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Language_MetaData)) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bIncludeFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed = { "bIncludeFailed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bIncludeTotal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal = { "bIncludeTotal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_maxTrades,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_startAfterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_startAfterTradeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetTradeHistory.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory, nullptr, "GetTradeHistoryAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_NoRegister()
	{
		return USteamCoreWebAsyncActionGetTradeHistory::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync, "GetTradeHistoryAsync" }, // 1859481875
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionGetTradeHistory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetTradeHistory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeHistory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetTradeHistory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetTradeHistory, 1837862494);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetTradeHistory>()
	{
		return USteamCoreWebAsyncActionGetTradeHistory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetTradeHistory(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory, &USteamCoreWebAsyncActionGetTradeHistory::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetTradeHistory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetTradeHistory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
