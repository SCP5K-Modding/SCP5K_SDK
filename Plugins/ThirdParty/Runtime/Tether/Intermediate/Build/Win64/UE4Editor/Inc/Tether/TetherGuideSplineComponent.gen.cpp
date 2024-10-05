// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherGuideSplineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherGuideSplineComponent() {}
// Cross Module References
	TETHER_API UClass* Z_Construct_UClass_UTetherGuideSplineComponent_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTetherGuideSplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UClass* Z_Construct_UClass_UTetherGuideSplineMetadata_NoRegister();
// End Cross Module References
	void UTetherGuideSplineComponent::StaticRegisterNativesUTetherGuideSplineComponent()
	{
	}
	UClass* Z_Construct_UClass_UTetherGuideSplineComponent_NoRegister()
	{
		return UTetherGuideSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTetherGuideSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetherGuideSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherGuideSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "TetherGuideSplineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TetherGuideSplineComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherGuideSplineComponent_Statics::NewProp_MetaData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherGuideSplineComponent" },
		{ "ModuleRelativePath", "Public/TetherGuideSplineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTetherGuideSplineComponent_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetherGuideSplineComponent, MetaData), Z_Construct_UClass_UTetherGuideSplineMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTetherGuideSplineComponent_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherGuideSplineComponent_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetherGuideSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherGuideSplineComponent_Statics::NewProp_MetaData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetherGuideSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherGuideSplineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTetherGuideSplineComponent_Statics::ClassParams = {
		&UTetherGuideSplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTetherGuideSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTetherGuideSplineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTetherGuideSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherGuideSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetherGuideSplineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTetherGuideSplineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTetherGuideSplineComponent, 3251303434);
	template<> TETHER_API UClass* StaticClass<UTetherGuideSplineComponent>()
	{
		return UTetherGuideSplineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTetherGuideSplineComponent(Z_Construct_UClass_UTetherGuideSplineComponent, &UTetherGuideSplineComponent::StaticClass, TEXT("/Script/Tether"), TEXT("UTetherGuideSplineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherGuideSplineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
