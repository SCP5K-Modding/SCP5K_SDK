// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherCableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherCableActor() {}
// Cross Module References
	TETHER_API UClass* Z_Construct_UClass_ATetherCableActor_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_ATetherCableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherCableProperties();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	TETHER_API UClass* Z_Construct_UClass_UTetherGuideSplineComponent_NoRegister();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationModel();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription();
	TETHER_API UClass* Z_Construct_UClass_UTetherCableMeshComponent_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTetherMeshGenerator_NoRegister();
// End Cross Module References
	void ATetherCableActor::StaticRegisterNativesATetherCableActor()
	{
	}
	UClass* Z_Construct_UClass_ATetherCableActor_NoRegister()
	{
		return ATetherCableActor::StaticClass();
	}
	struct Z_Construct_UClass_ATetherCableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CableProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockCurrentState_MetaData[];
#endif
		static void NewProp_bLockCurrentState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockCurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSynchronousRealtime_MetaData[];
#endif
		static void NewProp_bSynchronousRealtime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSynchronousRealtime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealtimeInEditorTimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RealtimeInEditorTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeSimulationParticles_MetaData[];
#endif
		static void NewProp_bDebugVisualizeSimulationParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeSimulationParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeSimulationCollision_MetaData[];
#endif
		static void NewProp_bDebugVisualizeSimulationCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeSimulationCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeBuiltStaticMeshPoints_MetaData[];
#endif
		static void NewProp_bDebugVisualizeBuiltStaticMeshPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeBuiltStaticMeshPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeContactPoints_MetaData[];
#endif
		static void NewProp_bDebugVisualizeContactPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeContactPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeComponentLocations_MetaData[];
#endif
		static void NewProp_bDebugVisualizeComponentLocations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeComponentLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeTangents_MetaData[];
#endif
		static void NewProp_bDebugVisualizeTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeCreated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeCreated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuideSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuideSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSimulationModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveSimulationModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltCurveDescriptionLocalSpaceSimplified_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuiltCurveDescriptionLocalSpaceSimplified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicPreviewMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicPreviewMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetherCableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TetherCableActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_CableProperties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_CableProperties = { "CableProperties", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, CableProperties), Z_Construct_UScriptStruct_FTetherCableProperties, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_CableProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_CableProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bLockCurrentState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState = { "bLockCurrentState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x001200000208000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bSynchronousRealtime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime = { "bSynchronousRealtime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_RealtimeInEditorTimeDilation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_RealtimeInEditorTimeDilation = { "RealtimeInEditorTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, RealtimeInEditorTimeDilation), METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_RealtimeInEditorTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_RealtimeInEditorTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bDebugVisualizeSimulationParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles = { "bDebugVisualizeSimulationParticles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bDebugVisualizeSimulationCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision = { "bDebugVisualizeSimulationCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bDebugVisualizeBuiltStaticMeshPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints = { "bDebugVisualizeBuiltStaticMeshPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bDebugVisualizeContactPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints = { "bDebugVisualizeContactPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bDebugVisualizeComponentLocations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations = { "bDebugVisualizeComponentLocations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bDebugVisualizeTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents = { "bDebugVisualizeTangents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	void Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((ATetherCableActor*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATetherCableActor), &Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_TimeCreated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_TimeCreated = { "TimeCreated", nullptr, (EPropertyFlags)0x0040800000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, TimeCreated), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_TimeCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_TimeCreated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_GuideSpline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_GuideSpline = { "GuideSpline", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, GuideSpline), Z_Construct_UClass_UTetherGuideSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_GuideSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_GuideSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_ActiveSimulationModel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_ActiveSimulationModel = { "ActiveSimulationModel", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, ActiveSimulationModel), Z_Construct_UScriptStruct_FTetherSimulationModel, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_ActiveSimulationModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_ActiveSimulationModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040800000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_BuiltCurveDescriptionLocalSpaceSimplified_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_BuiltCurveDescriptionLocalSpaceSimplified = { "BuiltCurveDescriptionLocalSpaceSimplified", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, BuiltCurveDescriptionLocalSpaceSimplified), Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_BuiltCurveDescriptionLocalSpaceSimplified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_BuiltCurveDescriptionLocalSpaceSimplified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_DynamicPreviewMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_DynamicPreviewMesh = { "DynamicPreviewMesh", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, DynamicPreviewMesh), Z_Construct_UClass_UTetherCableMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_DynamicPreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_DynamicPreviewMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherCableActor_Statics::NewProp_MeshGenerator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetherCableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherCableActor_Statics::NewProp_MeshGenerator = { "MeshGenerator", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherCableActor, MeshGenerator), Z_Construct_UClass_UTetherMeshGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_MeshGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::NewProp_MeshGenerator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATetherCableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_CableProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bLockCurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bSynchronousRealtime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_RealtimeInEditorTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeSimulationCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeBuiltStaticMeshPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeContactPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeComponentLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bDebugVisualizeTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_bVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_SceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_TimeCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_GuideSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_ActiveSimulationModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_BuiltCurveDescriptionLocalSpaceSimplified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_DynamicPreviewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherCableActor_Statics::NewProp_MeshGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetherCableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetherCableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATetherCableActor_Statics::ClassParams = {
		&ATetherCableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATetherCableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATetherCableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherCableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATetherCableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATetherCableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATetherCableActor, 3781178243);
	template<> TETHER_API UClass* StaticClass<ATetherCableActor>()
	{
		return ATetherCableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATetherCableActor(Z_Construct_UClass_ATetherCableActor, &ATetherCableActor::StaticClass, TEXT("/Script/Tether"), TEXT("ATetherCableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATetherCableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
