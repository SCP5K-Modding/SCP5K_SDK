// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/SplineSegmentInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineSegmentInfo() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FSplineSegmentInfo();
	UPackage* Z_Construct_UPackage__Script_Tether();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSplineSegmentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FSplineSegmentInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineSegmentInfo, Z_Construct_UPackage__Script_Tether(), TEXT("SplineSegmentInfo"), sizeof(FSplineSegmentInfo), Get_Z_Construct_UScriptStruct_FSplineSegmentInfo_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FSplineSegmentInfo>()
{
	return FSplineSegmentInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplineSegmentInfo(FSplineSegmentInfo::StaticStruct, TEXT("/Script/Tether"), TEXT("SplineSegmentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFSplineSegmentInfo
{
	FScriptStruct_Tether_StaticRegisterNativesFSplineSegmentInfo()
	{
		UScriptStruct::DeferCppStructOps<FSplineSegmentInfo>(FName(TEXT("SplineSegmentInfo")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFSplineSegmentInfo;
	struct Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLeaveTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLeaveTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndArriveTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndArriveTangent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SplineSegmentInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineSegmentInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplineSegmentInfo" },
		{ "ModuleRelativePath", "Public/SplineSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineSegmentInfo, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLeaveTangent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplineSegmentInfo" },
		{ "ModuleRelativePath", "Public/SplineSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLeaveTangent = { "StartLeaveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineSegmentInfo, StartLeaveTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLeaveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLeaveTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplineSegmentInfo" },
		{ "ModuleRelativePath", "Public/SplineSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineSegmentInfo, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndArriveTangent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplineSegmentInfo" },
		{ "ModuleRelativePath", "Public/SplineSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndArriveTangent = { "EndArriveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineSegmentInfo, EndArriveTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndArriveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndArriveTangent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLeaveTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndArriveTangent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"SplineSegmentInfo",
		sizeof(FSplineSegmentInfo),
		alignof(FSplineSegmentInfo),
		Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineSegmentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplineSegmentInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplineSegmentInfo"), sizeof(FSplineSegmentInfo), Get_Z_Construct_UScriptStruct_FSplineSegmentInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplineSegmentInfo_Hash() { return 4195528978U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
