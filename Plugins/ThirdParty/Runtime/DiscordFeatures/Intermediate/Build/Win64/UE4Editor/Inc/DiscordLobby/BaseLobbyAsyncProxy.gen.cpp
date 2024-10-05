// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/BaseLobbyAsyncProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseLobbyAsyncProxy() {}
// Cross Module References
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UBaseLobbyAsyncProxy_NoRegister();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UBaseLobbyAsyncProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UDiscordLobbyManager_NoRegister();
// End Cross Module References
	void UBaseLobbyAsyncProxy::StaticRegisterNativesUBaseLobbyAsyncProxy()
	{
	}
	UClass* Z_Construct_UClass_UBaseLobbyAsyncProxy_NoRegister()
	{
		return UBaseLobbyAsyncProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseLobbyAsyncProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseLobbyAsyncProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::NewProp_Manager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseLobbyAsyncProxy" },
		{ "ModuleRelativePath", "Public/BaseLobbyAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseLobbyAsyncProxy, Manager), Z_Construct_UClass_UDiscordLobbyManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::NewProp_Manager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseLobbyAsyncProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::ClassParams = {
		&UBaseLobbyAsyncProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseLobbyAsyncProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseLobbyAsyncProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseLobbyAsyncProxy, 3313327634);
	template<> DISCORDLOBBY_API UClass* StaticClass<UBaseLobbyAsyncProxy>()
	{
		return UBaseLobbyAsyncProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseLobbyAsyncProxy(Z_Construct_UClass_UBaseLobbyAsyncProxy, &UBaseLobbyAsyncProxy::StaticClass, TEXT("/Script/DiscordLobby"), TEXT("UBaseLobbyAsyncProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseLobbyAsyncProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
