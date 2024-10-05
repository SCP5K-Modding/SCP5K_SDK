// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherSegmentSimulationParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSegmentSimulationParams() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationParams();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions();
// End Cross Module References
class UScriptStruct* FTetherSegmentSimulationParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSegmentSimulationParams"), sizeof(FTetherSegmentSimulationParams), Get_Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSegmentSimulationParams>()
{
	return FTetherSegmentSimulationParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTetherSegmentSimulationParams(FTetherSegmentSimulationParams::StaticStruct, TEXT("/Script/Tether"), TEXT("TetherSegmentSimulationParams"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFTetherSegmentSimulationParams
{
	FScriptStruct_Tether_StaticRegisterNativesFTetherSegmentSimulationParams()
	{
		UScriptStruct::DeferCppStructOps<FTetherSegmentSimulationParams>(FName(TEXT("TetherSegmentSimulationParams")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFTetherSegmentSimulationParams;
	struct Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldSimulateSegment_MetaData[];
#endif
		static void NewProp_bShouldSimulateSegment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldSimulateSegment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimulationOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TetherSegmentSimulationParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSegmentSimulationParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSegmentSimulationParams" },
		{ "ModuleRelativePath", "Public/TetherSegmentSimulationParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment_SetBit(void* Obj)
	{
		((FTetherSegmentSimulationParams*)Obj)->bShouldSimulateSegment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment = { "bShouldSimulateSegment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherSegmentSimulationParams), &Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_SimulationOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSegmentSimulationParams" },
		{ "ModuleRelativePath", "Public/TetherSegmentSimulationParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_SimulationOptions = { "SimulationOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSegmentSimulationParams, SimulationOptions), Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_SimulationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_SimulationOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_bShouldSimulateSegment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::NewProp_SimulationOptions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSegmentSimulationParams",
		sizeof(FTetherSegmentSimulationParams),
		alignof(FTetherSegmentSimulationParams),
		Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TetherSegmentSimulationParams"), sizeof(FTetherSegmentSimulationParams), Get_Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTetherSegmentSimulationParams_Hash() { return 1343731379U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
