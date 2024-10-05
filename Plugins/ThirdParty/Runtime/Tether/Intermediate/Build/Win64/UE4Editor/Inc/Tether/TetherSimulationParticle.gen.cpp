// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherSimulationParticle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSimulationParticle() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationParticle();
	UPackage* Z_Construct_UPackage__Script_Tether();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FTetherSimulationParticle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationParticle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSimulationParticle, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSimulationParticle"), sizeof(FTetherSimulationParticle), Get_Z_Construct_UScriptStruct_FTetherSimulationParticle_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSimulationParticle>()
{
	return FTetherSimulationParticle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTetherSimulationParticle(FTetherSimulationParticle::StaticStruct, TEXT("/Script/Tether"), TEXT("TetherSimulationParticle"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFTetherSimulationParticle
{
	FScriptStruct_Tether_StaticRegisterNativesFTetherSimulationParticle()
	{
		UScriptStruct::DeferCppStructOps<FTetherSimulationParticle>(FName(TEXT("TetherSimulationParticle")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFTetherSimulationParticle;
	struct Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleUniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ParticleUniqueId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFree_MetaData[];
#endif
		static void NewProp_bFree_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TetherSimulationParticle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSimulationParticle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_ParticleUniqueId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationParticle" },
		{ "ModuleRelativePath", "Public/TetherSimulationParticle.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_ParticleUniqueId = { "ParticleUniqueId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParticle, ParticleUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_ParticleUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_ParticleUniqueId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationParticle" },
		{ "ModuleRelativePath", "Public/TetherSimulationParticle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree_SetBit(void* Obj)
	{
		((FTetherSimulationParticle*)Obj)->bFree = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree = { "bFree", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherSimulationParticle), &Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationParticle" },
		{ "ModuleRelativePath", "Public/TetherSimulationParticle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParticle, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_OldPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationParticle" },
		{ "ModuleRelativePath", "Public/TetherSimulationParticle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_OldPosition = { "OldPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationParticle, OldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_OldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_OldPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_ParticleUniqueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_bFree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::NewProp_OldPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSimulationParticle",
		sizeof(FTetherSimulationParticle),
		alignof(FTetherSimulationParticle),
		Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationParticle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationParticle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TetherSimulationParticle"), sizeof(FTetherSimulationParticle), Get_Z_Construct_UScriptStruct_FTetherSimulationParticle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTetherSimulationParticle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationParticle_Hash() { return 902006017U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
