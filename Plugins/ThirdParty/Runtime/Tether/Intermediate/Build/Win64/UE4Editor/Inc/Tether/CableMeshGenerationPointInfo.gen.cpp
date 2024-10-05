// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/CableMeshGenerationPointInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCableMeshGenerationPointInfo() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo();
	UPackage* Z_Construct_UPackage__Script_Tether();
// End Cross Module References
class UScriptStruct* FCableMeshGenerationPointInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo, Z_Construct_UPackage__Script_Tether(), TEXT("CableMeshGenerationPointInfo"), sizeof(FCableMeshGenerationPointInfo), Get_Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FCableMeshGenerationPointInfo>()
{
	return FCableMeshGenerationPointInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCableMeshGenerationPointInfo(FCableMeshGenerationPointInfo::StaticStruct, TEXT("/Script/Tether"), TEXT("CableMeshGenerationPointInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFCableMeshGenerationPointInfo
{
	FScriptStruct_Tether_StaticRegisterNativesFCableMeshGenerationPointInfo()
	{
		UScriptStruct::DeferCppStructOps<FCableMeshGenerationPointInfo>(FName(TEXT("CableMeshGenerationPointInfo")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFCableMeshGenerationPointInfo;
	struct Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToNearestContactPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToNearestContactPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Looseness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Looseness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToSegmentLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToSegmentLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlackRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlackRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SegmentLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentLineDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SegmentLineDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CableMeshGenerationPointInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCableMeshGenerationPointInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToNearestContactPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CableMeshGenerationPointInfo" },
		{ "ModuleRelativePath", "Public/CableMeshGenerationPointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToNearestContactPoint = { "DistanceToNearestContactPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPointInfo, DistanceToNearestContactPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToNearestContactPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToNearestContactPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_Looseness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CableMeshGenerationPointInfo" },
		{ "ModuleRelativePath", "Public/CableMeshGenerationPointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_Looseness = { "Looseness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPointInfo, Looseness), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_Looseness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_Looseness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToSegmentLine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CableMeshGenerationPointInfo" },
		{ "ModuleRelativePath", "Public/CableMeshGenerationPointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToSegmentLine = { "DistanceToSegmentLine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPointInfo, DistanceToSegmentLine), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToSegmentLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToSegmentLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SlackRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CableMeshGenerationPointInfo" },
		{ "ModuleRelativePath", "Public/CableMeshGenerationPointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SlackRatio = { "SlackRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPointInfo, SlackRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SlackRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SlackRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CableMeshGenerationPointInfo" },
		{ "ModuleRelativePath", "Public/CableMeshGenerationPointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLength = { "SegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPointInfo, SegmentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLineDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CableMeshGenerationPointInfo" },
		{ "ModuleRelativePath", "Public/CableMeshGenerationPointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLineDistance = { "SegmentLineDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPointInfo, SegmentLineDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLineDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLineDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToNearestContactPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_Looseness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToSegmentLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SlackRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLineDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"CableMeshGenerationPointInfo",
		sizeof(FCableMeshGenerationPointInfo),
		alignof(FCableMeshGenerationPointInfo),
		Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CableMeshGenerationPointInfo"), sizeof(FCableMeshGenerationPointInfo), Get_Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Hash() { return 788447087U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
