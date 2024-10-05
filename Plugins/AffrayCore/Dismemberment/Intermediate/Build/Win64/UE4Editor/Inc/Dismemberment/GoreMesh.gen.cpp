// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/GoreMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoreMesh() {}
// Cross Module References
	DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FGoreMesh();
	UPackage* Z_Construct_UPackage__Script_Dismemberment();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FGoreMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISMEMBERMENT_API uint32 Get_Z_Construct_UScriptStruct_FGoreMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoreMesh, Z_Construct_UPackage__Script_Dismemberment(), TEXT("GoreMesh"), sizeof(FGoreMesh), Get_Z_Construct_UScriptStruct_FGoreMesh_Hash());
	}
	return Singleton;
}
template<> DISMEMBERMENT_API UScriptStruct* StaticStruct<FGoreMesh>()
{
	return FGoreMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGoreMesh(FGoreMesh::StaticStruct, TEXT("/Script/Dismemberment"), TEXT("GoreMesh"), false, nullptr, nullptr);
static struct FScriptStruct_Dismemberment_StaticRegisterNativesFGoreMesh
{
	FScriptStruct_Dismemberment_StaticRegisterNativesFGoreMesh()
	{
		UScriptStruct::DeferCppStructOps<FGoreMesh>(FName(TEXT("GoreMesh")));
	}
} ScriptStruct_Dismemberment_StaticRegisterNativesFGoreMesh;
	struct Z_Construct_UScriptStruct_FGoreMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssociatedBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideAssociatedBone_MetaData[];
#endif
		static void NewProp_bHideAssociatedBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideAssociatedBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableLowerBones_MetaData[];
#endif
		static void NewProp_bDisableLowerBones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableLowerBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPickRandomGib_MetaData[];
#endif
		static void NewProp_bPickRandomGib_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPickRandomGib;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gib_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Gib;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RandomGibs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomGibs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RandomGibs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GibMaterialOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_GibMaterialOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ellipsoids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ellipsoids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ellipsoids;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDamage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IncompatibleMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncompatibleMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncompatibleMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeGibTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeGibTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Event;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Particle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GibComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GibComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoreMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoreMesh>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_AssociatedBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_AssociatedBone = { "AssociatedBone", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, AssociatedBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_AssociatedBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_AssociatedBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bHideAssociatedBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bHideAssociatedBone_SetBit(void* Obj)
	{
		((FGoreMesh*)Obj)->bHideAssociatedBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bHideAssociatedBone = { "bHideAssociatedBone", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGoreMesh), &Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bHideAssociatedBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bHideAssociatedBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bHideAssociatedBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bDisableLowerBones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bDisableLowerBones_SetBit(void* Obj)
	{
		((FGoreMesh*)Obj)->bDisableLowerBones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bDisableLowerBones = { "bDisableLowerBones", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGoreMesh), &Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bDisableLowerBones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bDisableLowerBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bDisableLowerBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000080000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bPickRandomGib_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bPickRandomGib_SetBit(void* Obj)
	{
		((FGoreMesh*)Obj)->bPickRandomGib = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bPickRandomGib = { "bPickRandomGib", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGoreMesh), &Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bPickRandomGib_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bPickRandomGib_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bPickRandomGib_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Gib_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Gib = { "Gib", nullptr, (EPropertyFlags)0x0014000080000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, Gib), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Gib_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Gib_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_RandomGibs_Inner = { "RandomGibs", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_RandomGibs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_RandomGibs = { "RandomGibs", nullptr, (EPropertyFlags)0x0014000080000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, RandomGibs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_RandomGibs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_RandomGibs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_GibMaterialOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_GibMaterialOverride = { "GibMaterialOverride", nullptr, (EPropertyFlags)0x0014000080000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, GibMaterialOverride), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_GibMaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_GibMaterialOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Ellipsoids_Inner = { "Ellipsoids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Ellipsoids_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Ellipsoids = { "Ellipsoids", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, Ellipsoids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Ellipsoids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Ellipsoids_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_MinDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_MinDamage = { "MinDamage", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, MinDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_MinDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_MinDamage_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_IncompatibleMeshes_Inner = { "IncompatibleMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_IncompatibleMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_IncompatibleMeshes = { "IncompatibleMeshes", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, IncompatibleMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_IncompatibleMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_IncompatibleMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_RelativeGibTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_RelativeGibTransform = { "RelativeGibTransform", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, RelativeGibTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_RelativeGibTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_RelativeGibTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Event_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, Event), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Event_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0014000080000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, Particle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Particle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FGoreMesh*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGoreMesh), &Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FGoreMesh*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGoreMesh), &Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001200008008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_GibComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GoreMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_GibComponent = { "GibComponent", nullptr, (EPropertyFlags)0x001200008008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreMesh, GibComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_GibComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_GibComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoreMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_AssociatedBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bHideAssociatedBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bDisableLowerBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bPickRandomGib,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Gib,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_RandomGibs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_RandomGibs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_GibMaterialOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Ellipsoids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Ellipsoids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_MinDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_IncompatibleMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_IncompatibleMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_RelativeGibTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreMesh_Statics::NewProp_GibComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoreMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
		nullptr,
		&NewStructOps,
		"GoreMesh",
		sizeof(FGoreMesh),
		alignof(FGoreMesh),
		Z_Construct_UScriptStruct_FGoreMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoreMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGoreMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Dismemberment();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GoreMesh"), sizeof(FGoreMesh), Get_Z_Construct_UScriptStruct_FGoreMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGoreMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGoreMesh_Hash() { return 3224876906U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
