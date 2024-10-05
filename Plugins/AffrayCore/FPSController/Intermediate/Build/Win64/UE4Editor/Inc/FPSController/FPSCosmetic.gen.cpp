// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSCosmetic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCosmetic() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSCosmetic();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FFPSCosmetic::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FFPSCosmetic_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFPSCosmetic, Z_Construct_UPackage__Script_FPSController(), TEXT("FPSCosmetic"), sizeof(FFPSCosmetic), Get_Z_Construct_UScriptStruct_FFPSCosmetic_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FFPSCosmetic>()
{
	return FFPSCosmetic::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFPSCosmetic(FFPSCosmetic::StaticStruct, TEXT("/Script/FPSController"), TEXT("FPSCosmetic"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFFPSCosmetic
{
	FScriptStruct_FPSController_StaticRegisterNativesFFPSCosmetic()
	{
		UScriptStruct::DeferCppStructOps<FFPSCosmetic>(FName(TEXT("FPSCosmetic")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFFPSCosmetic;
	struct Z_Construct_UScriptStruct_FFPSCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InternalName;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshReplacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MeshReplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequireDev_MetaData[];
#endif
		static void NewProp_bRequireDev_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireDev;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequireKickstarter_MetaData[];
#endif
		static void NewProp_bRequireKickstarter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireKickstarter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLCID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DLCID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequiredTeam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSCosmetic_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPSCosmetic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFPSCosmetic>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCosmetic" },
		{ "ModuleRelativePath", "Public/FPSCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSCosmetic, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_InternalName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCosmetic" },
		{ "ModuleRelativePath", "Public/FPSCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_InternalName = { "InternalName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSCosmetic, InternalName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_InternalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_InternalName_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_Materials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCosmetic" },
		{ "ModuleRelativePath", "Public/FPSCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSCosmetic, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_MeshReplacement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCosmetic" },
		{ "ModuleRelativePath", "Public/FPSCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_MeshReplacement = { "MeshReplacement", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSCosmetic, MeshReplacement), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_MeshReplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_MeshReplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireDev_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCosmetic" },
		{ "ModuleRelativePath", "Public/FPSCosmetic.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireDev_SetBit(void* Obj)
	{
		((FFPSCosmetic*)Obj)->bRequireDev = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireDev = { "bRequireDev", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSCosmetic), &Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireDev_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireDev_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireDev_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireKickstarter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCosmetic" },
		{ "ModuleRelativePath", "Public/FPSCosmetic.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireKickstarter_SetBit(void* Obj)
	{
		((FFPSCosmetic*)Obj)->bRequireKickstarter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireKickstarter = { "bRequireKickstarter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSCosmetic), &Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireKickstarter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireKickstarter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireKickstarter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_DLCID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCosmetic" },
		{ "ModuleRelativePath", "Public/FPSCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_DLCID = { "DLCID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSCosmetic, DLCID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_DLCID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_DLCID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_RequiredTeam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCosmetic" },
		{ "ModuleRelativePath", "Public/FPSCosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_RequiredTeam = { "RequiredTeam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSCosmetic, RequiredTeam), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_RequiredTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_RequiredTeam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFPSCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_InternalName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_MeshReplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireDev,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_bRequireKickstarter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_DLCID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSCosmetic_Statics::NewProp_RequiredTeam,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFPSCosmetic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"FPSCosmetic",
		sizeof(FFPSCosmetic),
		alignof(FFPSCosmetic),
		Z_Construct_UScriptStruct_FFPSCosmetic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSCosmetic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFPSCosmetic()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFPSCosmetic_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FPSCosmetic"), sizeof(FFPSCosmetic), Get_Z_Construct_UScriptStruct_FFPSCosmetic_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFPSCosmetic_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFPSCosmetic_Hash() { return 3076568100U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
