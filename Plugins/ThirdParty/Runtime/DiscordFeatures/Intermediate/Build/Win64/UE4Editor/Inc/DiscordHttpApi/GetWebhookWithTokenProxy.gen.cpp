// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/GetWebhookWithTokenProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetWebhookWithTokenProxy() {}
// Cross Module References
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UGetWebhookWithTokenProxy_NoRegister();
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UGetWebhookWithTokenProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UFunction* Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGetWebhookWithTokenProxy::execGetWebhookWithToken)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_WebhookId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetWebhookWithTokenProxy**)Z_Param__Result=UGetWebhookWithTokenProxy::GetWebhookWithToken(Z_Param_WebhookId,Z_Param_Token);
		P_NATIVE_END;
	}
	void UGetWebhookWithTokenProxy::StaticRegisterNativesUGetWebhookWithTokenProxy()
	{
		UClass* Class = UGetWebhookWithTokenProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWebhookWithToken", &UGetWebhookWithTokenProxy::execGetWebhookWithToken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics
	{
		struct GetWebhookWithTokenProxy_eventGetWebhookWithToken_Parms
		{
			int64 WebhookId;
			FString Token;
			UGetWebhookWithTokenProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebhookId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_WebhookId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::NewProp_WebhookId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::NewProp_WebhookId = { "WebhookId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetWebhookWithTokenProxy_eventGetWebhookWithToken_Parms, WebhookId), METADATA_PARAMS(Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::NewProp_WebhookId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::NewProp_WebhookId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetWebhookWithTokenProxy_eventGetWebhookWithToken_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::NewProp_Token_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetWebhookWithTokenProxy_eventGetWebhookWithToken_Parms, ReturnValue), Z_Construct_UClass_UGetWebhookWithTokenProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::NewProp_WebhookId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GetWebhookWithTokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetWebhookWithTokenProxy, nullptr, "GetWebhookWithToken", nullptr, nullptr, sizeof(GetWebhookWithTokenProxy_eventGetWebhookWithToken_Parms), Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetWebhookWithTokenProxy_NoRegister()
	{
		return UGetWebhookWithTokenProxy::StaticClass();
	}
	struct Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWebhookReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWebhookReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetWebhookWithTokenProxy_GetWebhookWithToken, "GetWebhookWithToken" }, // 626829909
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GetWebhookWithTokenProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GetWebhookWithTokenProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::NewProp_OnWebhookReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetWebhookWithTokenProxy" },
		{ "ModuleRelativePath", "Public/GetWebhookWithTokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::NewProp_OnWebhookReceived = { "OnWebhookReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetWebhookWithTokenProxy, OnWebhookReceived), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::NewProp_OnWebhookReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::NewProp_OnWebhookReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetWebhookWithTokenProxy" },
		{ "ModuleRelativePath", "Public/GetWebhookWithTokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetWebhookWithTokenProxy, OnError), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::NewProp_OnWebhookReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetWebhookWithTokenProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::ClassParams = {
		&UGetWebhookWithTokenProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetWebhookWithTokenProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetWebhookWithTokenProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetWebhookWithTokenProxy, 3269706748);
	template<> DISCORDHTTPAPI_API UClass* StaticClass<UGetWebhookWithTokenProxy>()
	{
		return UGetWebhookWithTokenProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetWebhookWithTokenProxy(Z_Construct_UClass_UGetWebhookWithTokenProxy, &UGetWebhookWithTokenProxy::StaticClass, TEXT("/Script/DiscordHttpApi"), TEXT("UGetWebhookWithTokenProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetWebhookWithTokenProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
