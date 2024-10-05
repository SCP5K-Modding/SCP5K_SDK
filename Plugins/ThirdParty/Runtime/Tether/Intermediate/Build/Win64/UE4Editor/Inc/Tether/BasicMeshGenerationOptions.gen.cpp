// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/BasicMeshGenerationOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicMeshGenerationOptions() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshGenerationOptions();
	UPackage* Z_Construct_UPackage__Script_Tether();
// End Cross Module References
class UScriptStruct* FBasicMeshGenerationOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions, Z_Construct_UPackage__Script_Tether(), TEXT("BasicMeshGenerationOptions"), sizeof(FBasicMeshGenerationOptions), Get_Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FBasicMeshGenerationOptions>()
{
	return FBasicMeshGenerationOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBasicMeshGenerationOptions(FBasicMeshGenerationOptions::StaticStruct, TEXT("/Script/Tether"), TEXT("BasicMeshGenerationOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFBasicMeshGenerationOptions
{
	FScriptStruct_Tether_StaticRegisterNativesFBasicMeshGenerationOptions()
	{
		UScriptStruct::DeferCppStructOps<FBasicMeshGenerationOptions>(FName(TEXT("BasicMeshGenerationOptions")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFBasicMeshGenerationOptions;
	struct Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideCableWidth_MetaData[];
#endif
		static void NewProp_bOverrideCableWidth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCableWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableMeshWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CableMeshWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoTile_MetaData[];
#endif
		static void NewProp_bAutoTile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToNearestFullTile_MetaData[];
#endif
		static void NewProp_bSnapToNearestFullTile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToNearestFullTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileUVs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileUVs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BasicMeshGenerationOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasicMeshGenerationOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_NumSides_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BasicMeshGenerationOptions" },
		{ "ModuleRelativePath", "Public/BasicMeshGenerationOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicMeshGenerationOptions, NumSides), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_NumSides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_NumSides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BasicMeshGenerationOptions" },
		{ "ModuleRelativePath", "Public/BasicMeshGenerationOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth_SetBit(void* Obj)
	{
		((FBasicMeshGenerationOptions*)Obj)->bOverrideCableWidth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth = { "bOverrideCableWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBasicMeshGenerationOptions), &Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_CableMeshWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BasicMeshGenerationOptions" },
		{ "ModuleRelativePath", "Public/BasicMeshGenerationOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_CableMeshWidth = { "CableMeshWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicMeshGenerationOptions, CableMeshWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_CableMeshWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_CableMeshWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BasicMeshGenerationOptions" },
		{ "ModuleRelativePath", "Public/BasicMeshGenerationOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile_SetBit(void* Obj)
	{
		((FBasicMeshGenerationOptions*)Obj)->bAutoTile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile = { "bAutoTile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBasicMeshGenerationOptions), &Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BasicMeshGenerationOptions" },
		{ "ModuleRelativePath", "Public/BasicMeshGenerationOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile_SetBit(void* Obj)
	{
		((FBasicMeshGenerationOptions*)Obj)->bSnapToNearestFullTile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile = { "bSnapToNearestFullTile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBasicMeshGenerationOptions), &Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_TileUVs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BasicMeshGenerationOptions" },
		{ "ModuleRelativePath", "Public/BasicMeshGenerationOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_TileUVs = { "TileUVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicMeshGenerationOptions, TileUVs), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_TileUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_TileUVs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_NumSides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_CableMeshWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_TileUVs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"BasicMeshGenerationOptions",
		sizeof(FBasicMeshGenerationOptions),
		alignof(FBasicMeshGenerationOptions),
		Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshGenerationOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BasicMeshGenerationOptions"), sizeof(FBasicMeshGenerationOptions), Get_Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Hash() { return 34132807U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
