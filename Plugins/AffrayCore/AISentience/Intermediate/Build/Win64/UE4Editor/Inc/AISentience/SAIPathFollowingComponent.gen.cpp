// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIPathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIPathFollowingComponent() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIPathFollowingComponent_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void USAIPathFollowingComponent::StaticRegisterNativesUSAIPathFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_USAIPathFollowingComponent_NoRegister()
	{
		return USAIPathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USAIPathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIPathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCrowdFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIPathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SAIPathFollowingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIPathFollowingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIPathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIPathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAIPathFollowingComponent_Statics::ClassParams = {
		&USAIPathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USAIPathFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIPathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIPathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAIPathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAIPathFollowingComponent, 1688622101);
	template<> AISENTIENCE_API UClass* StaticClass<USAIPathFollowingComponent>()
	{
		return USAIPathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAIPathFollowingComponent(Z_Construct_UClass_USAIPathFollowingComponent, &USAIPathFollowingComponent::StaticClass, TEXT("/Script/AISentience"), TEXT("USAIPathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIPathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
