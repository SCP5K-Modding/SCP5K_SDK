// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/WallStripePointParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallStripePointParams() {}
// Cross Module References
	MODULARASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FWallStripePointParams();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FWallStripePointParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODULARASSETS_API uint32 Get_Z_Construct_UScriptStruct_FWallStripePointParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWallStripePointParams, Z_Construct_UPackage__Script_ModularAssets(), TEXT("WallStripePointParams"), sizeof(FWallStripePointParams), Get_Z_Construct_UScriptStruct_FWallStripePointParams_Hash());
	}
	return Singleton;
}
template<> MODULARASSETS_API UScriptStruct* StaticStruct<FWallStripePointParams>()
{
	return FWallStripePointParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWallStripePointParams(FWallStripePointParams::StaticStruct, TEXT("/Script/ModularAssets"), TEXT("WallStripePointParams"), false, nullptr, nullptr);
static struct FScriptStruct_ModularAssets_StaticRegisterNativesFWallStripePointParams
{
	FScriptStruct_ModularAssets_StaticRegisterNativesFWallStripePointParams()
	{
		UScriptStruct::DeferCppStructOps<FWallStripePointParams>(FName(TEXT("WallStripePointParams")));
	}
} ScriptStruct_ModularAssets_StaticRegisterNativesFWallStripePointParams;
	struct Z_Construct_UScriptStruct_FWallStripePointParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CornerRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideCornerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideCornerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipSide_MetaData[];
#endif
		static void NewProp_bFlipSide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipSide;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallStripePointParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WallStripePointParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWallStripePointParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_CornerRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripePointParams" },
		{ "ModuleRelativePath", "Public/WallStripePointParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallStripePointParams, CornerRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_CornerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_CornerRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripePointParams" },
		{ "ModuleRelativePath", "Public/WallStripePointParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallStripePointParams, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_OverrideCornerMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripePointParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WallStripePointParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_OverrideCornerMesh = { "OverrideCornerMesh", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallStripePointParams, OverrideCornerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_OverrideCornerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_OverrideCornerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_bFlipSide_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WallStripePointParams" },
		{ "ModuleRelativePath", "Public/WallStripePointParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_bFlipSide_SetBit(void* Obj)
	{
		((FWallStripePointParams*)Obj)->bFlipSide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_bFlipSide = { "bFlipSide", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWallStripePointParams), &Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_bFlipSide_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_bFlipSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_bFlipSide_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWallStripePointParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_CornerRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_OverrideCornerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallStripePointParams_Statics::NewProp_bFlipSide,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWallStripePointParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
		nullptr,
		&NewStructOps,
		"WallStripePointParams",
		sizeof(FWallStripePointParams),
		alignof(FWallStripePointParams),
		Z_Construct_UScriptStruct_FWallStripePointParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallStripePointParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWallStripePointParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallStripePointParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWallStripePointParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWallStripePointParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ModularAssets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WallStripePointParams"), sizeof(FWallStripePointParams), Get_Z_Construct_UScriptStruct_FWallStripePointParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWallStripePointParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWallStripePointParams_Hash() { return 2157053811U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
