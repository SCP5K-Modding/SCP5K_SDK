// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/DeleteWebhookWithTokenProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeleteWebhookWithTokenProxy() {}
// Cross Module References
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UDeleteWebhookWithTokenProxy_NoRegister();
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UDeleteWebhookWithTokenProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UFunction* Z_Construct_UDelegateFunction_DiscordHttpApi_DiscordWebhookEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDeleteWebhookWithTokenProxy::execDeleteWebhookWithToken)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_WebhookId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDeleteWebhookWithTokenProxy**)Z_Param__Result=UDeleteWebhookWithTokenProxy::DeleteWebhookWithToken(Z_Param_WebhookId,Z_Param_Token);
		P_NATIVE_END;
	}
	void UDeleteWebhookWithTokenProxy::StaticRegisterNativesUDeleteWebhookWithTokenProxy()
	{
		UClass* Class = UDeleteWebhookWithTokenProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteWebhookWithToken", &UDeleteWebhookWithTokenProxy::execDeleteWebhookWithToken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics
	{
		struct DeleteWebhookWithTokenProxy_eventDeleteWebhookWithToken_Parms
		{
			int64 WebhookId;
			FString Token;
			UDeleteWebhookWithTokenProxy* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::NewProp_WebhookId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::NewProp_WebhookId = { "WebhookId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeleteWebhookWithTokenProxy_eventDeleteWebhookWithToken_Parms, WebhookId), METADATA_PARAMS(Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::NewProp_WebhookId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::NewProp_WebhookId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeleteWebhookWithTokenProxy_eventDeleteWebhookWithToken_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::NewProp_Token_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeleteWebhookWithTokenProxy_eventDeleteWebhookWithToken_Parms, ReturnValue), Z_Construct_UClass_UDeleteWebhookWithTokenProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::NewProp_WebhookId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeleteWebhookWithTokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeleteWebhookWithTokenProxy, nullptr, "DeleteWebhookWithToken", nullptr, nullptr, sizeof(DeleteWebhookWithTokenProxy_eventDeleteWebhookWithToken_Parms), Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeleteWebhookWithTokenProxy_NoRegister()
	{
		return UDeleteWebhookWithTokenProxy::StaticClass();
	}
	struct Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeleteWebhookWithTokenProxy_DeleteWebhookWithToken, "DeleteWebhookWithToken" }, // 215445956
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DeleteWebhookWithTokenProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DeleteWebhookWithTokenProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::NewProp_OnWebhookDeleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DeleteWebhookWithTokenProxy" },
		{ "ModuleRelativePath", "Public/DeleteWebhookWithTokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::NewProp_OnWebhookDeleted = { "OnWebhookDeleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeleteWebhookWithTokenProxy, OnWebhookDeleted), Z_Construct_UDelegateFunction_DiscordHttpApi_DiscordWebhookEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::NewProp_OnWebhookDeleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::NewProp_OnWebhookDeleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DeleteWebhookWithTokenProxy" },
		{ "ModuleRelativePath", "Public/DeleteWebhookWithTokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeleteWebhookWithTokenProxy, OnError), Z_Construct_UDelegateFunction_DiscordHttpApi_DiscordWebhookEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::NewProp_OnWebhookDeleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeleteWebhookWithTokenProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::ClassParams = {
		&UDeleteWebhookWithTokenProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeleteWebhookWithTokenProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeleteWebhookWithTokenProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeleteWebhookWithTokenProxy, 3917621321);
	template<> DISCORDHTTPAPI_API UClass* StaticClass<UDeleteWebhookWithTokenProxy>()
	{
		return UDeleteWebhookWithTokenProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeleteWebhookWithTokenProxy(Z_Construct_UClass_UDeleteWebhookWithTokenProxy, &UDeleteWebhookWithTokenProxy::StaticClass, TEXT("/Script/DiscordHttpApi"), TEXT("UDeleteWebhookWithTokenProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeleteWebhookWithTokenProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
