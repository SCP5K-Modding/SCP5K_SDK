// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/LiftFloor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiftFloor() {}
// Cross Module References
	ELECTRONICS_API UScriptStruct* Z_Construct_UScriptStruct_FLiftFloor();
	UPackage* Z_Construct_UPackage__Script_Electronics();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicDoor_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FLiftFloor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELECTRONICS_API uint32 Get_Z_Construct_UScriptStruct_FLiftFloor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiftFloor, Z_Construct_UPackage__Script_Electronics(), TEXT("LiftFloor"), sizeof(FLiftFloor), Get_Z_Construct_UScriptStruct_FLiftFloor_Hash());
	}
	return Singleton;
}
template<> ELECTRONICS_API UScriptStruct* StaticStruct<FLiftFloor>()
{
	return FLiftFloor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiftFloor(FLiftFloor::StaticStruct, TEXT("/Script/Electronics"), TEXT("LiftFloor"), false, nullptr, nullptr);
static struct FScriptStruct_Electronics_StaticRegisterNativesFLiftFloor
{
	FScriptStruct_Electronics_StaticRegisterNativesFLiftFloor()
	{
		UScriptStruct::DeferCppStructOps<FLiftFloor>(FName(TEXT("LiftFloor")));
	}
} ScriptStruct_Electronics_StaticRegisterNativesFLiftFloor;
	struct Z_Construct_UScriptStruct_FLiftFloor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElectronicToActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElectronicToActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiftTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiftTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FloorName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiftFloor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiftFloor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiftFloor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiftFloor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_Door_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LiftFloor" },
		{ "ModuleRelativePath", "Public/LiftFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiftFloor, Door), Z_Construct_UClass_AElectronicDoor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_Door_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_ElectronicToActivate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LiftFloor" },
		{ "ModuleRelativePath", "Public/LiftFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_ElectronicToActivate = { "ElectronicToActivate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiftFloor, ElectronicToActivate), Z_Construct_UClass_AElectronic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_ElectronicToActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_ElectronicToActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_LiftTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LiftFloor" },
		{ "ModuleRelativePath", "Public/LiftFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_LiftTransform = { "LiftTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiftFloor, LiftTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_LiftTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_LiftTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_FloorName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LiftFloor" },
		{ "ModuleRelativePath", "Public/LiftFloor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_FloorName = { "FloorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiftFloor, FloorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_FloorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_FloorName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiftFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_ElectronicToActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_LiftTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiftFloor_Statics::NewProp_FloorName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiftFloor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
		nullptr,
		&NewStructOps,
		"LiftFloor",
		sizeof(FLiftFloor),
		alignof(FLiftFloor),
		Z_Construct_UScriptStruct_FLiftFloor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiftFloor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiftFloor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiftFloor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiftFloor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiftFloor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Electronics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiftFloor"), sizeof(FLiftFloor), Get_Z_Construct_UScriptStruct_FLiftFloor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiftFloor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiftFloor_Hash() { return 1143260393U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
