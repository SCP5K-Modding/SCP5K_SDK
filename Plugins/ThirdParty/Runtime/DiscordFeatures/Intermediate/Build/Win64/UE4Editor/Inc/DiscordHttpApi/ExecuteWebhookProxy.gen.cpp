// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/ExecuteWebhookProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExecuteWebhookProxy() {}
// Cross Module References
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UExecuteWebhookProxy_NoRegister();
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UExecuteWebhookProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookData();
	DISCORDHTTPAPI_API UFunction* Z_Construct_UDelegateFunction_DiscordHttpApi_DiscordWebhookEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UExecuteWebhookProxy::execExecuteWebhook)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_WebhookId);
		P_GET_PROPERTY(FStrProperty,Z_Param_WebhookToken);
		P_GET_STRUCT_REF(FDiscordWebhookData,Z_Param_Out_WebhookData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UExecuteWebhookProxy**)Z_Param__Result=UExecuteWebhookProxy::ExecuteWebhook(Z_Param_WebhookId,Z_Param_WebhookToken,Z_Param_Out_WebhookData);
		P_NATIVE_END;
	}
	void UExecuteWebhookProxy::StaticRegisterNativesUExecuteWebhookProxy()
	{
		UClass* Class = UExecuteWebhookProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteWebhook", &UExecuteWebhookProxy::execExecuteWebhook },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics
	{
		struct ExecuteWebhookProxy_eventExecuteWebhook_Parms
		{
			int64 WebhookId;
			FString WebhookToken;
			FDiscordWebhookData WebhookData;
			UExecuteWebhookProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebhookId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_WebhookId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebhookToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WebhookToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebhookData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WebhookData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookId = { "WebhookId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExecuteWebhookProxy_eventExecuteWebhook_Parms, WebhookId), METADATA_PARAMS(Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookToken = { "WebhookToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExecuteWebhookProxy_eventExecuteWebhook_Parms, WebhookToken), METADATA_PARAMS(Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookData = { "WebhookData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExecuteWebhookProxy_eventExecuteWebhook_Parms, WebhookData), Z_Construct_UScriptStruct_FDiscordWebhookData, METADATA_PARAMS(Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExecuteWebhookProxy_eventExecuteWebhook_Parms, ReturnValue), Z_Construct_UClass_UExecuteWebhookProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_WebhookData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExecuteWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExecuteWebhookProxy, nullptr, "ExecuteWebhook", nullptr, nullptr, sizeof(ExecuteWebhookProxy_eventExecuteWebhook_Parms), Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExecuteWebhookProxy_NoRegister()
	{
		return UExecuteWebhookProxy::StaticClass();
	}
	struct Z_Construct_UClass_UExecuteWebhookProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWebhookExecuted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWebhookExecuted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExecuteWebhookProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExecuteWebhookProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExecuteWebhookProxy_ExecuteWebhook, "ExecuteWebhook" }, // 4120257463
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExecuteWebhookProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExecuteWebhookProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExecuteWebhookProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExecuteWebhookProxy_Statics::NewProp_OnWebhookExecuted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExecuteWebhookProxy" },
		{ "ModuleRelativePath", "Public/ExecuteWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExecuteWebhookProxy_Statics::NewProp_OnWebhookExecuted = { "OnWebhookExecuted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExecuteWebhookProxy, OnWebhookExecuted), Z_Construct_UDelegateFunction_DiscordHttpApi_DiscordWebhookEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UExecuteWebhookProxy_Statics::NewProp_OnWebhookExecuted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExecuteWebhookProxy_Statics::NewProp_OnWebhookExecuted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExecuteWebhookProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExecuteWebhookProxy" },
		{ "ModuleRelativePath", "Public/ExecuteWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExecuteWebhookProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExecuteWebhookProxy, OnError), Z_Construct_UDelegateFunction_DiscordHttpApi_DiscordWebhookEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UExecuteWebhookProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExecuteWebhookProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExecuteWebhookProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExecuteWebhookProxy_Statics::NewProp_OnWebhookExecuted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExecuteWebhookProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExecuteWebhookProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExecuteWebhookProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExecuteWebhookProxy_Statics::ClassParams = {
		&UExecuteWebhookProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExecuteWebhookProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExecuteWebhookProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExecuteWebhookProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExecuteWebhookProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExecuteWebhookProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExecuteWebhookProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExecuteWebhookProxy, 3684032749);
	template<> DISCORDHTTPAPI_API UClass* StaticClass<UExecuteWebhookProxy>()
	{
		return UExecuteWebhookProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExecuteWebhookProxy(Z_Construct_UClass_UExecuteWebhookProxy, &UExecuteWebhookProxy::StaticClass, TEXT("/Script/DiscordHttpApi"), TEXT("UExecuteWebhookProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExecuteWebhookProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
