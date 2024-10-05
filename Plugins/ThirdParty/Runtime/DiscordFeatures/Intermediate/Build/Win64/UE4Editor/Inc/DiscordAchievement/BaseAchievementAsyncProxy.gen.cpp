// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordAchievement/Public/BaseAchievementAsyncProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAchievementAsyncProxy() {}
// Cross Module References
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_UBaseAchievementAsyncProxy_NoRegister();
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_UBaseAchievementAsyncProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordAchievement();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDACHIEVEMENT_API UFunction* Z_Construct_UDelegateFunction_DiscordAchievement_DiscordResultEvent__DelegateSignature();
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_UDiscordAchievementManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseAchievementAsyncProxy::execOnResult)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResult(EDiscordResult(Z_Param_Result));
		P_NATIVE_END;
	}
	void UBaseAchievementAsyncProxy::StaticRegisterNativesUBaseAchievementAsyncProxy()
	{
		UClass* Class = UBaseAchievementAsyncProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResult", &UBaseAchievementAsyncProxy::execOnResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics
	{
		struct BaseAchievementAsyncProxy_eventOnResult_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseAchievementAsyncProxy_eventOnResult_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseAchievementAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAchievementAsyncProxy, nullptr, "OnResult", nullptr, nullptr, sizeof(BaseAchievementAsyncProxy_eventOnResult_Parms), Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseAchievementAsyncProxy_NoRegister()
	{
		return UBaseAchievementAsyncProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordAchievement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAchievementAsyncProxy_OnResult, "OnResult" }, // 2032655219
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseAchievementAsyncProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseAchievementAsyncProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseAchievementAsyncProxy" },
		{ "ModuleRelativePath", "Public/BaseAchievementAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAchievementAsyncProxy, OnSuccess), Z_Construct_UDelegateFunction_DiscordAchievement_DiscordResultEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseAchievementAsyncProxy" },
		{ "ModuleRelativePath", "Public/BaseAchievementAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAchievementAsyncProxy, OnError), Z_Construct_UDelegateFunction_DiscordAchievement_DiscordResultEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_Manager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseAchievementAsyncProxy" },
		{ "ModuleRelativePath", "Public/BaseAchievementAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAchievementAsyncProxy, Manager), Z_Construct_UClass_UDiscordAchievementManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::NewProp_Manager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAchievementAsyncProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::ClassParams = {
		&UBaseAchievementAsyncProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseAchievementAsyncProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseAchievementAsyncProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseAchievementAsyncProxy, 703613277);
	template<> DISCORDACHIEVEMENT_API UClass* StaticClass<UBaseAchievementAsyncProxy>()
	{
		return UBaseAchievementAsyncProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseAchievementAsyncProxy(Z_Construct_UClass_UBaseAchievementAsyncProxy, &UBaseAchievementAsyncProxy::StaticClass, TEXT("/Script/DiscordAchievement"), TEXT("UBaseAchievementAsyncProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAchievementAsyncProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
