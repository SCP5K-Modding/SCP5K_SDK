// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordStore/Public/BaseStoreAsyncProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseStoreAsyncProxy() {}
// Cross Module References
	DISCORDSTORE_API UClass* Z_Construct_UClass_UBaseStoreAsyncProxy_NoRegister();
	DISCORDSTORE_API UClass* Z_Construct_UClass_UBaseStoreAsyncProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordStore();
	DISCORDSTORE_API UFunction* Z_Construct_UDelegateFunction_DiscordStore_OnStoreResultEvent__DelegateSignature();
	DISCORDSTORE_API UClass* Z_Construct_UClass_UDiscordStoreManager_NoRegister();
// End Cross Module References
	void UBaseStoreAsyncProxy::StaticRegisterNativesUBaseStoreAsyncProxy()
	{
	}
	UClass* Z_Construct_UClass_UBaseStoreAsyncProxy_NoRegister()
	{
		return UBaseStoreAsyncProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBaseStoreAsyncProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordStore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseStoreAsyncProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseStoreAsyncProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseStoreAsyncProxy" },
		{ "ModuleRelativePath", "Public/BaseStoreAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStoreAsyncProxy, OnSuccess), Z_Construct_UDelegateFunction_DiscordStore_OnStoreResultEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseStoreAsyncProxy" },
		{ "ModuleRelativePath", "Public/BaseStoreAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStoreAsyncProxy, OnError), Z_Construct_UDelegateFunction_DiscordStore_OnStoreResultEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_Manager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseStoreAsyncProxy" },
		{ "ModuleRelativePath", "Public/BaseStoreAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStoreAsyncProxy, Manager), Z_Construct_UClass_UDiscordStoreManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::NewProp_Manager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseStoreAsyncProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::ClassParams = {
		&UBaseStoreAsyncProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseStoreAsyncProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseStoreAsyncProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseStoreAsyncProxy, 689620058);
	template<> DISCORDSTORE_API UClass* StaticClass<UBaseStoreAsyncProxy>()
	{
		return UBaseStoreAsyncProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseStoreAsyncProxy(Z_Construct_UClass_UBaseStoreAsyncProxy, &UBaseStoreAsyncProxy::StaticClass, TEXT("/Script/DiscordStore"), TEXT("UBaseStoreAsyncProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseStoreAsyncProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
