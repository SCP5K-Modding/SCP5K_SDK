// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordActivity/Public/BaseActivityAsyncProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseActivityAsyncProxy() {}
// Cross Module References
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UBaseActivityAsyncProxy_NoRegister();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UBaseActivityAsyncProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordActivity();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UDiscordActivityManager_NoRegister();
// End Cross Module References
	void UBaseActivityAsyncProxy::StaticRegisterNativesUBaseActivityAsyncProxy()
	{
	}
	UClass* Z_Construct_UClass_UBaseActivityAsyncProxy_NoRegister()
	{
		return UBaseActivityAsyncProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBaseActivityAsyncProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordActivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseActivityAsyncProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseActivityAsyncProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::NewProp_Manager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseActivityAsyncProxy" },
		{ "ModuleRelativePath", "Public/BaseActivityAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseActivityAsyncProxy, Manager), Z_Construct_UClass_UDiscordActivityManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::NewProp_Manager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseActivityAsyncProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::ClassParams = {
		&UBaseActivityAsyncProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseActivityAsyncProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseActivityAsyncProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseActivityAsyncProxy, 1499313194);
	template<> DISCORDACTIVITY_API UClass* StaticClass<UBaseActivityAsyncProxy>()
	{
		return UBaseActivityAsyncProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseActivityAsyncProxy(Z_Construct_UClass_UBaseActivityAsyncProxy, &UBaseActivityAsyncProxy::StaticClass, TEXT("/Script/DiscordActivity"), TEXT("UBaseActivityAsyncProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseActivityAsyncProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
