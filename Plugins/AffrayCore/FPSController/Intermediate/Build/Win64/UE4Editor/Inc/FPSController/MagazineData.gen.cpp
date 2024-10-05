// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/MagazineData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagazineData() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FMagazineData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
// End Cross Module References
class UScriptStruct* FMagazineData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FMagazineData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagazineData, Z_Construct_UPackage__Script_FPSController(), TEXT("MagazineData"), sizeof(FMagazineData), Get_Z_Construct_UScriptStruct_FMagazineData_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FMagazineData>()
{
	return FMagazineData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagazineData(FMagazineData::StaticStruct, TEXT("/Script/FPSController"), TEXT("MagazineData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFMagazineData
{
	FScriptStruct_FPSController_StaticRegisterNativesFMagazineData()
	{
		UScriptStruct::DeferCppStructOps<FMagazineData>(FName(TEXT("MagazineData")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFMagazineData;
	struct Z_Construct_UScriptStruct_FMagazineData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Magazines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magazines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Magazines;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagazineData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MagazineData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagazineData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagazineData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagazineData_Statics::NewProp_AssetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MagazineData" },
		{ "ModuleRelativePath", "Public/MagazineData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagazineData_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagazineData, AssetID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagazineData_Statics::NewProp_AssetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagazineData_Statics::NewProp_AssetID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMagazineData_Statics::NewProp_Magazines_Inner = { "Magazines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagazineData_Statics::NewProp_Magazines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MagazineData" },
		{ "ModuleRelativePath", "Public/MagazineData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagazineData_Statics::NewProp_Magazines = { "Magazines", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagazineData, Magazines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagazineData_Statics::NewProp_Magazines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagazineData_Statics::NewProp_Magazines_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagazineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagazineData_Statics::NewProp_AssetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagazineData_Statics::NewProp_Magazines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagazineData_Statics::NewProp_Magazines,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagazineData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"MagazineData",
		sizeof(FMagazineData),
		alignof(FMagazineData),
		Z_Construct_UScriptStruct_FMagazineData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagazineData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagazineData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagazineData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagazineData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagazineData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagazineData"), sizeof(FMagazineData), Get_Z_Construct_UScriptStruct_FMagazineData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagazineData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagazineData_Hash() { return 4061691554U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
