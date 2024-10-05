// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherSimulationInstanceResources.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSimulationInstanceResources() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationInstanceResources();
	UPackage* Z_Construct_UPackage__Script_Tether();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
// End Cross Module References
class UScriptStruct* FTetherSimulationInstanceResources::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSimulationInstanceResources"), sizeof(FTetherSimulationInstanceResources), Get_Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSimulationInstanceResources>()
{
	return FTetherSimulationInstanceResources::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTetherSimulationInstanceResources(FTetherSimulationInstanceResources::StaticStruct, TEXT("/Script/Tether"), TEXT("TetherSimulationInstanceResources"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFTetherSimulationInstanceResources
{
	FScriptStruct_Tether_StaticRegisterNativesFTetherSimulationInstanceResources()
	{
		UScriptStruct::DeferCppStructOps<FTetherSimulationInstanceResources>(FName(TEXT("TetherSimulationInstanceResources")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFTetherSimulationInstanceResources;
	struct Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TetherSimulationInstanceResources.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSimulationInstanceResources>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationInstanceResources" },
		{ "ModuleRelativePath", "Public/TetherSimulationInstanceResources.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FTetherSimulationInstanceResources*)Obj)->bIsInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherSimulationInstanceResources), &Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_World_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationInstanceResources" },
		{ "ModuleRelativePath", "Public/TetherSimulationInstanceResources.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationInstanceResources, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_BodySetup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherSimulationInstanceResources" },
		{ "ModuleRelativePath", "Public/TetherSimulationInstanceResources.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationInstanceResources, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_BodySetup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_bIsInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::NewProp_BodySetup,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSimulationInstanceResources",
		sizeof(FTetherSimulationInstanceResources),
		alignof(FTetherSimulationInstanceResources),
		Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationInstanceResources()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TetherSimulationInstanceResources"), sizeof(FTetherSimulationInstanceResources), Get_Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTetherSimulationInstanceResources_Hash() { return 2538491781U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
