// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/SimpleSurfaceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleSurfaceData() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleSurfaceData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FSimpleSurfaceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FSimpleSurfaceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleSurfaceData, Z_Construct_UPackage__Script_FPSController(), TEXT("SimpleSurfaceData"), sizeof(FSimpleSurfaceData), Get_Z_Construct_UScriptStruct_FSimpleSurfaceData_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FSimpleSurfaceData>()
{
	return FSimpleSurfaceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleSurfaceData(FSimpleSurfaceData::StaticStruct, TEXT("/Script/FPSController"), TEXT("SimpleSurfaceData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFSimpleSurfaceData
{
	FScriptStruct_FPSController_StaticRegisterNativesFSimpleSurfaceData()
	{
		UScriptStruct::DeferCppStructOps<FSimpleSurfaceData>(FName(TEXT("SimpleSurfaceData")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFSimpleSurfaceData;
	struct Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics
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
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HitParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDecal_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HitDecal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleSurfaceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleSurfaceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_SurfaceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleSurfaceData" },
		{ "ModuleRelativePath", "Public/SimpleSurfaceData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_SurfaceName = { "SurfaceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleSurfaceData, SurfaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_SurfaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_SurfaceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitParticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleSurfaceData" },
		{ "ModuleRelativePath", "Public/SimpleSurfaceData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitParticle = { "HitParticle", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleSurfaceData, HitParticle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleSurfaceData" },
		{ "ModuleRelativePath", "Public/SimpleSurfaceData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleSurfaceData, HitSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitDecal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleSurfaceData" },
		{ "ModuleRelativePath", "Public/SimpleSurfaceData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitDecal = { "HitDecal", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleSurfaceData, HitDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitDecal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_SurfaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::NewProp_HitDecal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"SimpleSurfaceData",
		sizeof(FSimpleSurfaceData),
		alignof(FSimpleSurfaceData),
		Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleSurfaceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleSurfaceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleSurfaceData"), sizeof(FSimpleSurfaceData), Get_Z_Construct_UScriptStruct_FSimpleSurfaceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleSurfaceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleSurfaceData_Hash() { return 4265958242U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
