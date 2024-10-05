// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/SurfaceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurfaceData() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSurfaceData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FSurfaceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FSurfaceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSurfaceData, Z_Construct_UPackage__Script_FPSController(), TEXT("SurfaceData"), sizeof(FSurfaceData), Get_Z_Construct_UScriptStruct_FSurfaceData_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FSurfaceData>()
{
	return FSurfaceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSurfaceData(FSurfaceData::StaticStruct, TEXT("/Script/FPSController"), TEXT("SurfaceData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFSurfaceData
{
	FScriptStruct_FPSController_StaticRegisterNativesFSurfaceData()
	{
		UScriptStruct::DeferCppStructOps<FSurfaceData>(FName(TEXT("SurfaceData")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFSurfaceData;
	struct Z_Construct_UScriptStruct_FSurfaceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SurfaceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDecal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTransparentDecal_MetaData[];
#endif
		static void NewProp_bUseTransparentDecal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTransparentDecal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurfaceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SurfaceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSurfaceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSurfaceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_SurfaceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceData" },
		{ "ModuleRelativePath", "Public/SurfaceData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_SurfaceName = { "SurfaceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurfaceData, SurfaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_SurfaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_SurfaceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitParticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceData" },
		{ "ModuleRelativePath", "Public/SurfaceData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitParticle = { "HitParticle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurfaceData, HitParticle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceData" },
		{ "ModuleRelativePath", "Public/SurfaceData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurfaceData, HitSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitDecal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceData" },
		{ "ModuleRelativePath", "Public/SurfaceData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitDecal = { "HitDecal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurfaceData, HitDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_bUseTransparentDecal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceData" },
		{ "ModuleRelativePath", "Public/SurfaceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_bUseTransparentDecal_SetBit(void* Obj)
	{
		((FSurfaceData*)Obj)->bUseTransparentDecal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_bUseTransparentDecal = { "bUseTransparentDecal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSurfaceData), &Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_bUseTransparentDecal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_bUseTransparentDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_bUseTransparentDecal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSurfaceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_SurfaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_HitDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurfaceData_Statics::NewProp_bUseTransparentDecal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSurfaceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"SurfaceData",
		sizeof(FSurfaceData),
		alignof(FSurfaceData),
		Z_Construct_UScriptStruct_FSurfaceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurfaceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSurfaceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurfaceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSurfaceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSurfaceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SurfaceData"), sizeof(FSurfaceData), Get_Z_Construct_UScriptStruct_FSurfaceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSurfaceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSurfaceData_Hash() { return 2354376456U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
