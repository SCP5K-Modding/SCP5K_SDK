// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherSimulationModel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSimulationModel() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationModel();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationSegment();
// End Cross Module References

static_assert(std::is_polymorphic<FTetherSimulationModel>() == std::is_polymorphic<FTetherSimulationSegmentSeries>(), "USTRUCT FTetherSimulationModel cannot be polymorphic unless super FTetherSimulationSegmentSeries is polymorphic");

class UScriptStruct* FTetherSimulationModel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationModel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSimulationModel, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSimulationModel"), sizeof(FTetherSimulationModel), Get_Z_Construct_UScriptStruct_FTetherSimulationModel_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSimulationModel>()
{
	return FTetherSimulationModel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTetherSimulationModel(FTetherSimulationModel::StaticStruct, TEXT("/Script/Tether"), TEXT("TetherSimulationModel"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFTetherSimulationModel
{
	FScriptStruct_Tether_StaticRegisterNativesFTetherSimulationModel()
	{
		UScriptStruct::DeferCppStructOps<FTetherSimulationModel>(FName(TEXT("TetherSimulationModel")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFTetherSimulationModel;
	struct Z_Construct_UScriptStruct_FTetherSimulationModel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationBaseWorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimulationBaseWorldTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Segments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TetherSimulationModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSimulationModel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_SimulationBaseWorldTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationModel" },
		{ "ModuleRelativePath", "Public/TetherSimulationModel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_SimulationBaseWorldTransform = { "SimulationBaseWorldTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationModel, SimulationBaseWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_SimulationBaseWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_SimulationBaseWorldTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetherSimulationSegment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationModel" },
		{ "ModuleRelativePath", "Public/TetherSimulationModel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationModel, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_SimulationBaseWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries,
		&NewStructOps,
		"TetherSimulationModel",
		sizeof(FTetherSimulationModel),
		alignof(FTetherSimulationModel),
		Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationModel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationModel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TetherSimulationModel"), sizeof(FTetherSimulationModel), Get_Z_Construct_UScriptStruct_FTetherSimulationModel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationModel_Hash() { return 2124015764U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
