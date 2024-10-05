// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordApplication/Public/ApplicationValidateOrExitProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplicationValidateOrExitProxy() {}
// Cross Module References
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UApplicationValidateOrExitProxy_NoRegister();
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UApplicationValidateOrExitProxy();
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UBaseApplicationAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordApplication();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UDiscordApplicationManager_NoRegister();
	DISCORDAPPLICATION_API UFunction* Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnValidateOrExit__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UApplicationValidateOrExitProxy::execOnResultInternal)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResultInternal(EDiscordResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApplicationValidateOrExitProxy::execValidateOrExit)
	{
		P_GET_OBJECT(UDiscordApplicationManager,Z_Param_ApplicationManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApplicationValidateOrExitProxy**)Z_Param__Result=UApplicationValidateOrExitProxy::ValidateOrExit(Z_Param_ApplicationManager);
		P_NATIVE_END;
	}
	void UApplicationValidateOrExitProxy::StaticRegisterNativesUApplicationValidateOrExitProxy()
	{
		UClass* Class = UApplicationValidateOrExitProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResultInternal", &UApplicationValidateOrExitProxy::execOnResultInternal },
			{ "ValidateOrExit", &UApplicationValidateOrExitProxy::execValidateOrExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics
	{
		struct ApplicationValidateOrExitProxy_eventOnResultInternal_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApplicationValidateOrExitProxy_eventOnResultInternal_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ApplicationValidateOrExitProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationValidateOrExitProxy, nullptr, "OnResultInternal", nullptr, nullptr, sizeof(ApplicationValidateOrExitProxy_eventOnResultInternal_Parms), Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics
	{
		struct ApplicationValidateOrExitProxy_eventValidateOrExit_Parms
		{
			UDiscordApplicationManager* ApplicationManager;
			UApplicationValidateOrExitProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ApplicationManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics::NewProp_ApplicationManager = { "ApplicationManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApplicationValidateOrExitProxy_eventValidateOrExit_Parms, ApplicationManager), Z_Construct_UClass_UDiscordApplicationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApplicationValidateOrExitProxy_eventValidateOrExit_Parms, ReturnValue), Z_Construct_UClass_UApplicationValidateOrExitProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics::NewProp_ApplicationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ApplicationValidateOrExitProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationValidateOrExitProxy, nullptr, "ValidateOrExit", nullptr, nullptr, sizeof(ApplicationValidateOrExitProxy_eventValidateOrExit_Parms), Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UApplicationValidateOrExitProxy_NoRegister()
	{
		return UApplicationValidateOrExitProxy::StaticClass();
	}
	struct Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnValidated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValidated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseApplicationAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordApplication,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApplicationValidateOrExitProxy_OnResultInternal, "OnResultInternal" }, // 1390842831
		{ &Z_Construct_UFunction_UApplicationValidateOrExitProxy_ValidateOrExit, "ValidateOrExit" }, // 3886742055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ApplicationValidateOrExitProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ApplicationValidateOrExitProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::NewProp_OnValidated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ApplicationValidateOrExitProxy" },
		{ "ModuleRelativePath", "Public/ApplicationValidateOrExitProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::NewProp_OnValidated = { "OnValidated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApplicationValidateOrExitProxy, OnValidated), Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnValidateOrExit__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::NewProp_OnValidated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::NewProp_OnValidated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::NewProp_OnExit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ApplicationValidateOrExitProxy" },
		{ "ModuleRelativePath", "Public/ApplicationValidateOrExitProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::NewProp_OnExit = { "OnExit", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApplicationValidateOrExitProxy, OnExit), Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnValidateOrExit__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::NewProp_OnExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::NewProp_OnExit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::NewProp_OnValidated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::NewProp_OnExit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplicationValidateOrExitProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::ClassParams = {
		&UApplicationValidateOrExitProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApplicationValidateOrExitProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApplicationValidateOrExitProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApplicationValidateOrExitProxy, 1435548667);
	template<> DISCORDAPPLICATION_API UClass* StaticClass<UApplicationValidateOrExitProxy>()
	{
		return UApplicationValidateOrExitProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApplicationValidateOrExitProxy(Z_Construct_UClass_UApplicationValidateOrExitProxy, &UApplicationValidateOrExitProxy::StaticClass, TEXT("/Script/DiscordApplication"), TEXT("UApplicationValidateOrExitProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApplicationValidateOrExitProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
