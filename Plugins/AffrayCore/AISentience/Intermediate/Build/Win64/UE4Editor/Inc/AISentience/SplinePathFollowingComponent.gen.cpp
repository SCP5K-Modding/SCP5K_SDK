// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SplinePathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplinePathFollowingComponent() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USplinePathFollowingComponent_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USplinePathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void USplinePathFollowingComponent::StaticRegisterNativesUSplinePathFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_USplinePathFollowingComponent_NoRegister()
	{
		return USplinePathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USplinePathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSubdivisions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSubdivisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalizeTangents_MetaData[];
#endif
		static void NewProp_bNormalizeTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalizeTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentScaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TangentScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebugSplineInputs_MetaData[];
#endif
		static void NewProp_bShowDebugSplineInputs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebugSplineInputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebugSplineOutputs_MetaData[];
#endif
		static void NewProp_bShowDebugSplineOutputs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebugSplineOutputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplinePathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplinePathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SplinePathFollowingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SplinePathFollowingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_MinDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplinePathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SplinePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplinePathFollowingComponent, MinDistance), METADATA_PARAMS(Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_NumSubdivisions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplinePathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SplinePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_NumSubdivisions = { "NumSubdivisions", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplinePathFollowingComponent, NumSubdivisions), METADATA_PARAMS(Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_NumSubdivisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_NumSubdivisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bNormalizeTangents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplinePathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SplinePathFollowingComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bNormalizeTangents_SetBit(void* Obj)
	{
		((USplinePathFollowingComponent*)Obj)->bNormalizeTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bNormalizeTangents = { "bNormalizeTangents", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplinePathFollowingComponent), &Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bNormalizeTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bNormalizeTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bNormalizeTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_TangentScaling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplinePathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SplinePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_TangentScaling = { "TangentScaling", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USplinePathFollowingComponent, TangentScaling), METADATA_PARAMS(Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_TangentScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_TangentScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineInputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplinePathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SplinePathFollowingComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineInputs_SetBit(void* Obj)
	{
		((USplinePathFollowingComponent*)Obj)->bShowDebugSplineInputs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineInputs = { "bShowDebugSplineInputs", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplinePathFollowingComponent), &Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineInputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineInputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineOutputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplinePathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SplinePathFollowingComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineOutputs_SetBit(void* Obj)
	{
		((USplinePathFollowingComponent*)Obj)->bShowDebugSplineOutputs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineOutputs = { "bShowDebugSplineOutputs", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USplinePathFollowingComponent), &Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineOutputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineOutputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplinePathFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_NumSubdivisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bNormalizeTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_TangentScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineInputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplinePathFollowingComponent_Statics::NewProp_bShowDebugSplineOutputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplinePathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplinePathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USplinePathFollowingComponent_Statics::ClassParams = {
		&USplinePathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USplinePathFollowingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USplinePathFollowingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USplinePathFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplinePathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplinePathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USplinePathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USplinePathFollowingComponent, 1407955991);
	template<> AISENTIENCE_API UClass* StaticClass<USplinePathFollowingComponent>()
	{
		return USplinePathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USplinePathFollowingComponent(Z_Construct_UClass_USplinePathFollowingComponent, &USplinePathFollowingComponent::StaticClass, TEXT("/Script/AISentience"), TEXT("USplinePathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplinePathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
