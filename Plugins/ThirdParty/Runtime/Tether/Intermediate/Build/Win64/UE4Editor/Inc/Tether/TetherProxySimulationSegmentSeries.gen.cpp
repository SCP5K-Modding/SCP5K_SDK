// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherProxySimulationSegmentSeries.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherProxySimulationSegmentSeries() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries();
// End Cross Module References

static_assert(std::is_polymorphic<FTetherProxySimulationSegmentSeries>() == std::is_polymorphic<FTetherSimulationSegmentSeries>(), "USTRUCT FTetherProxySimulationSegmentSeries cannot be polymorphic unless super FTetherSimulationSegmentSeries is polymorphic");

class UScriptStruct* FTetherProxySimulationSegmentSeries::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries, Z_Construct_UPackage__Script_Tether(), TEXT("TetherProxySimulationSegmentSeries"), sizeof(FTetherProxySimulationSegmentSeries), Get_Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherProxySimulationSegmentSeries>()
{
	return FTetherProxySimulationSegmentSeries::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTetherProxySimulationSegmentSeries(FTetherProxySimulationSegmentSeries::StaticStruct, TEXT("/Script/Tether"), TEXT("TetherProxySimulationSegmentSeries"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFTetherProxySimulationSegmentSeries
{
	FScriptStruct_Tether_StaticRegisterNativesFTetherProxySimulationSegmentSeries()
	{
		UScriptStruct::DeferCppStructOps<FTetherProxySimulationSegmentSeries>(FName(TEXT("TetherProxySimulationSegmentSeries")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFTetherProxySimulationSegmentSeries;
	struct Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TetherProxySimulationSegmentSeries.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherProxySimulationSegmentSeries>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries,
		&NewStructOps,
		"TetherProxySimulationSegmentSeries",
		sizeof(FTetherProxySimulationSegmentSeries),
		alignof(FTetherProxySimulationSegmentSeries),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TetherProxySimulationSegmentSeries"), sizeof(FTetherProxySimulationSegmentSeries), Get_Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Hash() { return 185270728U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
