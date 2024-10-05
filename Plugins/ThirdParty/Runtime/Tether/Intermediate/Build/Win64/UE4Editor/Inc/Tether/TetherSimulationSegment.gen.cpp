// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherSimulationSegment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSimulationSegment() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationSegment();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FSplineSegmentInfo();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationParticle();
// End Cross Module References
class UScriptStruct* FTetherSimulationSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationSegment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSimulationSegment, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSimulationSegment"), sizeof(FTetherSimulationSegment), Get_Z_Construct_UScriptStruct_FTetherSimulationSegment_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSimulationSegment>()
{
	return FTetherSimulationSegment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTetherSimulationSegment(FTetherSimulationSegment::StaticStruct, TEXT("/Script/Tether"), TEXT("TetherSimulationSegment"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFTetherSimulationSegment
{
	FScriptStruct_Tether_StaticRegisterNativesFTetherSimulationSegment()
	{
		UScriptStruct::DeferCppStructOps<FTetherSimulationSegment>(FName(TEXT("TetherSimulationSegment")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFTetherSimulationSegment;
	struct Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentUniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SegmentUniqueId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineSegmentInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineSegmentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Particles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Particles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimulationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvalidated_MetaData[];
#endif
		static void NewProp_bInvalidated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvalidated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TetherSimulationSegment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSimulationSegment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SegmentUniqueId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationSegment" },
		{ "ModuleRelativePath", "Public/TetherSimulationSegment.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SegmentUniqueId = { "SegmentUniqueId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationSegment, SegmentUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SegmentUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SegmentUniqueId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SplineSegmentInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationSegment" },
		{ "ModuleRelativePath", "Public/TetherSimulationSegment.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SplineSegmentInfo = { "SplineSegmentInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationSegment, SplineSegmentInfo), Z_Construct_UScriptStruct_FSplineSegmentInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SplineSegmentInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SplineSegmentInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Length_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationSegment" },
		{ "ModuleRelativePath", "Public/TetherSimulationSegment.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationSegment, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Length_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles_Inner = { "Particles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetherSimulationParticle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationSegment" },
		{ "ModuleRelativePath", "Public/TetherSimulationSegment.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles = { "Particles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationSegment, Particles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SimulationTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationSegment" },
		{ "ModuleRelativePath", "Public/TetherSimulationSegment.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SimulationTime = { "SimulationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationSegment, SimulationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SimulationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SimulationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationSegment" },
		{ "ModuleRelativePath", "Public/TetherSimulationSegment.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated_SetBit(void* Obj)
	{
		((FTetherSimulationSegment*)Obj)->bInvalidated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated = { "bInvalidated", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherSimulationSegment), &Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SegmentUniqueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SplineSegmentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_Particles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_SimulationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::NewProp_bInvalidated,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSimulationSegment",
		sizeof(FTetherSimulationSegment),
		alignof(FTetherSimulationSegment),
		Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationSegment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TetherSimulationSegment"), sizeof(FTetherSimulationSegment), Get_Z_Construct_UScriptStruct_FTetherSimulationSegment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTetherSimulationSegment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationSegment_Hash() { return 2018135523U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
