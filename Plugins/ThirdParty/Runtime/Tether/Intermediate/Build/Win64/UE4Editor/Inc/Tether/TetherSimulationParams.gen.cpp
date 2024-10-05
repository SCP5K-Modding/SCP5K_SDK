// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherSimulationParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSimulationParams() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationParams();
	UPackage* Z_Construct_UPackage__Script_Tether();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	TETHER_API UEnum* Z_Construct_UEnum_Tether_ETetherSimulationTimingMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherCableSimulationOptions();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationParams();
// End Cross Module References
class UScriptStruct* FTetherSimulationParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSimulationParams, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSimulationParams"), sizeof(FTetherSimulationParams), Get_Z_Construct_UScriptStruct_FTetherSimulationParams_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSimulationParams>()
{
	return FTetherSimulationParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTetherSimulationParams(FTetherSimulationParams::StaticStruct, TEXT("/Script/Tether"), TEXT("TetherSimulationParams"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFTetherSimulationParams
{
	FScriptStruct_Tether_StaticRegisterNativesFTetherSimulationParams()
	{
		UScriptStruct::DeferCppStructOps<FTetherSimulationParams>(FName(TEXT("TetherSimulationParams")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFTetherSimulationParams;
	struct Z_Construct_UScriptStruct_FTetherSimulationParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SimulationName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TimingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TimingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredParticleDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredParticleDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CableForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimulationOptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TetherSimulationParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSimulationParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_World_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationParams" },
		{ "ModuleRelativePath", "Public/TetherSimulationParams.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationParams" },
		{ "ModuleRelativePath", "Public/TetherSimulationParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationName = { "SimulationName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, SimulationName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationParams" },
		{ "ModuleRelativePath", "Public/TetherSimulationParams.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode = { "TimingMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, TimingMode), Z_Construct_UEnum_Tether_ETetherSimulationTimingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CollisionWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationParams" },
		{ "ModuleRelativePath", "Public/TetherSimulationParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CollisionWidth = { "CollisionWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, CollisionWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CollisionWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CollisionWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_DesiredParticleDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationParams" },
		{ "ModuleRelativePath", "Public/TetherSimulationParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_DesiredParticleDistance = { "DesiredParticleDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, DesiredParticleDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_DesiredParticleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_DesiredParticleDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CableForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationParams" },
		{ "ModuleRelativePath", "Public/TetherSimulationParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CableForce = { "CableForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, CableForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CableForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CableForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationParams" },
		{ "ModuleRelativePath", "Public/TetherSimulationParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationOptions = { "SimulationOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, SimulationOptions), Z_Construct_UScriptStruct_FTetherCableSimulationOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationOptions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams_Inner = { "SegmentParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetherSegmentSimulationParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationParams" },
		{ "ModuleRelativePath", "Public/TetherSimulationParams.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams = { "SegmentParams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParams, SegmentParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_TimingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CollisionWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_DesiredParticleDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_CableForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SimulationOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::NewProp_SegmentParams,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSimulationParams",
		sizeof(FTetherSimulationParams),
		alignof(FTetherSimulationParams),
		Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TetherSimulationParams"), sizeof(FTetherSimulationParams), Get_Z_Construct_UScriptStruct_FTetherSimulationParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTetherSimulationParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationParams_Hash() { return 1602423592U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
