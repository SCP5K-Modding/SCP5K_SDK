// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/GetWebhookProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetWebhookProxy() {}
// Cross Module References
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UGetWebhookProxy_NoRegister();
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UGetWebhookProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UFunction* Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGetWebhookProxy::execGetWebhook)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_WebhookId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetWebhookProxy**)Z_Param__Result=UGetWebhookProxy::GetWebhook(Z_Param_WebhookId);
		P_NATIVE_END;
	}
	void UGetWebhookProxy::StaticRegisterNativesUGetWebhookProxy()
	{
		UClass* Class = UGetWebhookProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWebhook", &UGetWebhookProxy::execGetWebhook },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics
	{
		struct GetWebhookProxy_eventGetWebhook_Parms
		{
			int64 WebhookId;
			UGetWebhookProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebhookId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_WebhookId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::NewProp_WebhookId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::NewProp_WebhookId = { "WebhookId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetWebhookProxy_eventGetWebhook_Parms, WebhookId), METADATA_PARAMS(Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::NewProp_WebhookId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::NewProp_WebhookId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetWebhookProxy_eventGetWebhook_Parms, ReturnValue), Z_Construct_UClass_UGetWebhookProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::NewProp_WebhookId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GetWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetWebhookProxy, nullptr, "GetWebhook", nullptr, nullptr, sizeof(GetWebhookProxy_eventGetWebhook_Parms), Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetWebhookProxy_GetWebhook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetWebhookProxy_GetWebhook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetWebhookProxy_NoRegister()
	{
		return UGetWebhookProxy::StaticClass();
	}
	struct Z_Construct_UClass_UGetWebhookProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UGetWebhookProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetWebhookProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetWebhookProxy_GetWebhook, "GetWebhook" }, // 2877339959
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetWebhookProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GetWebhookProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GetWebhookProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetWebhookProxy_Statics::NewProp_OnWebhookReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetWebhookProxy" },
		{ "ModuleRelativePath", "Public/GetWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetWebhookProxy_Statics::NewProp_OnWebhookReceived = { "OnWebhookReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetWebhookProxy, OnWebhookReceived), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetWebhookProxy_Statics::NewProp_OnWebhookReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetWebhookProxy_Statics::NewProp_OnWebhookReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetWebhookProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetWebhookProxy" },
		{ "ModuleRelativePath", "Public/GetWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetWebhookProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetWebhookProxy, OnError), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetWebhookProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetWebhookProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetWebhookProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetWebhookProxy_Statics::NewProp_OnWebhookReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetWebhookProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetWebhookProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetWebhookProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetWebhookProxy_Statics::ClassParams = {
		&UGetWebhookProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetWebhookProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetWebhookProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetWebhookProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetWebhookProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetWebhookProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetWebhookProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetWebhookProxy, 3439631437);
	template<> DISCORDHTTPAPI_API UClass* StaticClass<UGetWebhookProxy>()
	{
		return UGetWebhookProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetWebhookProxy(Z_Construct_UClass_UGetWebhookProxy, &UGetWebhookProxy::StaticClass, TEXT("/Script/DiscordHttpApi"), TEXT("UGetWebhookProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetWebhookProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
