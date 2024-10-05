// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreMatchmakingServersAsyncActionServerRules.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreMatchmakingServersAsyncActionServerRules() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerRule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionServerRules::execHandleCallback)
	{
		P_GET_TARRAY_REF(FGameServerRule,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionServerRules::execServerRulesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_IP);
		P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionServerRules**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionServerRules::ServerRulesAsync(Z_Param_WorldContextObject,Z_Param_IP,Z_Param_QueryPort);
		P_NATIVE_END;
	}
	void USteamCoreMatchmakingServersAsyncActionServerRules::StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionServerRules()
	{
		UClass* Class = USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreMatchmakingServersAsyncActionServerRules::execHandleCallback },
			{ "ServerRulesAsync", &USteamCoreMatchmakingServersAsyncActionServerRules::execServerRulesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms
		{
			TArray<FGameServerRule> Data;
			bool bWasSuccessful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameServerRule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionServerRules.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms
		{
			UObject* WorldContextObject;
			FString IP;
			int32 QueryPort;
			USteamCoreMatchmakingServersAsyncActionServerRules* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_IP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, IP), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_IP_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_QueryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionServerRules.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules, nullptr, "ServerRulesAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_NoRegister()
	{
		return USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback, "HandleCallback" }, // 1653477391
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync, "ServerRulesAsync" }, // 2146816605
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreMatchmakingServersAsyncActionServerRules.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionServerRules.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreMatchmakingServersAsyncActionServerRules" },
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionServerRules.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreMatchmakingServersAsyncActionServerRules, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingServersAsyncActionServerRules>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::ClassParams = {
		&USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreMatchmakingServersAsyncActionServerRules, 1969811718);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingServersAsyncActionServerRules>()
	{
		return USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreMatchmakingServersAsyncActionServerRules(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules, &USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreMatchmakingServersAsyncActionServerRules"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingServersAsyncActionServerRules);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
