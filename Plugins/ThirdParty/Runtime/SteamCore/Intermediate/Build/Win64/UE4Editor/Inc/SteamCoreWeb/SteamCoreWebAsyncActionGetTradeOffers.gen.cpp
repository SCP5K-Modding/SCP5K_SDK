// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionGetTradeOffers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionGetTradeOffers() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetTradeOffers::execGetTradeOffersAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
		*(USteamCoreWebAsyncActionGetTradeOffers**)Z_Param__Result=USteamCoreWebAsyncActionGetTradeOffers::GetTradeOffersAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_bGetSentOffers,Z_Param_bGetReceivedOffers,Z_Param_bGetDescriptions,Z_Param_Language,Z_Param_bActiveOnly,Z_Param_bHistoricalOnly,Z_Param_timeHistoricalCutoff);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetTradeOffers::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffers()
	{
		UClass* Class = USteamCoreWebAsyncActionGetTradeOffers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTradeOffersAsync", &USteamCoreWebAsyncActionGetTradeOffers::execGetTradeOffersAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			bool bGetSentOffers;
			bool bGetReceivedOffers;
			bool bGetDescriptions;
			FString Language;
			bool bActiveOnly;
			bool bHistoricalOnly;
			int32 timeHistoricalCutoff;
			USteamCoreWebAsyncActionGetTradeOffers* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetSentOffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers = { "bGetSentOffers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetReceivedOffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers = { "bGetReceivedOffers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetDescriptions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Language_MetaData)) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bActiveOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly = { "bActiveOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bHistoricalOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly = { "bHistoricalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_timeHistoricalCutoff = { "timeHistoricalCutoff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, timeHistoricalCutoff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_timeHistoricalCutoff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetTradeOffers.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers, nullptr, "GetTradeOffersAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_NoRegister()
	{
		return USteamCoreWebAsyncActionGetTradeOffers::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync, "GetTradeOffersAsync" }, // 3798357002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionGetTradeOffers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetTradeOffers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeOffers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetTradeOffers::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetTradeOffers, 1313366362);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetTradeOffers>()
	{
		return USteamCoreWebAsyncActionGetTradeOffers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetTradeOffers(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers, &USteamCoreWebAsyncActionGetTradeOffers::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetTradeOffers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetTradeOffers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
