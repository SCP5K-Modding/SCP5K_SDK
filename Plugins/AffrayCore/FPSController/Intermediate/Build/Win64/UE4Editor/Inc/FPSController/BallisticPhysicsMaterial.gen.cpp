// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/BallisticPhysicsMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallisticPhysicsMaterial() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UBallisticPhysicsMaterial_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UBallisticPhysicsMaterial();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSurfaceData();
// End Cross Module References
	void UBallisticPhysicsMaterial::StaticRegisterNativesUBallisticPhysicsMaterial()
	{
	}
	UClass* Z_Construct_UClass_UBallisticPhysicsMaterial_NoRegister()
	{
		return UBallisticPhysicsMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UBallisticPhysicsMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualSurfaceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualSurfaceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallisticHardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BallisticHardness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallisticThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BallisticThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallisticFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BallisticFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallisticRicochetChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BallisticRicochetChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDamageActor_MetaData[];
#endif
		static void NewProp_bDamageActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDamageActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "BallisticPhysicsMaterial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BallisticPhysicsMaterial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_VisualSurfaceData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticPhysicsMaterial" },
		{ "ModuleRelativePath", "Public/BallisticPhysicsMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_VisualSurfaceData = { "VisualSurfaceData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBallisticPhysicsMaterial, VisualSurfaceData), Z_Construct_UScriptStruct_FSurfaceData, METADATA_PARAMS(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_VisualSurfaceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_VisualSurfaceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticHardness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticPhysicsMaterial" },
		{ "ModuleRelativePath", "Public/BallisticPhysicsMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticHardness = { "BallisticHardness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBallisticPhysicsMaterial, BallisticHardness), METADATA_PARAMS(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticHardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticHardness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticThickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticPhysicsMaterial" },
		{ "ModuleRelativePath", "Public/BallisticPhysicsMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticThickness = { "BallisticThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBallisticPhysicsMaterial, BallisticThickness), METADATA_PARAMS(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticFriction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticPhysicsMaterial" },
		{ "ModuleRelativePath", "Public/BallisticPhysicsMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticFriction = { "BallisticFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBallisticPhysicsMaterial, BallisticFriction), METADATA_PARAMS(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticRicochetChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticPhysicsMaterial" },
		{ "ModuleRelativePath", "Public/BallisticPhysicsMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticRicochetChance = { "BallisticRicochetChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBallisticPhysicsMaterial, BallisticRicochetChance), METADATA_PARAMS(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticRicochetChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticRicochetChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_bDamageActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticPhysicsMaterial" },
		{ "ModuleRelativePath", "Public/BallisticPhysicsMaterial.h" },
	};
#endif
	void Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_bDamageActor_SetBit(void* Obj)
	{
		((UBallisticPhysicsMaterial*)Obj)->bDamageActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_bDamageActor = { "bDamageActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBallisticPhysicsMaterial), &Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_bDamageActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_bDamageActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_bDamageActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_HitChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticPhysicsMaterial" },
		{ "ModuleRelativePath", "Public/BallisticPhysicsMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_HitChance = { "HitChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBallisticPhysicsMaterial, HitChance), METADATA_PARAMS(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_HitChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_HitChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_VisualSurfaceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticHardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_BallisticRicochetChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_bDamageActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::NewProp_HitChance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBallisticPhysicsMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::ClassParams = {
		&UBallisticPhysicsMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBallisticPhysicsMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBallisticPhysicsMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBallisticPhysicsMaterial, 1419734800);
	template<> FPSCONTROLLER_API UClass* StaticClass<UBallisticPhysicsMaterial>()
	{
		return UBallisticPhysicsMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBallisticPhysicsMaterial(Z_Construct_UClass_UBallisticPhysicsMaterial, &UBallisticPhysicsMaterial::StaticClass, TEXT("/Script/FPSController"), TEXT("UBallisticPhysicsMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBallisticPhysicsMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
