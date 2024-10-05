// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/WallPieceOverride.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallPieceOverride() {}
// Cross Module References
	MODULARASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FWallPieceOverride();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FWallPieceOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODULARASSETS_API uint32 Get_Z_Construct_UScriptStruct_FWallPieceOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWallPieceOverride, Z_Construct_UPackage__Script_ModularAssets(), TEXT("WallPieceOverride"), sizeof(FWallPieceOverride), Get_Z_Construct_UScriptStruct_FWallPieceOverride_Hash());
	}
	return Singleton;
}
template<> MODULARASSETS_API UScriptStruct* StaticStruct<FWallPieceOverride>()
{
	return FWallPieceOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWallPieceOverride(FWallPieceOverride::StaticStruct, TEXT("/Script/ModularAssets"), TEXT("WallPieceOverride"), false, nullptr, nullptr);
static struct FScriptStruct_ModularAssets_StaticRegisterNativesFWallPieceOverride
{
	FScriptStruct_ModularAssets_StaticRegisterNativesFWallPieceOverride()
	{
		UScriptStruct::DeferCppStructOps<FWallPieceOverride>(FName(TEXT("WallPieceOverride")));
	}
} ScriptStruct_ModularAssets_StaticRegisterNativesFWallPieceOverride;
	struct Z_Construct_UScriptStruct_FWallPieceOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallPieceOverride_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WallPieceOverride.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWallPieceOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWallPieceOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallPieceOverride_Statics::NewProp_OverrideMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallPieceOverride" },
		{ "ModuleRelativePath", "Public/WallPieceOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWallPieceOverride_Statics::NewProp_OverrideMesh = { "OverrideMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallPieceOverride, OverrideMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallPieceOverride_Statics::NewProp_OverrideMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallPieceOverride_Statics::NewProp_OverrideMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallPieceOverride_Statics::NewProp_OverrideLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallPieceOverride" },
		{ "ModuleRelativePath", "Public/WallPieceOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWallPieceOverride_Statics::NewProp_OverrideLength = { "OverrideLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallPieceOverride, OverrideLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FWallPieceOverride_Statics::NewProp_OverrideLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallPieceOverride_Statics::NewProp_OverrideLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWallPieceOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallPieceOverride_Statics::NewProp_OverrideMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallPieceOverride_Statics::NewProp_OverrideLength,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWallPieceOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
		nullptr,
		&NewStructOps,
		"WallPieceOverride",
		sizeof(FWallPieceOverride),
		alignof(FWallPieceOverride),
		Z_Construct_UScriptStruct_FWallPieceOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallPieceOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWallPieceOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallPieceOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWallPieceOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWallPieceOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ModularAssets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WallPieceOverride"), sizeof(FWallPieceOverride), Get_Z_Construct_UScriptStruct_FWallPieceOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWallPieceOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWallPieceOverride_Hash() { return 1898412842U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
