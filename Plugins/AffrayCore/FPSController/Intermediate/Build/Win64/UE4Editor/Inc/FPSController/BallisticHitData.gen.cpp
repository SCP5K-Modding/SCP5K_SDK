// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/BallisticHitData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallisticHitData() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FBallisticHitData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FBallisticHitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FBallisticHitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBallisticHitData, Z_Construct_UPackage__Script_FPSController(), TEXT("BallisticHitData"), sizeof(FBallisticHitData), Get_Z_Construct_UScriptStruct_FBallisticHitData_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FBallisticHitData>()
{
	return FBallisticHitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBallisticHitData(FBallisticHitData::StaticStruct, TEXT("/Script/FPSController"), TEXT("BallisticHitData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFBallisticHitData
{
	FScriptStruct_FPSController_StaticRegisterNativesFBallisticHitData()
	{
		UScriptStruct::DeferCppStructOps<FBallisticHitData>(FName(TEXT("BallisticHitData")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFBallisticHitData;
	struct Z_Construct_UScriptStruct_FBallisticHitData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsMaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicsMaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitBoneIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBallisticHitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BallisticHitData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBallisticHitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticHitData" },
		{ "ModuleRelativePath", "Public/BallisticHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBallisticHitData, Flags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Flags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticHitData" },
		{ "ModuleRelativePath", "Public/BallisticHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBallisticHitData, Time), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_PhysicsMaterialIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticHitData" },
		{ "ModuleRelativePath", "Public/BallisticHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_PhysicsMaterialIndex = { "PhysicsMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBallisticHitData, PhysicsMaterialIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_PhysicsMaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_PhysicsMaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticHitData" },
		{ "ModuleRelativePath", "Public/BallisticHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBallisticHitData, position), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Velocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticHitData" },
		{ "ModuleRelativePath", "Public/BallisticHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBallisticHitData, Velocity), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Normal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticHitData" },
		{ "ModuleRelativePath", "Public/BallisticHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBallisticHitData, Normal), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Distance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticHitData" },
		{ "ModuleRelativePath", "Public/BallisticHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBallisticHitData, Distance), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_HitBoneIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticHitData" },
		{ "ModuleRelativePath", "Public/BallisticHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_HitBoneIndex = { "HitBoneIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBallisticHitData, HitBoneIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_HitBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_HitBoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_HitComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BallisticHitData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BallisticHitData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBallisticHitData, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBallisticHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_PhysicsMaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_HitBoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBallisticHitData_Statics::NewProp_HitComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBallisticHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"BallisticHitData",
		sizeof(FBallisticHitData),
		alignof(FBallisticHitData),
		Z_Construct_UScriptStruct_FBallisticHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticHitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBallisticHitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBallisticHitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBallisticHitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBallisticHitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BallisticHitData"), sizeof(FBallisticHitData), Get_Z_Construct_UScriptStruct_FBallisticHitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBallisticHitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBallisticHitData_Hash() { return 172928888U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
