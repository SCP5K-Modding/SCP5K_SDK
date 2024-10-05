// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/ModularAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAsset() {}
// Cross Module References
	MODULARASSETS_API UClass* Z_Construct_UClass_AModularAsset_NoRegister();
	MODULARASSETS_API UClass* Z_Construct_UClass_AModularAsset();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MODULARASSETS_API UClass* Z_Construct_UClass_UModularAssetType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AModularAsset::execRefreshAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModularAsset::execRefreshComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshComponents();
		P_NATIVE_END;
	}
	void AModularAsset::StaticRegisterNativesAModularAsset()
	{
		UClass* Class = AModularAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefreshAsset", &AModularAsset::execRefreshAsset },
			{ "RefreshComponents", &AModularAsset::execRefreshComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AModularAsset_RefreshAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModularAsset_RefreshAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularAsset_RefreshAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularAsset, nullptr, "RefreshAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModularAsset_RefreshAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAsset_RefreshAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModularAsset_RefreshAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModularAsset_RefreshAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModularAsset_RefreshComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModularAsset_RefreshComponents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularAsset_RefreshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularAsset, nullptr, "RefreshComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModularAsset_RefreshComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAsset_RefreshComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModularAsset_RefreshComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModularAsset_RefreshComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AModularAsset_NoRegister()
	{
		return AModularAsset::StaticClass();
	}
	struct Z_Construct_UClass_AModularAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancedMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AggregateCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AggregateCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLODs_MetaData[];
#endif
		static void NewProp_bUseLODs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAsOccluder_MetaData[];
#endif
		static void NewProp_bUseAsOccluder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAsOccluder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadows_MetaData[];
#endif
		static void NewProp_bCastShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSubtractorCaching_MetaData[];
#endif
		static void NewProp_bUseSubtractorCaching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSubtractorCaching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollisionAggregation_MetaData[];
#endif
		static void NewProp_bEnableCollisionAggregation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollisionAggregation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverridePhysicalMaterial_MetaData[];
#endif
		static void NewProp_bOverridePhysicalMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverridePhysicalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AggregatePhysicalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AggregatePhysicalMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subtractors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtractors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subtractors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAssetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAssetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeAssetBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NegativeAssetBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionSnapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PositionSnapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSnapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RotationSnapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapping_MetaData[];
#endif
		static void NewProp_bEnableSnapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSubtractorSnapping_MetaData[];
#endif
		static void NewProp_bEnableSubtractorSnapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSubtractorSnapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AModularAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModularAsset_RefreshAsset, "RefreshAsset" }, // 1889396151
		{ &Z_Construct_UFunction_AModularAsset_RefreshComponents, "RefreshComponents" }, // 876436523
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModularAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_InstancedMeshes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_InstancedMeshes_Inner = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_InstancedMeshes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_InstancedMeshes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_InstancedMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_InstancedMeshes = { "InstancedMeshes", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, InstancedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_InstancedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_InstancedMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_Meshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_Meshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_Materials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_AggregateCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_AggregateCollision = { "AggregateCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, AggregateCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_AggregateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_AggregateCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseLODs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	void Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseLODs_SetBit(void* Obj)
	{
		((AModularAsset*)Obj)->bUseLODs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseLODs = { "bUseLODs", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModularAsset), &Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseAsOccluder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	void Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseAsOccluder_SetBit(void* Obj)
	{
		((AModularAsset*)Obj)->bUseAsOccluder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseAsOccluder = { "bUseAsOccluder", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModularAsset), &Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseAsOccluder_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseAsOccluder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseAsOccluder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_bCastShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	void Z_Construct_UClass_AModularAsset_Statics::NewProp_bCastShadows_SetBit(void* Obj)
	{
		((AModularAsset*)Obj)->bCastShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_bCastShadows = { "bCastShadows", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModularAsset), &Z_Construct_UClass_AModularAsset_Statics::NewProp_bCastShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_bCastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_bCastShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseSubtractorCaching_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	void Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseSubtractorCaching_SetBit(void* Obj)
	{
		((AModularAsset*)Obj)->bUseSubtractorCaching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseSubtractorCaching = { "bUseSubtractorCaching", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModularAsset), &Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseSubtractorCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseSubtractorCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseSubtractorCaching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableCollisionAggregation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	void Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableCollisionAggregation_SetBit(void* Obj)
	{
		((AModularAsset*)Obj)->bEnableCollisionAggregation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableCollisionAggregation = { "bEnableCollisionAggregation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModularAsset), &Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableCollisionAggregation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableCollisionAggregation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableCollisionAggregation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_bOverridePhysicalMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	void Z_Construct_UClass_AModularAsset_Statics::NewProp_bOverridePhysicalMaterial_SetBit(void* Obj)
	{
		((AModularAsset*)Obj)->bOverridePhysicalMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_bOverridePhysicalMaterial = { "bOverridePhysicalMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModularAsset), &Z_Construct_UClass_AModularAsset_Statics::NewProp_bOverridePhysicalMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_bOverridePhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_bOverridePhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_AggregatePhysicalMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_AggregatePhysicalMaterial = { "AggregatePhysicalMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, AggregatePhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_AggregatePhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_AggregatePhysicalMaterial_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_Subtractors_Inner = { "Subtractors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_Subtractors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_Subtractors = { "Subtractors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, Subtractors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_Subtractors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_Subtractors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_PrimaryAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_PrimaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_PrimaryAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_MaxAssetSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_MaxAssetSize = { "MaxAssetSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, MaxAssetSize), METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_MaxAssetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_MaxAssetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_AssetBoundsExtension_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_AssetBoundsExtension = { "AssetBoundsExtension", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, AssetBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_AssetBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_AssetBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_NegativeAssetBoundsExtension_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_NegativeAssetBoundsExtension = { "NegativeAssetBoundsExtension", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, NegativeAssetBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_NegativeAssetBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_NegativeAssetBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_Size_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_PositionSnapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_PositionSnapping = { "PositionSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, PositionSnapping), METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_PositionSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_PositionSnapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_RotationSnapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_RotationSnapping = { "RotationSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, RotationSnapping), METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_RotationSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_RotationSnapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSnapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	void Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSnapping_SetBit(void* Obj)
	{
		((AModularAsset*)Obj)->bEnableSnapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSnapping = { "bEnableSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModularAsset), &Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSnapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSnapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSubtractorSnapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	void Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSubtractorSnapping_SetBit(void* Obj)
	{
		((AModularAsset*)Obj)->bEnableSubtractorSnapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSubtractorSnapping = { "bEnableSubtractorSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModularAsset), &Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSubtractorSnapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSubtractorSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSubtractorSnapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAsset_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularAsset" },
		{ "ModuleRelativePath", "Public/ModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AModularAsset_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAsset, CollisionProfileName), METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::NewProp_CollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::NewProp_CollisionProfileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModularAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_InstancedMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_InstancedMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_Meshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_Meshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_AggregateCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseAsOccluder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_bCastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_bUseSubtractorCaching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableCollisionAggregation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_bOverridePhysicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_AggregatePhysicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_Subtractors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_Subtractors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_PrimaryAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_MaxAssetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_AssetBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_NegativeAssetBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_PositionSnapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_RotationSnapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSnapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_bEnableSubtractorSnapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAsset_Statics::NewProp_CollisionProfileName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AModularAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UModularAssetType_NoRegister, (int32)VTABLE_OFFSET(AModularAsset, IModularAssetType), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModularAsset_Statics::ClassParams = {
		&AModularAsset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AModularAsset_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModularAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModularAsset, 590710063);
	template<> MODULARASSETS_API UClass* StaticClass<AModularAsset>()
	{
		return AModularAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModularAsset(Z_Construct_UClass_AModularAsset, &AModularAsset::StaticClass, TEXT("/Script/ModularAssets"), TEXT("AModularAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
