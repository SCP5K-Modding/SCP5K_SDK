// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/BallisticProjectileData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallisticProjectileData() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FBallisticProjectileData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FBallisticHitData();
// End Cross Module References
class UScriptStruct* FBallisticProjectileData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FBallisticProjectileData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBallisticProjectileData, Z_Construct_UPackage__Script_FPSController(), TEXT("BallisticProjectileData"), sizeof(FBallisticProjectileData), Get_Z_Construct_UScriptStruct_FBallisticProjectileData_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FBallisticProjectileData>()
{
	return FBallisticProjectileData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBallisticProjectileData(FBallisticProjectileData::StaticStruct, TEXT("/Script/FPSController"), TEXT("BallisticProjectileData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFBallisticProjectileData
{
	FScriptStruct_FPSController_StaticRegisterNativesFBallisticProjectileData()
	{
		UScriptStruct::DeferCppStructOps<FBallisticProjectileData>(FName(TEXT("BallisticProjectileData")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFBallisticProjectileData;
	struct Z_Construct_UScriptStruct_FBallisticProjectileData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BallisticProjectileData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBallisticProjectileData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBallisticHitData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::NewProp_Hits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticProjectileData" },
		{ "ModuleRelativePath", "Public/BallisticProjectileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBallisticProjectileData, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::NewProp_Hits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::NewProp_Hits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::NewProp_Hits,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"BallisticProjectileData",
		sizeof(FBallisticProjectileData),
		alignof(FBallisticProjectileData),
		Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBallisticProjectileData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBallisticProjectileData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BallisticProjectileData"), sizeof(FBallisticProjectileData), Get_Z_Construct_UScriptStruct_FBallisticProjectileData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBallisticProjectileData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBallisticProjectileData_Hash() { return 549936802U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
