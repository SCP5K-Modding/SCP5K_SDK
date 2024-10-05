// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/BasicMeshProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicMeshProperties() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshProperties();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshGenerationOptions();
// End Cross Module References
class UScriptStruct* FBasicMeshProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FBasicMeshProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasicMeshProperties, Z_Construct_UPackage__Script_Tether(), TEXT("BasicMeshProperties"), sizeof(FBasicMeshProperties), Get_Z_Construct_UScriptStruct_FBasicMeshProperties_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FBasicMeshProperties>()
{
	return FBasicMeshProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBasicMeshProperties(FBasicMeshProperties::StaticStruct, TEXT("/Script/Tether"), TEXT("BasicMeshProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFBasicMeshProperties
{
	FScriptStruct_Tether_StaticRegisterNativesFBasicMeshProperties()
	{
		UScriptStruct::DeferCppStructOps<FBasicMeshProperties>(FName(TEXT("BasicMeshProperties")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFBasicMeshProperties;
	struct Z_Construct_UScriptStruct_FBasicMeshProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveSimplificationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveSimplificationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshGenerationOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshGenerationOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BasicMeshProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasicMeshProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_LoopResolution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BasicMeshProperties" },
		{ "ModuleRelativePath", "Public/BasicMeshProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_LoopResolution = { "LoopResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicMeshProperties, LoopResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_LoopResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_LoopResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_CurveSimplificationMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BasicMeshProperties" },
		{ "ModuleRelativePath", "Public/BasicMeshProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_CurveSimplificationMultiplier = { "CurveSimplificationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicMeshProperties, CurveSimplificationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_CurveSimplificationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_CurveSimplificationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_MeshGenerationOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BasicMeshProperties" },
		{ "ModuleRelativePath", "Public/BasicMeshProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_MeshGenerationOptions = { "MeshGenerationOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicMeshProperties, MeshGenerationOptions), Z_Construct_UScriptStruct_FBasicMeshGenerationOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_MeshGenerationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_MeshGenerationOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_LoopResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_CurveSimplificationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_MeshGenerationOptions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"BasicMeshProperties",
		sizeof(FBasicMeshProperties),
		alignof(FBasicMeshProperties),
		Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBasicMeshProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BasicMeshProperties"), sizeof(FBasicMeshProperties), Get_Z_Construct_UScriptStruct_FBasicMeshProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBasicMeshProperties_Hash() { return 2799574616U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
