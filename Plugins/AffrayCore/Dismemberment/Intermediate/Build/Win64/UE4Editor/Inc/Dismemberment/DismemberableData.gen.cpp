// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/DismemberableData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDismemberableData() {}
// Cross Module References
	DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FDismemberableData();
	UPackage* Z_Construct_UPackage__Script_Dismemberment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FDismemberableData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISMEMBERMENT_API uint32 Get_Z_Construct_UScriptStruct_FDismemberableData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDismemberableData, Z_Construct_UPackage__Script_Dismemberment(), TEXT("DismemberableData"), sizeof(FDismemberableData), Get_Z_Construct_UScriptStruct_FDismemberableData_Hash());
	}
	return Singleton;
}
template<> DISMEMBERMENT_API UScriptStruct* StaticStruct<FDismemberableData>()
{
	return FDismemberableData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDismemberableData(FDismemberableData::StaticStruct, TEXT("/Script/Dismemberment"), TEXT("DismemberableData"), false, nullptr, nullptr);
static struct FScriptStruct_Dismemberment_StaticRegisterNativesFDismemberableData
{
	FScriptStruct_Dismemberment_StaticRegisterNativesFDismemberableData()
	{
		UScriptStruct::DeferCppStructOps<FDismemberableData>(FName(TEXT("DismemberableData")));
	}
} ScriptStruct_Dismemberment_StaticRegisterNativesFDismemberableData;
	struct Z_Construct_UScriptStruct_FDismemberableData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonePositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BonePositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StumpPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StumpPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseParentRotation_MetaData[];
#endif
		static void NewProp_bUseParentRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseParentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StumpScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StumpScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideStump_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideStump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismemberableData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DismemberableData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDismemberableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDismemberableData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_BoneRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismemberableData" },
		{ "ModuleRelativePath", "Public/DismemberableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_BoneRotationOffset = { "BoneRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDismemberableData, BoneRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_BoneRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_BoneRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_BonePositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismemberableData" },
		{ "ModuleRelativePath", "Public/DismemberableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_BonePositionOffset = { "BonePositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDismemberableData, BonePositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_BonePositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_BonePositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_StumpPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismemberableData" },
		{ "ModuleRelativePath", "Public/DismemberableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_StumpPositionOffset = { "StumpPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDismemberableData, StumpPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_StumpPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_StumpPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_bUseParentRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismemberableData" },
		{ "ModuleRelativePath", "Public/DismemberableData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_bUseParentRotation_SetBit(void* Obj)
	{
		((FDismemberableData*)Obj)->bUseParentRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_bUseParentRotation = { "bUseParentRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDismemberableData), &Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_bUseParentRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_bUseParentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_bUseParentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_OverrideSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismemberableData" },
		{ "ModuleRelativePath", "Public/DismemberableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_OverrideSound = { "OverrideSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDismemberableData, OverrideSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_OverrideSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_OverrideSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_StumpScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismemberableData" },
		{ "ModuleRelativePath", "Public/DismemberableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_StumpScale = { "StumpScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDismemberableData, StumpScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_StumpScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_StumpScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_OverrideStump_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismemberableData" },
		{ "ModuleRelativePath", "Public/DismemberableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_OverrideStump = { "OverrideStump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDismemberableData, OverrideStump), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_OverrideStump_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_OverrideStump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DismemberableData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismemberableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDismemberableData, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDismemberableData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_BoneRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_BonePositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_StumpPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_bUseParentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_OverrideSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_StumpScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_OverrideStump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableData_Statics::NewProp_Mesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDismemberableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
		nullptr,
		&NewStructOps,
		"DismemberableData",
		sizeof(FDismemberableData),
		alignof(FDismemberableData),
		Z_Construct_UScriptStruct_FDismemberableData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDismemberableData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDismemberableData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDismemberableData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Dismemberment();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DismemberableData"), sizeof(FDismemberableData), Get_Z_Construct_UScriptStruct_FDismemberableData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDismemberableData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDismemberableData_Hash() { return 3322410227U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
