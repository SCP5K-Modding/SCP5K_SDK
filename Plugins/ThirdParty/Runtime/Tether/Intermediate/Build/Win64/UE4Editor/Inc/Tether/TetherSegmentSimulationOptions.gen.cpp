// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherSegmentSimulationOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSegmentSimulationOptions() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions();
	UPackage* Z_Construct_UPackage__Script_Tether();
// End Cross Module References
class UScriptStruct* FTetherSegmentSimulationOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSegmentSimulationOptions"), sizeof(FTetherSegmentSimulationOptions), Get_Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSegmentSimulationOptions>()
{
	return FTetherSegmentSimulationOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTetherSegmentSimulationOptions(FTetherSegmentSimulationOptions::StaticStruct, TEXT("/Script/Tether"), TEXT("TetherSegmentSimulationOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFTetherSegmentSimulationOptions
{
	FScriptStruct_Tether_StaticRegisterNativesFTetherSegmentSimulationOptions()
	{
		UScriptStruct::DeferCppStructOps<FTetherSegmentSimulationOptions>(FName(TEXT("TetherSegmentSimulationOptions")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFTetherSegmentSimulationOptions;
	struct Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixedAnchorPoint_MetaData[];
#endif
		static void NewProp_bFixedAnchorPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixedAnchorPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSplineTangents_MetaData[];
#endif
		static void NewProp_bUseSplineTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSplineTangents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TetherSegmentSimulationOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSegmentSimulationOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSegmentSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherSegmentSimulationOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint_SetBit(void* Obj)
	{
		((FTetherSegmentSimulationOptions*)Obj)->bFixedAnchorPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint = { "bFixedAnchorPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherSegmentSimulationOptions), &Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSegmentSimulationOptions" },
		{ "ModuleRelativePath", "Public/TetherSegmentSimulationOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents_SetBit(void* Obj)
	{
		((FTetherSegmentSimulationOptions*)Obj)->bUseSplineTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents = { "bUseSplineTangents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherSegmentSimulationOptions), &Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSegmentSimulationOptions",
		sizeof(FTetherSegmentSimulationOptions),
		alignof(FTetherSegmentSimulationOptions),
		Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TetherSegmentSimulationOptions"), sizeof(FTetherSegmentSimulationOptions), Get_Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Hash() { return 4078936755U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
