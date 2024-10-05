// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/SimpleHitData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleHitData() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHitData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FSimpleHitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FSimpleHitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleHitData, Z_Construct_UPackage__Script_FPSController(), TEXT("SimpleHitData"), sizeof(FSimpleHitData), Get_Z_Construct_UScriptStruct_FSimpleHitData_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FSimpleHitData>()
{
	return FSimpleHitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleHitData(FSimpleHitData::StaticStruct, TEXT("/Script/FPSController"), TEXT("SimpleHitData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFSimpleHitData
{
	FScriptStruct_FPSController_StaticRegisterNativesFSimpleHitData()
	{
		UScriptStruct::DeferCppStructOps<FSimpleHitData>(FName(TEXT("SimpleHitData")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFSimpleHitData;
	struct Z_Construct_UScriptStruct_FSimpleHitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRadial_MetaData[];
#endif
		static void NewProp_bRadial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRadial;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDamageCauser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitDamageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasAppliedPhysics_MetaData[];
#endif
		static void NewProp_bHasAppliedPhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppliedPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StoredDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHitData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleHitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bRadial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleHitData" },
		{ "ModuleRelativePath", "Public/SimpleHitData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bRadial_SetBit(void* Obj)
	{
		((FSimpleHitData*)Obj)->bRadial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bRadial = { "bRadial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSimpleHitData), &Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bRadial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bRadial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bRadial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleHitData" },
		{ "ModuleRelativePath", "Public/SimpleHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleHitData, position), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitFromDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleHitData" },
		{ "ModuleRelativePath", "Public/SimpleHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitFromDirection = { "HitFromDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleHitData, HitFromDirection), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitFromDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitFromDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitNormal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleHitData" },
		{ "ModuleRelativePath", "Public/SimpleHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleHitData, HitNormal), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleHitData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleHitData, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitBoneIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleHitData" },
		{ "ModuleRelativePath", "Public/SimpleHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitBoneIndex = { "HitBoneIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleHitData, HitBoneIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitBoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitDamageCauser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleHitData" },
		{ "ModuleRelativePath", "Public/SimpleHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitDamageCauser = { "HitDamageCauser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleHitData, HitDamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitDamageCauser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitDamageCauser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bHasAppliedPhysics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleHitData" },
		{ "ModuleRelativePath", "Public/SimpleHitData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bHasAppliedPhysics_SetBit(void* Obj)
	{
		((FSimpleHitData*)Obj)->bHasAppliedPhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bHasAppliedPhysics = { "bHasAppliedPhysics", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSimpleHitData), &Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bHasAppliedPhysics_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bHasAppliedPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bHasAppliedPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_DamageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleHitData" },
		{ "ModuleRelativePath", "Public/SimpleHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleHitData, DamageType), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_StoredDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleHitData" },
		{ "ModuleRelativePath", "Public/SimpleHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_StoredDamage = { "StoredDamage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleHitData, StoredDamage), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_StoredDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_StoredDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bRadial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitBoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_HitDamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_bHasAppliedPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitData_Statics::NewProp_StoredDamage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"SimpleHitData",
		sizeof(FSimpleHitData),
		alignof(FSimpleHitData),
		Z_Construct_UScriptStruct_FSimpleHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleHitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleHitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleHitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleHitData"), sizeof(FSimpleHitData), Get_Z_Construct_UScriptStruct_FSimpleHitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleHitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleHitData_Hash() { return 324573647U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
