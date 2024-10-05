// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/MeleeHitData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeHitData() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeHitData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FMeleeHitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FMeleeHitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeleeHitData, Z_Construct_UPackage__Script_FPSController(), TEXT("MeleeHitData"), sizeof(FMeleeHitData), Get_Z_Construct_UScriptStruct_FMeleeHitData_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FMeleeHitData>()
{
	return FMeleeHitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeleeHitData(FMeleeHitData::StaticStruct, TEXT("/Script/FPSController"), TEXT("MeleeHitData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFMeleeHitData
{
	FScriptStruct_FPSController_StaticRegisterNativesFMeleeHitData()
	{
		UScriptStruct::DeferCppStructOps<FMeleeHitData>(FName(TEXT("MeleeHitData")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFMeleeHitData;
	struct Z_Construct_UScriptStruct_FMeleeHitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitBoneIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeleeHitData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeleeHitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeleeHitData" },
		{ "ModuleRelativePath", "Public/MeleeHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeHitData, Flags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Flags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeleeHitData" },
		{ "ModuleRelativePath", "Public/MeleeHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeHitData, Time), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_HitBoneIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeleeHitData" },
		{ "ModuleRelativePath", "Public/MeleeHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_HitBoneIndex = { "HitBoneIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeHitData, HitBoneIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_HitBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_HitBoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeleeHitData" },
		{ "ModuleRelativePath", "Public/MeleeHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeHitData, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_SurfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_SurfaceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_AttackType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeleeHitData" },
		{ "ModuleRelativePath", "Public/MeleeHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_AttackType = { "AttackType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeHitData, AttackType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_AttackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_AttackType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeleeHitData" },
		{ "ModuleRelativePath", "Public/MeleeHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeHitData, position), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Normal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeleeHitData" },
		{ "ModuleRelativePath", "Public/MeleeHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeHitData, Normal), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_HitComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeleeHitData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeleeHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeHitData, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeleeHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_HitBoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_SurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_AttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeHitData_Statics::NewProp_HitComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeleeHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"MeleeHitData",
		sizeof(FMeleeHitData),
		alignof(FMeleeHitData),
		Z_Construct_UScriptStruct_FMeleeHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeleeHitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeleeHitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeleeHitData"), sizeof(FMeleeHitData), Get_Z_Construct_UScriptStruct_FMeleeHitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeleeHitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeleeHitData_Hash() { return 15549912U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
