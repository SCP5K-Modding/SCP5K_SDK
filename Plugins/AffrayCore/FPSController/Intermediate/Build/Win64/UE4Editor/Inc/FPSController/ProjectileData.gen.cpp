// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/ProjectileData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileData() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
class UScriptStruct* FProjectileData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FProjectileData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileData, Z_Construct_UPackage__Script_FPSController(), TEXT("ProjectileData"), sizeof(FProjectileData), Get_Z_Construct_UScriptStruct_FProjectileData_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FProjectileData>()
{
	return FProjectileData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProjectileData(FProjectileData::StaticStruct, TEXT("/Script/FPSController"), TEXT("ProjectileData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFProjectileData
{
	FScriptStruct_FPSController_StaticRegisterNativesFProjectileData()
	{
		UScriptStruct::DeferCppStructOps<FProjectileData>(FName(TEXT("ProjectileData")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFProjectileData;
	struct Z_Construct_UScriptStruct_FProjectileData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Piercing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Piercing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProjectileData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Mass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Public/ProjectileData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileData, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Piercing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Public/ProjectileData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Piercing = { "Piercing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileData, Piercing), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Piercing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Piercing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Spread_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Public/ProjectileData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileData, Spread), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Velocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Public/ProjectileData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileData, Velocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Velocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Piercing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Velocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"ProjectileData",
		sizeof(FProjectileData),
		alignof(FProjectileData),
		Z_Construct_UScriptStruct_FProjectileData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProjectileData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProjectileData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProjectileData"), sizeof(FProjectileData), Get_Z_Construct_UScriptStruct_FProjectileData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProjectileData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProjectileData_Hash() { return 3238903210U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
