// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/CableMeshGenerationCurveDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCableMeshGenerationCurveDescription() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FCableMeshGenerationCurveDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription, Z_Construct_UPackage__Script_Tether(), TEXT("CableMeshGenerationCurveDescription"), sizeof(FCableMeshGenerationCurveDescription), Get_Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FCableMeshGenerationCurveDescription>()
{
	return FCableMeshGenerationCurveDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCableMeshGenerationCurveDescription(FCableMeshGenerationCurveDescription::StaticStruct, TEXT("/Script/Tether"), TEXT("CableMeshGenerationCurveDescription"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFCableMeshGenerationCurveDescription
{
	FScriptStruct_Tether_StaticRegisterNativesFCableMeshGenerationCurveDescription()
	{
		UScriptStruct::DeferCppStructOps<FCableMeshGenerationCurveDescription>(FName(TEXT("CableMeshGenerationCurveDescription")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFCableMeshGenerationCurveDescription;
	struct Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTangent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CableMeshGenerationCurveDescription.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCableMeshGenerationCurveDescription>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCableMeshGenerationPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CableMeshGenerationCurveDescription" },
		{ "ModuleRelativePath", "Public/CableMeshGenerationCurveDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationCurveDescription, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_StartTangent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CableMeshGenerationCurveDescription" },
		{ "ModuleRelativePath", "Public/CableMeshGenerationCurveDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_StartTangent = { "StartTangent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationCurveDescription, StartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_StartTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_StartTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_EndTangent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CableMeshGenerationCurveDescription" },
		{ "ModuleRelativePath", "Public/CableMeshGenerationCurveDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_EndTangent = { "EndTangent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationCurveDescription, EndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_EndTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_EndTangent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_StartTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_EndTangent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"CableMeshGenerationCurveDescription",
		sizeof(FCableMeshGenerationCurveDescription),
		alignof(FCableMeshGenerationCurveDescription),
		Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CableMeshGenerationCurveDescription"), sizeof(FCableMeshGenerationCurveDescription), Get_Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Hash() { return 676558365U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
