// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordApplication/Public/ApplicationGetOAuth2TokenProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplicationGetOAuth2TokenProxy() {}
// Cross Module References
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_NoRegister();
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UApplicationGetOAuth2TokenProxy();
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UBaseApplicationAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordApplication();
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UDiscordApplicationManager_NoRegister();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDAPPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordOAuth2Token();
	DISCORDAPPLICATION_API UFunction* Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UApplicationGetOAuth2TokenProxy::execGetOAuth2Token)
	{
		P_GET_OBJECT(UDiscordApplicationManager,Z_Param_ApplicationManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApplicationGetOAuth2TokenProxy**)Z_Param__Result=UApplicationGetOAuth2TokenProxy::GetOAuth2Token(Z_Param_ApplicationManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApplicationGetOAuth2TokenProxy::execOnOAuth2TokenReceivedInternal)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_GET_STRUCT_REF(FDiscordOAuth2Token,Z_Param_Out_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOAuth2TokenReceivedInternal(EDiscordResult(Z_Param_Result),Z_Param_Out_Token);
		P_NATIVE_END;
	}
	void UApplicationGetOAuth2TokenProxy::StaticRegisterNativesUApplicationGetOAuth2TokenProxy()
	{
		UClass* Class = UApplicationGetOAuth2TokenProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOAuth2Token", &UApplicationGetOAuth2TokenProxy::execGetOAuth2Token },
			{ "OnOAuth2TokenReceivedInternal", &UApplicationGetOAuth2TokenProxy::execOnOAuth2TokenReceivedInternal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics
	{
		struct ApplicationGetOAuth2TokenProxy_eventGetOAuth2Token_Parms
		{
			UDiscordApplicationManager* ApplicationManager;
			UApplicationGetOAuth2TokenProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ApplicationManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics::NewProp_ApplicationManager = { "ApplicationManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApplicationGetOAuth2TokenProxy_eventGetOAuth2Token_Parms, ApplicationManager), Z_Construct_UClass_UDiscordApplicationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApplicationGetOAuth2TokenProxy_eventGetOAuth2Token_Parms, ReturnValue), Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics::NewProp_ApplicationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ApplicationGetOAuth2TokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationGetOAuth2TokenProxy, nullptr, "GetOAuth2Token", nullptr, nullptr, sizeof(ApplicationGetOAuth2TokenProxy_eventGetOAuth2Token_Parms), Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics
	{
		struct ApplicationGetOAuth2TokenProxy_eventOnOAuth2TokenReceivedInternal_Parms
		{
			EDiscordResult Result;
			FDiscordOAuth2Token Token;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Token;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApplicationGetOAuth2TokenProxy_eventOnOAuth2TokenReceivedInternal_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApplicationGetOAuth2TokenProxy_eventOnOAuth2TokenReceivedInternal_Parms, Token), Z_Construct_UScriptStruct_FDiscordOAuth2Token, METADATA_PARAMS(Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::NewProp_Token_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::NewProp_Token,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ApplicationGetOAuth2TokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationGetOAuth2TokenProxy, nullptr, "OnOAuth2TokenReceivedInternal", nullptr, nullptr, sizeof(ApplicationGetOAuth2TokenProxy_eventOnOAuth2TokenReceivedInternal_Parms), Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_NoRegister()
	{
		return UApplicationGetOAuth2TokenProxy::StaticClass();
	}
	struct Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOAuth2TokenReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOAuth2TokenReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseApplicationAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordApplication,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_GetOAuth2Token, "GetOAuth2Token" }, // 661069692
		{ &Z_Construct_UFunction_UApplicationGetOAuth2TokenProxy_OnOAuth2TokenReceivedInternal, "OnOAuth2TokenReceivedInternal" }, // 1931456345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ApplicationGetOAuth2TokenProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ApplicationGetOAuth2TokenProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::NewProp_OnOAuth2TokenReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ApplicationGetOAuth2TokenProxy" },
		{ "ModuleRelativePath", "Public/ApplicationGetOAuth2TokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::NewProp_OnOAuth2TokenReceived = { "OnOAuth2TokenReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApplicationGetOAuth2TokenProxy, OnOAuth2TokenReceived), Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::NewProp_OnOAuth2TokenReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::NewProp_OnOAuth2TokenReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ApplicationGetOAuth2TokenProxy" },
		{ "ModuleRelativePath", "Public/ApplicationGetOAuth2TokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApplicationGetOAuth2TokenProxy, OnError), Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::NewProp_OnOAuth2TokenReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplicationGetOAuth2TokenProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::ClassParams = {
		&UApplicationGetOAuth2TokenProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApplicationGetOAuth2TokenProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApplicationGetOAuth2TokenProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApplicationGetOAuth2TokenProxy, 3605241189);
	template<> DISCORDAPPLICATION_API UClass* StaticClass<UApplicationGetOAuth2TokenProxy>()
	{
		return UApplicationGetOAuth2TokenProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApplicationGetOAuth2TokenProxy(Z_Construct_UClass_UApplicationGetOAuth2TokenProxy, &UApplicationGetOAuth2TokenProxy::StaticClass, TEXT("/Script/DiscordApplication"), TEXT("UApplicationGetOAuth2TokenProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApplicationGetOAuth2TokenProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
