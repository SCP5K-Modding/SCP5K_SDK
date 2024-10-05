// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/CreateWebhookProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateWebhookProxy() {}
// Cross Module References
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UCreateWebhookProxy_NoRegister();
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UCreateWebhookProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UFunction* Z_Construct_UDelegateFunction_DiscordHttpApi_OnWebhookCreated__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCreateWebhookProxy::execCreateWebhook)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImageData);
		P_GET_PROPERTY(FInt64Property,Z_Param_ChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCreateWebhookProxy**)Z_Param__Result=UCreateWebhookProxy::CreateWebhook(Z_Param_Name,Z_Param_ImageData,Z_Param_ChannelId);
		P_NATIVE_END;
	}
	void UCreateWebhookProxy::StaticRegisterNativesUCreateWebhookProxy()
	{
		UClass* Class = UCreateWebhookProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWebhook", &UCreateWebhookProxy::execCreateWebhook },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics
	{
		struct CreateWebhookProxy_eventCreateWebhook_Parms
		{
			FString Name;
			FString ImageData;
			int64 ChannelId;
			UCreateWebhookProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageData;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateWebhookProxy_eventCreateWebhook_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_ImageData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_ImageData = { "ImageData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateWebhookProxy_eventCreateWebhook_Parms, ImageData), METADATA_PARAMS(Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_ImageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_ImageData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateWebhookProxy_eventCreateWebhook_Parms, ChannelId), METADATA_PARAMS(Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_ChannelId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateWebhookProxy_eventCreateWebhook_Parms, ReturnValue), Z_Construct_UClass_UCreateWebhookProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_ImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreateWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateWebhookProxy, nullptr, "CreateWebhook", nullptr, nullptr, sizeof(CreateWebhookProxy_eventCreateWebhook_Parms), Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreateWebhookProxy_NoRegister()
	{
		return UCreateWebhookProxy::StaticClass();
	}
	struct Z_Construct_UClass_UCreateWebhookProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWebhookCreated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWebhookCreated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateWebhookProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreateWebhookProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreateWebhookProxy_CreateWebhook, "CreateWebhook" }, // 1008600092
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateWebhookProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CreateWebhookProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CreateWebhookProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateWebhookProxy_Statics::NewProp_OnWebhookCreated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateWebhookProxy" },
		{ "ModuleRelativePath", "Public/CreateWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateWebhookProxy_Statics::NewProp_OnWebhookCreated = { "OnWebhookCreated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateWebhookProxy, OnWebhookCreated), Z_Construct_UDelegateFunction_DiscordHttpApi_OnWebhookCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateWebhookProxy_Statics::NewProp_OnWebhookCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateWebhookProxy_Statics::NewProp_OnWebhookCreated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateWebhookProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateWebhookProxy" },
		{ "ModuleRelativePath", "Public/CreateWebhookProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateWebhookProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateWebhookProxy, OnError), Z_Construct_UDelegateFunction_DiscordHttpApi_OnWebhookCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateWebhookProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateWebhookProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateWebhookProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateWebhookProxy_Statics::NewProp_OnWebhookCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateWebhookProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateWebhookProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateWebhookProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreateWebhookProxy_Statics::ClassParams = {
		&UCreateWebhookProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCreateWebhookProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateWebhookProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateWebhookProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateWebhookProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateWebhookProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreateWebhookProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreateWebhookProxy, 510702299);
	template<> DISCORDHTTPAPI_API UClass* StaticClass<UCreateWebhookProxy>()
	{
		return UCreateWebhookProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreateWebhookProxy(Z_Construct_UClass_UCreateWebhookProxy, &UCreateWebhookProxy::StaticClass, TEXT("/Script/DiscordHttpApi"), TEXT("UCreateWebhookProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateWebhookProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
