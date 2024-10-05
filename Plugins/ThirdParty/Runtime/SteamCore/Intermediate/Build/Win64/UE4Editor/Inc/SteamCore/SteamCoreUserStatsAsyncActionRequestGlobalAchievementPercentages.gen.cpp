// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::execHandleCallback)
	{
		P_GET_STRUCT_REF(FGlobalAchievementPercentagesReady,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::execRequestGlobalAchievementPercentagesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages**)Z_Param__Result=USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::RequestGlobalAchievementPercentagesAsync(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticRegisterNativesUSteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages()
	{
		UClass* Class = USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::execHandleCallback },
			{ "RequestGlobalAchievementPercentagesAsync", &USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::execRequestGlobalAchievementPercentagesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics
	{
		struct SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms
		{
			FGlobalAchievementPercentagesReady Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics
	{
		struct SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms
		{
			UObject* WorldContextObject;
			USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages, nullptr, "RequestGlobalAchievementPercentagesAsync", nullptr, nullptr, sizeof(SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_NoRegister()
	{
		return USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback, "HandleCallback" }, // 4100117076
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync, "RequestGlobalAchievementPercentagesAsync" }, // 4163096171
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages" },
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::ClassParams = {
		&USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages, 3840463943);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages>()
	{
		return USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages, &USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
