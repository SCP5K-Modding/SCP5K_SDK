// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/ModifyWebhookProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifyWebhookProxy() {}
// Cross Module References
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UModifyWebhookProxy_NoRegister();
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UModifyWebhookProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UFunction* Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UModifyWebhookProxy::execModifyWebhook)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_WebhookId);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewAvatar);
		P_GET_PROPERTY(FInt64Property,Z_Param_NewChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UModifyWebhookProxy**)Z_Param__Result=UModifyWebhookProxy::ModifyWebhook(Z_Param_WebhookId,Z_Param_NewName,Z_Param_NewAvatar,Z_Param_NewChannelId);
		P_NATIVE_END;
	}
	void UModifyWebhookProxy::StaticRegisterNativesUModifyWebhookProxy()
	{
		UClass* Class = UModifyWebhookProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyWebhook", &UModifyWebhookProxy::execModifyWebhook },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics
	{
		struct ModifyWebhookProxy_eventModifyWebhook_Parms
		{
			int64 WebhookId;
			FString NewName;
			FString NewAvatar;
			int64 NewChannelId;
			UModifyWebhookProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebhookId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_WebhookId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_WebhookId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_WebhookId = { "WebhookId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifyWebhookProxy_eventModifyWebhook_Parms, WebhookId), METADATA_PARAMS(Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_WebhookId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_WebhookId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifyWebhookProxy_eventModifyWebhook_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewAvatar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewAvatar = { "NewAvatar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifyWebhookProxy_eventModifyWebhook_Parms, NewAvatar), METADATA_PARAMS(Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewAvatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewAvatar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewChannelId = { "NewChannelId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifyWebhookProxy_eventModifyWebhook_Parms, NewChannelId), METADATA_PARAMS(Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewChannelId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifyWebhookProxy_eventModifyWebhook_Parms, ReturnValue), Z_Construct_UClass_UModifyWebhookProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_WebhookId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewAvatar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_NewChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifyWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifyWebhookProxy, nullptr, "ModifyWebhook", nullptr, nullptr, sizeof(ModifyWebhookProxy_eventModifyWebhook_Parms), Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModifyWebhookProxy_NoRegister()
	{
		return UModifyWebhookProxy::StaticClass();
	}
	struct Z_Construct_UClass_UModifyWebhookProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UModifyWebhookProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModifyWebhookProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModifyWebhookProxy_ModifyWebhook, "ModifyWebhook" }, // 3587254163
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifyWebhookProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModifyWebhookProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModifyWebhookProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifyWebhookProxy_Statics::NewProp_OnWebhooksModified_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModifyWebhookProxy" },
		{ "ModuleRelativePath", "Public/ModifyWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UModifyWebhookProxy_Statics::NewProp_OnWebhooksModified = { "OnWebhooksModified", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModifyWebhookProxy, OnWebhooksModified), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UModifyWebhookProxy_Statics::NewProp_OnWebhooksModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModifyWebhookProxy_Statics::NewProp_OnWebhooksModified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifyWebhookProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModifyWebhookProxy" },
		{ "ModuleRelativePath", "Public/ModifyWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UModifyWebhookProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModifyWebhookProxy, OnError), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhook__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UModifyWebhookProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModifyWebhookProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModifyWebhookProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifyWebhookProxy_Statics::NewProp_OnWebhooksModified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifyWebhookProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModifyWebhookProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifyWebhookProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModifyWebhookProxy_Statics::ClassParams = {
		&UModifyWebhookProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModifyWebhookProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModifyWebhookProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModifyWebhookProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModifyWebhookProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModifyWebhookProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModifyWebhookProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModifyWebhookProxy, 1906865564);
	template<> DISCORDHTTPAPI_API UClass* StaticClass<UModifyWebhookProxy>()
	{
		return UModifyWebhookProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModifyWebhookProxy(Z_Construct_UClass_UModifyWebhookProxy, &UModifyWebhookProxy::StaticClass, TEXT("/Script/DiscordHttpApi"), TEXT("UModifyWebhookProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModifyWebhookProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
