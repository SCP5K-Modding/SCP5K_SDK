// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAICoverGenerationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAICoverGenerationSettings() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAICoverGenerationSettings();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
class UScriptStruct* FSAICoverGenerationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAICoverGenerationSettings, Z_Construct_UPackage__Script_AISentience(), TEXT("SAICoverGenerationSettings"), sizeof(FSAICoverGenerationSettings), Get_Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FSAICoverGenerationSettings>()
{
	return FSAICoverGenerationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSAICoverGenerationSettings(FSAICoverGenerationSettings::StaticStruct, TEXT("/Script/AISentience"), TEXT("SAICoverGenerationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFSAICoverGenerationSettings
{
	FScriptStruct_AISentience_StaticRegisterNativesFSAICoverGenerationSettings()
	{
		UScriptStruct::DeferCppStructOps<FSAICoverGenerationSettings>(FName(TEXT("SAICoverGenerationSettings")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFSAICoverGenerationSettings;
	struct Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScanGridUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScanGridUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverPointMinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoverPointMinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoldierCrouchHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoldierCrouchHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoldierFireHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoldierFireHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoldierLeanFireHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoldierLeanFireHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalLeanOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalLeanOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineOfSightTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineOfSightTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverPointGroundOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoverPointGroundOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScanReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScanReach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CliffEdgeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CliffEdgeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StraightCliffErrorTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StraightCliffErrorTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavmeshHoleCheckReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavmeshHoleCheckReach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshMaxZDistanceFromGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavMeshMaxZDistanceFromGround;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAICoverGenerationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_ScanGridUnit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_ScanGridUnit = { "ScanGridUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, ScanGridUnit), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_ScanGridUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_ScanGridUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CoverPointMinDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CoverPointMinDistance = { "CoverPointMinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, CoverPointMinDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CoverPointMinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CoverPointMinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierCrouchHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierCrouchHeight = { "SoldierCrouchHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, SoldierCrouchHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierCrouchHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierCrouchHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierFireHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierFireHeight = { "SoldierFireHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, SoldierFireHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierFireHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierFireHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierLeanFireHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierLeanFireHeight = { "SoldierLeanFireHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, SoldierLeanFireHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierLeanFireHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierLeanFireHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_HorizontalLeanOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_HorizontalLeanOffset = { "HorizontalLeanOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, HorizontalLeanOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_HorizontalLeanOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_HorizontalLeanOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_LineOfSightTraceDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_LineOfSightTraceDistance = { "LineOfSightTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, LineOfSightTraceDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_LineOfSightTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_LineOfSightTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CoverPointGroundOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CoverPointGroundOffset = { "CoverPointGroundOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, CoverPointGroundOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CoverPointGroundOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CoverPointGroundOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_ScanReach_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_ScanReach = { "ScanReach", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, ScanReach), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_ScanReach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_ScanReach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CliffEdgeDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CliffEdgeDistance = { "CliffEdgeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, CliffEdgeDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CliffEdgeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CliffEdgeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_StraightCliffErrorTolerance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_StraightCliffErrorTolerance = { "StraightCliffErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, StraightCliffErrorTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_StraightCliffErrorTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_StraightCliffErrorTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_NavmeshHoleCheckReach_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_NavmeshHoleCheckReach = { "NavmeshHoleCheckReach", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, NavmeshHoleCheckReach), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_NavmeshHoleCheckReach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_NavmeshHoleCheckReach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_NavMeshMaxZDistanceFromGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverGenerationSettings" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_NavMeshMaxZDistanceFromGround = { "NavMeshMaxZDistanceFromGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAICoverGenerationSettings, NavMeshMaxZDistanceFromGround), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_NavMeshMaxZDistanceFromGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_NavMeshMaxZDistanceFromGround_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_ScanGridUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CoverPointMinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierCrouchHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierFireHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_SoldierLeanFireHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_HorizontalLeanOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_LineOfSightTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CoverPointGroundOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_ScanReach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_CliffEdgeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_StraightCliffErrorTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_NavmeshHoleCheckReach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::NewProp_NavMeshMaxZDistanceFromGround,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"SAICoverGenerationSettings",
		sizeof(FSAICoverGenerationSettings),
		alignof(FSAICoverGenerationSettings),
		Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSAICoverGenerationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SAICoverGenerationSettings"), sizeof(FSAICoverGenerationSettings), Get_Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSAICoverGenerationSettings_Hash() { return 405282663U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
