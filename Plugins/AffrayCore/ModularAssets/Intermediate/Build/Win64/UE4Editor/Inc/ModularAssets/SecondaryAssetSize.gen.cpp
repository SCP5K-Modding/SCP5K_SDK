// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/SecondaryAssetSize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondaryAssetSize() {}
// Cross Module References
	MODULARASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FSecondaryAssetSize();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FSecondaryAssetSize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODULARASSETS_API uint32 Get_Z_Construct_UScriptStruct_FSecondaryAssetSize_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSecondaryAssetSize, Z_Construct_UPackage__Script_ModularAssets(), TEXT("SecondaryAssetSize"), sizeof(FSecondaryAssetSize), Get_Z_Construct_UScriptStruct_FSecondaryAssetSize_Hash());
	}
	return Singleton;
}
template<> MODULARASSETS_API UScriptStruct* StaticStruct<FSecondaryAssetSize>()
{
	return FSecondaryAssetSize::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSecondaryAssetSize(FSecondaryAssetSize::StaticStruct, TEXT("/Script/ModularAssets"), TEXT("SecondaryAssetSize"), false, nullptr, nullptr);
static struct FScriptStruct_ModularAssets_StaticRegisterNativesFSecondaryAssetSize
{
	FScriptStruct_ModularAssets_StaticRegisterNativesFSecondaryAssetSize()
	{
		UScriptStruct::DeferCppStructOps<FSecondaryAssetSize>(FName(TEXT("SecondaryAssetSize")));
	}
} ScriptStruct_ModularAssets_StaticRegisterNativesFSecondaryAssetSize;
	struct Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SecondaryAssetSize.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSecondaryAssetSize>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::NewProp_Meshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SecondaryAssetSize" },
		{ "ModuleRelativePath", "Public/SecondaryAssetSize.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecondaryAssetSize, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::NewProp_Meshes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::NewProp_Meshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::NewProp_Meshes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
		nullptr,
		&NewStructOps,
		"SecondaryAssetSize",
		sizeof(FSecondaryAssetSize),
		alignof(FSecondaryAssetSize),
		Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSecondaryAssetSize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSecondaryAssetSize_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ModularAssets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SecondaryAssetSize"), sizeof(FSecondaryAssetSize), Get_Z_Construct_UScriptStruct_FSecondaryAssetSize_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSecondaryAssetSize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSecondaryAssetSize_Hash() { return 2015177768U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
