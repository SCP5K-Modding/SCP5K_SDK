// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/CustomMeshProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMeshProperties() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCustomMeshProperties();
	UPackage* Z_Construct_UPackage__Script_Tether();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FCustomMeshProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TETHER_API uint32 Get_Z_Construct_UScriptStruct_FCustomMeshProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomMeshProperties, Z_Construct_UPackage__Script_Tether(), TEXT("CustomMeshProperties"), sizeof(FCustomMeshProperties), Get_Z_Construct_UScriptStruct_FCustomMeshProperties_Hash());
	}
	return Singleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FCustomMeshProperties>()
{
	return FCustomMeshProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomMeshProperties(FCustomMeshProperties::StaticStruct, TEXT("/Script/Tether"), TEXT("CustomMeshProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Tether_StaticRegisterNativesFCustomMeshProperties
{
	FScriptStruct_Tether_StaticRegisterNativesFCustomMeshProperties()
	{
		UScriptStruct::DeferCppStructOps<FCustomMeshProperties>(FName(TEXT("CustomMeshProperties")));
	}
} ScriptStruct_Tether_StaticRegisterNativesFCustomMeshProperties;
	struct Z_Construct_UScriptStruct_FCustomMeshProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMeshReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SourceMeshReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFitToCableWidth_MetaData[];
#endif
		static void NewProp_bFitToCableWidth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFitToCableWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomMeshProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomMeshProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_SourceMeshReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomMeshProperties" },
		{ "ModuleRelativePath", "Public/CustomMeshProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_SourceMeshReference = { "SourceMeshReference", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMeshProperties, SourceMeshReference), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_SourceMeshReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_SourceMeshReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomMeshProperties" },
		{ "ModuleRelativePath", "Public/CustomMeshProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMeshProperties, OffsetRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_OffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_OffsetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_NumInstances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomMeshProperties" },
		{ "ModuleRelativePath", "Public/CustomMeshProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMeshProperties, NumInstances), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_NumInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_NumInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomMeshProperties" },
		{ "ModuleRelativePath", "Public/CustomMeshProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth_SetBit(void* Obj)
	{
		((FCustomMeshProperties*)Obj)->bFitToCableWidth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth = { "bFitToCableWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomMeshProperties), &Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_SourceMeshReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_OffsetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_NumInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::NewProp_bFitToCableWidth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"CustomMeshProperties",
		sizeof(FCustomMeshProperties),
		alignof(FCustomMeshProperties),
		Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomMeshProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomMeshProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomMeshProperties"), sizeof(FCustomMeshProperties), Get_Z_Construct_UScriptStruct_FCustomMeshProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomMeshProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomMeshProperties_Hash() { return 2978217759U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
