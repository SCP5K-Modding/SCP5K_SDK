// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/DeleteWebhookProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeleteWebhookProxy() {}
// Cross Module References
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UDeleteWebhookProxy_NoRegister();
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UDeleteWebhookProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UFunction* Z_Construct_UDelegateFunction_DiscordHttpApi_DiscordWebhookEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDeleteWebhookProxy::execDeleteWebhook)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_WebhookId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDeleteWebhookProxy**)Z_Param__Result=UDeleteWebhookProxy::DeleteWebhook(Z_Param_WebhookId);
		P_NATIVE_END;
	}
	void UDeleteWebhookProxy::StaticRegisterNativesUDeleteWebhookProxy()
	{
		UClass* Class = UDeleteWebhookProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteWebhook", &UDeleteWebhookProxy::execDeleteWebhook },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics
	{
		struct DeleteWebhookProxy_eventDeleteWebhook_Parms
		{
			int64 WebhookId;
			UDeleteWebhookProxy* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::NewProp_WebhookId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::NewProp_WebhookId = { "WebhookId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeleteWebhookProxy_eventDeleteWebhook_Parms, WebhookId), METADATA_PARAMS(Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::NewProp_WebhookId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::NewProp_WebhookId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeleteWebhookProxy_eventDeleteWebhook_Parms, ReturnValue), Z_Construct_UClass_UDeleteWebhookProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::NewProp_WebhookId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeleteWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeleteWebhookProxy, nullptr, "DeleteWebhook", nullptr, nullptr, sizeof(DeleteWebhookProxy_eventDeleteWebhook_Parms), Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeleteWebhookProxy_NoRegister()
	{
		return UDeleteWebhookProxy::StaticClass();
	}
	struct Z_Construct_UClass_UDeleteWebhookProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWebhookDeleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWebhookDeleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeleteWebhookProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeleteWebhookProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeleteWebhookProxy_DeleteWebhook, "DeleteWebhook" }, // 1076089105
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeleteWebhookProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DeleteWebhookProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DeleteWebhookProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeleteWebhookProxy_Statics::NewProp_OnWebhookDeleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DeleteWebhookProxy" },
		{ "ModuleRelativePath", "Public/DeleteWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDeleteWebhookProxy_Statics::NewProp_OnWebhookDeleted = { "OnWebhookDeleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeleteWebhookProxy, OnWebhookDeleted), Z_Construct_UDelegateFunction_DiscordHttpApi_DiscordWebhookEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDeleteWebhookProxy_Statics::NewProp_OnWebhookDeleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteWebhookProxy_Statics::NewProp_OnWebhookDeleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeleteWebhookProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DeleteWebhookProxy" },
		{ "ModuleRelativePath", "Public/DeleteWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDeleteWebhookProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeleteWebhookProxy, OnError), Z_Construct_UDelegateFunction_DiscordHttpApi_DiscordWebhookEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDeleteWebhookProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteWebhookProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeleteWebhookProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeleteWebhookProxy_Statics::NewProp_OnWebhookDeleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeleteWebhookProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeleteWebhookProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeleteWebhookProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeleteWebhookProxy_Statics::ClassParams = {
		&UDeleteWebhookProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeleteWebhookProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteWebhookProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeleteWebhookProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteWebhookProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeleteWebhookProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeleteWebhookProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeleteWebhookProxy, 650736877);
	template<> DISCORDHTTPAPI_API UClass* StaticClass<UDeleteWebhookProxy>()
	{
		return UDeleteWebhookProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeleteWebhookProxy(Z_Construct_UClass_UDeleteWebhookProxy, &UDeleteWebhookProxy::StaticClass, TEXT("/Script/DiscordHttpApi"), TEXT("UDeleteWebhookProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeleteWebhookProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
