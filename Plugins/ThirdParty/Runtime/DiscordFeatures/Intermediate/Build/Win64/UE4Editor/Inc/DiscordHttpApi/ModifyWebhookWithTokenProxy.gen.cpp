// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/ModifyWebhookWithTokenProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifyWebhookWithTokenProxy() {}
// Cross Module References
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UModifyWebhookWithTokenProxy_NoRegister();
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UModifyWebhookWithTokenProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UFunction* Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UModifyWebhookWithTokenProxy::execModifyWebhookWithToken)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_WebhookId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewAvatar);
		P_GET_PROPERTY(FInt64Property,Z_Param_NewChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UModifyWebhookWithTokenProxy**)Z_Param__Result=UModifyWebhookWithTokenProxy::ModifyWebhookWithToken(Z_Param_WebhookId,Z_Param_Token,Z_Param_NewName,Z_Param_NewAvatar,Z_Param_NewChannelId);
		P_NATIVE_END;
	}
	void UModifyWebhookWithTokenProxy::StaticRegisterNativesUModifyWebhookWithTokenProxy()
	{
		UClass* Class = UModifyWebhookWithTokenProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyWebhookWithToken", &UModifyWebhookWithTokenProxy::execModifyWebhookWithToken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics
	{
		struct ModifyWebhookWithTokenProxy_eventModifyWebhookWithToken_Parms
		{
			int64 WebhookId;
			FString Token;
			FString NewName;
			FString NewAvatar;
			int64 NewChannelId;
			UModifyWebhookWithTokenProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebhookId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_WebhookId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAvatar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewAvatar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_NewChannelId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_WebhookId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_WebhookId = { "WebhookId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifyWebhookWithTokenProxy_eventModifyWebhookWithToken_Parms, WebhookId), METADATA_PARAMS(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_WebhookId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_WebhookId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifyWebhookWithTokenProxy_eventModifyWebhookWithToken_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifyWebhookWithTokenProxy_eventModifyWebhookWithToken_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewAvatar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewAvatar = { "NewAvatar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifyWebhookWithTokenProxy_eventModifyWebhookWithToken_Parms, NewAvatar), METADATA_PARAMS(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewAvatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewAvatar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewChannelId = { "NewChannelId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifyWebhookWithTokenProxy_eventModifyWebhookWithToken_Parms, NewChannelId), METADATA_PARAMS(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewChannelId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifyWebhookWithTokenProxy_eventModifyWebhookWithToken_Parms, ReturnValue), Z_Construct_UClass_UModifyWebhookWithTokenProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_WebhookId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewAvatar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_NewChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifyWebhookWithTokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifyWebhookWithTokenProxy, nullptr, "ModifyWebhookWithToken", nullptr, nullptr, sizeof(ModifyWebhookWithTokenProxy_eventModifyWebhookWithToken_Parms), Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModifyWebhookWithTokenProxy_NoRegister()
	{
		return UModifyWebhookWithTokenProxy::StaticClass();
	}
	struct Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWebhooksModified_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWebhooksModified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModifyWebhookWithTokenProxy_ModifyWebhookWithToken, "ModifyWebhookWithToken" }, // 3548467158
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModifyWebhookWithTokenProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModifyWebhookWithTokenProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::NewProp_OnWebhooksModified_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModifyWebhookWithTokenProxy" },
		{ "ModuleRelativePath", "Public/ModifyWebhookWithTokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::NewProp_OnWebhooksModified = { "OnWebhooksModified", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModifyWebhookWithTokenProxy, OnWebhooksModified), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::NewProp_OnWebhooksModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::NewProp_OnWebhooksModified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModifyWebhookWithTokenProxy" },
		{ "ModuleRelativePath", "Public/ModifyWebhookWithTokenProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModifyWebhookWithTokenProxy, OnError), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::NewProp_OnWebhooksModified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifyWebhookWithTokenProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::ClassParams = {
		&UModifyWebhookWithTokenProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModifyWebhookWithTokenProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModifyWebhookWithTokenProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModifyWebhookWithTokenProxy, 2191737412);
	template<> DISCORDHTTPAPI_API UClass* StaticClass<UModifyWebhookWithTokenProxy>()
	{
		return UModifyWebhookWithTokenProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModifyWebhookWithTokenProxy(Z_Construct_UClass_UModifyWebhookWithTokenProxy, &UModifyWebhookWithTokenProxy::StaticClass, TEXT("/Script/DiscordHttpApi"), TEXT("UModifyWebhookWithTokenProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModifyWebhookWithTokenProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
