// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordOverlay/Public/BaseOverlayAsyncProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseOverlayAsyncProxy() {}
// Cross Module References
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UBaseOverlayAsyncProxy_NoRegister();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UBaseOverlayAsyncProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordOverlay();
	DISCORDOVERLAY_API UFunction* Z_Construct_UDelegateFunction_DiscordOverlay_OverlayResult__DelegateSignature();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UDiscordOverlayManager_NoRegister();
// End Cross Module References
	void UBaseOverlayAsyncProxy::StaticRegisterNativesUBaseOverlayAsyncProxy()
	{
	}
	UClass* Z_Construct_UClass_UBaseOverlayAsyncProxy_NoRegister()
	{
		return UBaseOverlayAsyncProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordOverlay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseOverlayAsyncProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseOverlayAsyncProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseOverlayAsyncProxy" },
		{ "ModuleRelativePath", "Public/BaseOverlayAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseOverlayAsyncProxy, OnSuccess), Z_Construct_UDelegateFunction_DiscordOverlay_OverlayResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseOverlayAsyncProxy" },
		{ "ModuleRelativePath", "Public/BaseOverlayAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseOverlayAsyncProxy, OnError), Z_Construct_UDelegateFunction_DiscordOverlay_OverlayResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_Manager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseOverlayAsyncProxy" },
		{ "ModuleRelativePath", "Public/BaseOverlayAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseOverlayAsyncProxy, Manager), Z_Construct_UClass_UDiscordOverlayManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::NewProp_Manager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseOverlayAsyncProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::ClassParams = {
		&UBaseOverlayAsyncProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseOverlayAsyncProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseOverlayAsyncProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseOverlayAsyncProxy, 2725021479);
	template<> DISCORDOVERLAY_API UClass* StaticClass<UBaseOverlayAsyncProxy>()
	{
		return UBaseOverlayAsyncProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseOverlayAsyncProxy(Z_Construct_UClass_UBaseOverlayAsyncProxy, &UBaseOverlayAsyncProxy::StaticClass, TEXT("/Script/DiscordOverlay"), TEXT("UBaseOverlayAsyncProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseOverlayAsyncProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
