// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/GoreHitData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoreHitData() {}
// Cross Module References
	DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FGoreHitData();
	UPackage* Z_Construct_UPackage__Script_Dismemberment();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FGoreHitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISMEMBERMENT_API uint32 Get_Z_Construct_UScriptStruct_FGoreHitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoreHitData, Z_Construct_UPackage__Script_Dismemberment(), TEXT("GoreHitData"), sizeof(FGoreHitData), Get_Z_Construct_UScriptStruct_FGoreHitData_Hash());
	}
	return Singleton;
}
template<> DISMEMBERMENT_API UScriptStruct* StaticStruct<FGoreHitData>()
{
	return FGoreHitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGoreHitData(FGoreHitData::StaticStruct, TEXT("/Script/Dismemberment"), TEXT("GoreHitData"), false, nullptr, nullptr);
static struct FScriptStruct_Dismemberment_StaticRegisterNativesFGoreHitData
{
	FScriptStruct_Dismemberment_StaticRegisterNativesFGoreHitData()
	{
		UScriptStruct::DeferCppStructOps<FGoreHitData>(FName(TEXT("GoreHitData")));
	}
} ScriptStruct_Dismemberment_StaticRegisterNativesFGoreHitData;
	struct Z_Construct_UScriptStruct_FGoreHitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFromDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitFromDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitBoneIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StoredDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreHitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GoreHitData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoreHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoreHitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreHitData" },
		{ "ModuleRelativePath", "Public/GoreHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreHitData, position), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitFromDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreHitData" },
		{ "ModuleRelativePath", "Public/GoreHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitFromDirection = { "HitFromDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreHitData, HitFromDirection), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitFromDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitFromDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitNormal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreHitData" },
		{ "ModuleRelativePath", "Public/GoreHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreHitData, HitNormal), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreHitData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GoreHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreHitData, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitBoneIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreHitData" },
		{ "ModuleRelativePath", "Public/GoreHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitBoneIndex = { "HitBoneIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreHitData, HitBoneIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitBoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_StoredDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GoreHitData" },
		{ "ModuleRelativePath", "Public/GoreHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_StoredDamage = { "StoredDamage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoreHitData, StoredDamage), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_StoredDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_StoredDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoreHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_HitBoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoreHitData_Statics::NewProp_StoredDamage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoreHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
		nullptr,
		&NewStructOps,
		"GoreHitData",
		sizeof(FGoreHitData),
		alignof(FGoreHitData),
		Z_Construct_UScriptStruct_FGoreHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreHitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoreHitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreHitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoreHitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGoreHitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Dismemberment();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GoreHitData"), sizeof(FGoreHitData), Get_Z_Construct_UScriptStruct_FGoreHitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGoreHitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGoreHitData_Hash() { return 3130924856U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
