// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreAsyncAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreAsyncAction() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	void USteamCoreAsyncAction::StaticRegisterNativesUSteamCoreAsyncAction()
	{
	}
	UClass* Z_Construct_UClass_USteamCoreAsyncAction_NoRegister()
	{
		return USteamCoreAsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreAsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreAsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreAsyncAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreAsyncAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreAsyncAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreAsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAsyncAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAsyncAction_Statics::ClassParams = {
		&USteamCoreAsyncAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreAsyncAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreAsyncAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreAsyncAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreAsyncAction, 4075288443);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreAsyncAction>()
	{
		return USteamCoreAsyncAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreAsyncAction(Z_Construct_UClass_USteamCoreAsyncAction, &USteamCoreAsyncAction::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreAsyncAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreAsyncAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
