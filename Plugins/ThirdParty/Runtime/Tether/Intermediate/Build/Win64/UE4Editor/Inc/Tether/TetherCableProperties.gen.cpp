// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherCableProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherCableProperties() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherCableProperties();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherCableSimulationOptions();
	TETHER_API UEnum* Z_Construct_UEnum_Tether_ECableMeshGenerationType();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshProperties();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCustomMeshProperties();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FTetherCableProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FTetherCableProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherCableProperties, Z_Construct_UPackage__Script_Tether(), TEXT("TetherCableProperties"), sizeof(FTetherCableProperties), Get_Z_Construct_UScriptStruct_FTetherCableProperties_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherCableProperties>()
{
	return FTetherCableProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTetherCableProperties(FTetherCableProperties::StaticStruct, TEXT("/Script/Tether"), TEXT("TetherCableProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFTetherCableProperties
{
	FScriptStruct_Tether_StaticRegisterNativesFTetherCableProperties()
	{
		UScriptStruct::DeferCppStructOps<FTetherCableProperties>(FName(TEXT("TetherCableProperties")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFTetherCableProperties;
	struct Z_Construct_UScriptStruct_FTetherCableProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CableWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimulationOptions;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicMeshProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasicMeshProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMeshProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomMeshProperties;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherCableProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CableWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableProperties" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CableWidth = { "CableWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableProperties, CableWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CableWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CableWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_SimulationOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableProperties" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_SimulationOptions = { "SimulationOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableProperties, SimulationOptions), Z_Construct_UScriptStruct_FTetherCableSimulationOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_SimulationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_SimulationOptions_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableProperties" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableProperties, MeshType), Z_Construct_UEnum_Tether_ECableMeshGenerationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_BasicMeshProperties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableProperties" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_BasicMeshProperties = { "BasicMeshProperties", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableProperties, BasicMeshProperties), Z_Construct_UScriptStruct_FBasicMeshProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_BasicMeshProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_BasicMeshProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CustomMeshProperties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableProperties" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CustomMeshProperties = { "CustomMeshProperties", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableProperties, CustomMeshProperties), Z_Construct_UScriptStruct_FCustomMeshProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CustomMeshProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CustomMeshProperties_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherCableProperties" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableProperties, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherCableProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CableWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_SimulationOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_BasicMeshProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CustomMeshProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherCableProperties",
		sizeof(FTetherCableProperties),
		alignof(FTetherCableProperties),
		Z_Construct_UScriptStruct_FTetherCableProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherCableProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTetherCableProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TetherCableProperties"), sizeof(FTetherCableProperties), Get_Z_Construct_UScriptStruct_FTetherCableProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTetherCableProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTetherCableProperties_Hash() { return 134283996U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
