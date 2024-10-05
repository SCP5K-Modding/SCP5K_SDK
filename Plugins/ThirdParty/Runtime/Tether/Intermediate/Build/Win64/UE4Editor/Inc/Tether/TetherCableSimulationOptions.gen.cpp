// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherCableSimulationOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherCableSimulationOptions() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherCableSimulationOptions();
	UPackage* Z_Construct_UPackage__Script_Tether();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
// End Cross Module References
class UScriptStruct* FTetherCableSimulationOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherCableSimulationOptions, Z_Construct_UPackage__Script_Tether(), TEXT("TetherCableSimulationOptions"), sizeof(FTetherCableSimulationOptions), Get_Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherCableSimulationOptions>()
{
	return FTetherCableSimulationOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTetherCableSimulationOptions(FTetherCableSimulationOptions::StaticStruct, TEXT("/Script/Tether"), TEXT("TetherCableSimulationOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFTetherCableSimulationOptions
{
	FScriptStruct_Tether_StaticRegisterNativesFTetherCableSimulationOptions()
	{
		UScriptStruct::DeferCppStructOps<FTetherCableSimulationOptions>(FName(TEXT("TetherCableSimulationOptions")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFTetherCableSimulationOptions;
	struct Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimulationDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubstepTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubstepTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStiffness_MetaData[];
#endif
		static void NewProp_bEnableStiffness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessSolverIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StiffnessSolverIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Drag_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Drag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSelfCollision_MetaData[];
#endif
		static void NewProp_bEnableSelfCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSelfCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionWidthScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionWidthScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleDistanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParticleDistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintsEaseInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstraintsEaseInTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherCableSimulationOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SimulationDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SimulationDuration = { "SimulationDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, SimulationDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SimulationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SimulationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SubstepTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SubstepTime = { "SubstepTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, SubstepTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SubstepTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SubstepTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness_SetBit(void* Obj)
	{
		((FTetherCableSimulationOptions*)Obj)->bEnableStiffness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness = { "bEnableStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherCableSimulationOptions), &Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_StiffnessSolverIterations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_StiffnessSolverIterations = { "StiffnessSolverIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, StiffnessSolverIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_StiffnessSolverIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_StiffnessSolverIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_Drag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, Drag), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_Drag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_Drag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FTetherCableSimulationOptions*)Obj)->bEnableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherCableSimulationOptions), &Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision_SetBit(void* Obj)
	{
		((FTetherCableSimulationOptions*)Obj)->bEnableSelfCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision = { "bEnableSelfCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherCableSimulationOptions), &Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, CollisionProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionWidthScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionWidthScale = { "CollisionWidthScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, CollisionWidthScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionWidthScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionWidthScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionFriction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionFriction = { "CollisionFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, CollisionFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ParticleDistanceScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ParticleDistanceScale = { "ParticleDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, ParticleDistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ParticleDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ParticleDistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ConstraintsEaseInTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherCableSimulationOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ConstraintsEaseInTime = { "ConstraintsEaseInTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableSimulationOptions, ConstraintsEaseInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ConstraintsEaseInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ConstraintsEaseInTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SimulationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_SubstepTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_StiffnessSolverIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_Drag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_bEnableSelfCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionWidthScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_CollisionFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ParticleDistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::NewProp_ConstraintsEaseInTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherCableSimulationOptions",
		sizeof(FTetherCableSimulationOptions),
		alignof(FTetherCableSimulationOptions),
		Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherCableSimulationOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TetherCableSimulationOptions"), sizeof(FTetherCableSimulationOptions), Get_Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTetherCableSimulationOptions_Hash() { return 1007949843U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
