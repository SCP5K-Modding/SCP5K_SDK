// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordActivity/Public/ClearActivityProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClearActivityProxy() {}
// Cross Module References
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UClearActivityProxy_NoRegister();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UClearActivityProxy();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UBaseActivityAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordActivity();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UDiscordActivityManager_NoRegister();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UClearActivityProxy::execClearActivity)
	{
		P_GET_OBJECT(UDiscordActivityManager,Z_Param_ActivityManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClearActivityProxy**)Z_Param__Result=UClearActivityProxy::ClearActivity(Z_Param_ActivityManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClearActivityProxy::execOnActivityClearedInternal)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActivityClearedInternal(EDiscordResult(Z_Param_Result));
		P_NATIVE_END;
	}
	void UClearActivityProxy::StaticRegisterNativesUClearActivityProxy()
	{
		UClass* Class = UClearActivityProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearActivity", &UClearActivityProxy::execClearActivity },
			{ "OnActivityClearedInternal", &UClearActivityProxy::execOnActivityClearedInternal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics
	{
		struct ClearActivityProxy_eventClearActivity_Parms
		{
			UDiscordActivityManager* ActivityManager;
			UClearActivityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivityManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics::NewProp_ActivityManager = { "ActivityManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClearActivityProxy_eventClearActivity_Parms, ActivityManager), Z_Construct_UClass_UDiscordActivityManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClearActivityProxy_eventClearActivity_Parms, ReturnValue), Z_Construct_UClass_UClearActivityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics::NewProp_ActivityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClearActivityProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClearActivityProxy, nullptr, "ClearActivity", nullptr, nullptr, sizeof(ClearActivityProxy_eventClearActivity_Parms), Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClearActivityProxy_ClearActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClearActivityProxy_ClearActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics
	{
		struct ClearActivityProxy_eventOnActivityClearedInternal_Parms
		{
			EDiscordResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClearActivityProxy_eventOnActivityClearedInternal_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClearActivityProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClearActivityProxy, nullptr, "OnActivityClearedInternal", nullptr, nullptr, sizeof(ClearActivityProxy_eventOnActivityClearedInternal_Parms), Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClearActivityProxy_NoRegister()
	{
		return UClearActivityProxy::StaticClass();
	}
	struct Z_Construct_UClass_UClearActivityProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivityCleared_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivityCleared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClearActivityProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActivityAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordActivity,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClearActivityProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClearActivityProxy_ClearActivity, "ClearActivity" }, // 2303223219
		{ &Z_Construct_UFunction_UClearActivityProxy_OnActivityClearedInternal, "OnActivityClearedInternal" }, // 176346866
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClearActivityProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClearActivityProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ClearActivityProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClearActivityProxy_Statics::NewProp_OnActivityCleared_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClearActivityProxy" },
		{ "ModuleRelativePath", "Public/ClearActivityProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UClearActivityProxy_Statics::NewProp_OnActivityCleared = { "OnActivityCleared", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClearActivityProxy, OnActivityCleared), Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UClearActivityProxy_Statics::NewProp_OnActivityCleared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClearActivityProxy_Statics::NewProp_OnActivityCleared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClearActivityProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClearActivityProxy" },
		{ "ModuleRelativePath", "Public/ClearActivityProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UClearActivityProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClearActivityProxy, OnError), Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UClearActivityProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClearActivityProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClearActivityProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClearActivityProxy_Statics::NewProp_OnActivityCleared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClearActivityProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClearActivityProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClearActivityProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClearActivityProxy_Statics::ClassParams = {
		&UClearActivityProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UClearActivityProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UClearActivityProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClearActivityProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClearActivityProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClearActivityProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClearActivityProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClearActivityProxy, 343084315);
	template<> DISCORDACTIVITY_API UClass* StaticClass<UClearActivityProxy>()
	{
		return UClearActivityProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClearActivityProxy(Z_Construct_UClass_UClearActivityProxy, &UClearActivityProxy::StaticClass, TEXT("/Script/DiscordActivity"), TEXT("UClearActivityProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClearActivityProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
