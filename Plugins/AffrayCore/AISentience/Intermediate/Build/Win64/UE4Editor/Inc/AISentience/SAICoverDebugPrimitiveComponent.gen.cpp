// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAICoverDebugPrimitiveComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAICoverDebugPrimitiveComponent() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAICoverDebugPrimitiveComponent_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAICoverDebugPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void USAICoverDebugPrimitiveComponent::StaticRegisterNativesUSAICoverDebugPrimitiveComponent()
	{
	}
	UClass* Z_Construct_UClass_USAICoverDebugPrimitiveComponent_NoRegister()
	{
		return USAICoverDebugPrimitiveComponent::StaticClass();
	}
	struct Z_Construct_UClass_USAICoverDebugPrimitiveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAICoverDebugPrimitiveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAICoverDebugPrimitiveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SAICoverDebugPrimitiveComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAICoverDebugPrimitiveComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAICoverDebugPrimitiveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAICoverDebugPrimitiveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAICoverDebugPrimitiveComponent_Statics::ClassParams = {
		&USAICoverDebugPrimitiveComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USAICoverDebugPrimitiveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAICoverDebugPrimitiveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAICoverDebugPrimitiveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAICoverDebugPrimitiveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAICoverDebugPrimitiveComponent, 1911740038);
	template<> AISENTIENCE_API UClass* StaticClass<USAICoverDebugPrimitiveComponent>()
	{
		return USAICoverDebugPrimitiveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAICoverDebugPrimitiveComponent(Z_Construct_UClass_USAICoverDebugPrimitiveComponent, &USAICoverDebugPrimitiveComponent::StaticClass, TEXT("/Script/AISentience"), TEXT("USAICoverDebugPrimitiveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAICoverDebugPrimitiveComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
