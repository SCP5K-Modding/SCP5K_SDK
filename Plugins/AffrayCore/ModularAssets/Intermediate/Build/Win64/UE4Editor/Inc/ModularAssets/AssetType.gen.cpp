// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/AssetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetType() {}
// Cross Module References
	MODULARASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FAssetType();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	MODULARASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FSecondaryAssetSize();
// End Cross Module References
class UScriptStruct* FAssetType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODULARASSETS_API uint32 Get_Z_Construct_UScriptStruct_FAssetType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetType, Z_Construct_UPackage__Script_ModularAssets(), TEXT("AssetType"), sizeof(FAssetType), Get_Z_Construct_UScriptStruct_FAssetType_Hash());
	}
	return Singleton;
}
template<> MODULARASSETS_API UScriptStruct* StaticStruct<FAssetType>()
{
	return FAssetType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetType(FAssetType::StaticStruct, TEXT("/Script/ModularAssets"), TEXT("AssetType"), false, nullptr, nullptr);
static struct FScriptStruct_ModularAssets_StaticRegisterNativesFAssetType
{
	FScriptStruct_ModularAssets_StaticRegisterNativesFAssetType()
	{
		UScriptStruct::DeferCppStructOps<FAssetType>(FName(TEXT("AssetType")));
	}
} ScriptStruct_ModularAssets_StaticRegisterNativesFAssetType;
	struct Z_Construct_UScriptStruct_FAssetType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryLengths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryLengths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryLengths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AssetType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetType>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetType_Statics::NewProp_PrimaryLengths_Inner = { "PrimaryLengths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSecondaryAssetSize, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetType_Statics::NewProp_PrimaryLengths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AssetType" },
		{ "ModuleRelativePath", "Public/AssetType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetType_Statics::NewProp_PrimaryLengths = { "PrimaryLengths", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetType, PrimaryLengths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetType_Statics::NewProp_PrimaryLengths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetType_Statics::NewProp_PrimaryLengths_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetType_Statics::NewProp_PrimaryLengths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetType_Statics::NewProp_PrimaryLengths,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
		nullptr,
		&NewStructOps,
		"AssetType",
		sizeof(FAssetType),
		alignof(FAssetType),
		Z_Construct_UScriptStruct_FAssetType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ModularAssets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetType"), sizeof(FAssetType), Get_Z_Construct_UScriptStruct_FAssetType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetType_Hash() { return 3485569405U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
