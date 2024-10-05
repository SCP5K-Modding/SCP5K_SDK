// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/GetGuildWebhooksProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetGuildWebhooksProxy() {}
// Cross Module References
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UGetGuildWebhooksProxy_NoRegister();
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UGetGuildWebhooksProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UFunction* Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhooks__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGetGuildWebhooksProxy::execGetGuildWebhooks)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_GuildId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetGuildWebhooksProxy**)Z_Param__Result=UGetGuildWebhooksProxy::GetGuildWebhooks(Z_Param_GuildId);
		P_NATIVE_END;
	}
	void UGetGuildWebhooksProxy::StaticRegisterNativesUGetGuildWebhooksProxy()
	{
		UClass* Class = UGetGuildWebhooksProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGuildWebhooks", &UGetGuildWebhooksProxy::execGetGuildWebhooks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics
	{
		struct GetGuildWebhooksProxy_eventGetGuildWebhooks_Parms
		{
			int64 GuildId;
			UGetGuildWebhooksProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuildId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_GuildId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::NewProp_GuildId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::NewProp_GuildId = { "GuildId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetGuildWebhooksProxy_eventGetGuildWebhooks_Parms, GuildId), METADATA_PARAMS(Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::NewProp_GuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::NewProp_GuildId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetGuildWebhooksProxy_eventGetGuildWebhooks_Parms, ReturnValue), Z_Construct_UClass_UGetGuildWebhooksProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::NewProp_GuildId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GetGuildWebhooksProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetGuildWebhooksProxy, nullptr, "GetGuildWebhooks", nullptr, nullptr, sizeof(GetGuildWebhooksProxy_eventGetGuildWebhooks_Parms), Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetGuildWebhooksProxy_NoRegister()
	{
		return UGetGuildWebhooksProxy::StaticClass();
	}
	struct Z_Construct_UClass_UGetGuildWebhooksProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWebhooksReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWebhooksReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetGuildWebhooksProxy_GetGuildWebhooks, "GetGuildWebhooks" }, // 664279279
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GetGuildWebhooksProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GetGuildWebhooksProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::NewProp_OnWebhooksReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetGuildWebhooksProxy" },
		{ "ModuleRelativePath", "Public/GetGuildWebhooksProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::NewProp_OnWebhooksReceived = { "OnWebhooksReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetGuildWebhooksProxy, OnWebhooksReceived), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhooks__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::NewProp_OnWebhooksReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::NewProp_OnWebhooksReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetGuildWebhooksProxy" },
		{ "ModuleRelativePath", "Public/GetGuildWebhooksProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetGuildWebhooksProxy, OnError), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhooks__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::NewProp_OnWebhooksReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetGuildWebhooksProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::ClassParams = {
		&UGetGuildWebhooksProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetGuildWebhooksProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetGuildWebhooksProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetGuildWebhooksProxy, 3105990211);
	template<> DISCORDHTTPAPI_API UClass* StaticClass<UGetGuildWebhooksProxy>()
	{
		return UGetGuildWebhooksProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetGuildWebhooksProxy(Z_Construct_UClass_UGetGuildWebhooksProxy, &UGetGuildWebhooksProxy::StaticClass, TEXT("/Script/DiscordHttpApi"), TEXT("UGetGuildWebhooksProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetGuildWebhooksProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
