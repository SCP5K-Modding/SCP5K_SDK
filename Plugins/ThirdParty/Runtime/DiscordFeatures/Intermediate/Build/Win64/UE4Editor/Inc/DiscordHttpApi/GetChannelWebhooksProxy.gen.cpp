// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/GetChannelWebhooksProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetChannelWebhooksProxy() {}
// Cross Module References
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UGetChannelWebhooksProxy_NoRegister();
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UGetChannelWebhooksProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UFunction* Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhooks__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGetChannelWebhooksProxy::execGetChannelWebhooks)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_ChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetChannelWebhooksProxy**)Z_Param__Result=UGetChannelWebhooksProxy::GetChannelWebhooks(Z_Param_ChannelId);
		P_NATIVE_END;
	}
	void UGetChannelWebhooksProxy::StaticRegisterNativesUGetChannelWebhooksProxy()
	{
		UClass* Class = UGetChannelWebhooksProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChannelWebhooks", &UGetChannelWebhooksProxy::execGetChannelWebhooks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics
	{
		struct GetChannelWebhooksProxy_eventGetChannelWebhooks_Parms
		{
			int64 ChannelId;
			UGetChannelWebhooksProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ChannelId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetChannelWebhooksProxy_eventGetChannelWebhooks_Parms, ChannelId), METADATA_PARAMS(Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::NewProp_ChannelId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetChannelWebhooksProxy_eventGetChannelWebhooks_Parms, ReturnValue), Z_Construct_UClass_UGetChannelWebhooksProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GetChannelWebhooksProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetChannelWebhooksProxy, nullptr, "GetChannelWebhooks", nullptr, nullptr, sizeof(GetChannelWebhooksProxy_eventGetChannelWebhooks_Parms), Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetChannelWebhooksProxy_NoRegister()
	{
		return UGetChannelWebhooksProxy::StaticClass();
	}
	struct Z_Construct_UClass_UGetChannelWebhooksProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetChannelWebhooksProxy_GetChannelWebhooks, "GetChannelWebhooks" }, // 1548857279
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GetChannelWebhooksProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GetChannelWebhooksProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::NewProp_OnWebhooksReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetChannelWebhooksProxy" },
		{ "ModuleRelativePath", "Public/GetChannelWebhooksProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::NewProp_OnWebhooksReceived = { "OnWebhooksReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetChannelWebhooksProxy, OnWebhooksReceived), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhooks__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::NewProp_OnWebhooksReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::NewProp_OnWebhooksReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetChannelWebhooksProxy" },
		{ "ModuleRelativePath", "Public/GetChannelWebhooksProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetChannelWebhooksProxy, OnError), Z_Construct_UDelegateFunction_DiscordHttpApi_OnGetWebhooks__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::NewProp_OnWebhooksReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetChannelWebhooksProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::ClassParams = {
		&UGetChannelWebhooksProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetChannelWebhooksProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetChannelWebhooksProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetChannelWebhooksProxy, 1974866025);
	template<> DISCORDHTTPAPI_API UClass* StaticClass<UGetChannelWebhooksProxy>()
	{
		return UGetChannelWebhooksProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetChannelWebhooksProxy(Z_Construct_UClass_UGetChannelWebhooksProxy, &UGetChannelWebhooksProxy::StaticClass, TEXT("/Script/DiscordHttpApi"), TEXT("UGetChannelWebhooksProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetChannelWebhooksProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
