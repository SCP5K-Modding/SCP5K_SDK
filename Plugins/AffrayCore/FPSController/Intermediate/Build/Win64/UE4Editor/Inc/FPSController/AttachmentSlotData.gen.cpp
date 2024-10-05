// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/AttachmentSlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttachmentSlotData() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAttachmentSlotData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EAttachmentSlotType();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAttachmentMeshSetup();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FAttachmentSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAttachmentSlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttachmentSlotData, Z_Construct_UPackage__Script_FPSController(), TEXT("AttachmentSlotData"), sizeof(FAttachmentSlotData), Get_Z_Construct_UScriptStruct_FAttachmentSlotData_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FAttachmentSlotData>()
{
	return FAttachmentSlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttachmentSlotData(FAttachmentSlotData::StaticStruct, TEXT("/Script/FPSController"), TEXT("AttachmentSlotData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFAttachmentSlotData
{
	FScriptStruct_FPSController_StaticRegisterNativesFAttachmentSlotData()
	{
		UScriptStruct::DeferCppStructOps<FAttachmentSlotData>(FName(TEXT("AttachmentSlotData")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFAttachmentSlotData;
	struct Z_Construct_UScriptStruct_FAttachmentSlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AvailableAttachments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableAttachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableAttachments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachMeshPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttachMeshPriority;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequestAlternateGripPose_MetaData[];
#endif
		static void NewProp_bRequestAlternateGripPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequestAlternateGripPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideAlternateGripPose_MetaData[];
#endif
		static void NewProp_bUseOverrideAlternateGripPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideAlternateGripPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideAlternateGripPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideAlternateGripPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AttachmentSlotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttachmentSlotData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_SlotName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentSlotData" },
		{ "ModuleRelativePath", "Public/AttachmentSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachmentSlotData, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentSlotData" },
		{ "ModuleRelativePath", "Public/AttachmentSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachmentSlotData, Type), Z_Construct_UEnum_FPSController_EAttachmentSlotType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AvailableAttachments_Inner = { "AvailableAttachments", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFPSAttachment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AvailableAttachments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentSlotData" },
		{ "ModuleRelativePath", "Public/AttachmentSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AvailableAttachments = { "AvailableAttachments", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachmentSlotData, AvailableAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AvailableAttachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AvailableAttachments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentSlotData" },
		{ "ModuleRelativePath", "Public/AttachmentSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachmentSlotData, AttachSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_SocketRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentSlotData" },
		{ "ModuleRelativePath", "Public/AttachmentSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_SocketRotationOffset = { "SocketRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachmentSlotData, SocketRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_SocketRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_SocketRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachMeshPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentSlotData" },
		{ "ModuleRelativePath", "Public/AttachmentSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachMeshPriority = { "AttachMeshPriority", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachmentSlotData, AttachMeshPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachMeshPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachMeshPriority_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachMeshes_Inner = { "AttachMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttachmentMeshSetup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentSlotData" },
		{ "ModuleRelativePath", "Public/AttachmentSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachMeshes = { "AttachMeshes", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachmentSlotData, AttachMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bRequestAlternateGripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentSlotData" },
		{ "ModuleRelativePath", "Public/AttachmentSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bRequestAlternateGripPose_SetBit(void* Obj)
	{
		((FAttachmentSlotData*)Obj)->bRequestAlternateGripPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bRequestAlternateGripPose = { "bRequestAlternateGripPose", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAttachmentSlotData), &Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bRequestAlternateGripPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bRequestAlternateGripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bRequestAlternateGripPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bUseOverrideAlternateGripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentSlotData" },
		{ "ModuleRelativePath", "Public/AttachmentSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bUseOverrideAlternateGripPose_SetBit(void* Obj)
	{
		((FAttachmentSlotData*)Obj)->bUseOverrideAlternateGripPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bUseOverrideAlternateGripPose = { "bUseOverrideAlternateGripPose", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAttachmentSlotData), &Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bUseOverrideAlternateGripPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bUseOverrideAlternateGripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bUseOverrideAlternateGripPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_OverrideAlternateGripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentSlotData" },
		{ "ModuleRelativePath", "Public/AttachmentSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_OverrideAlternateGripPose = { "OverrideAlternateGripPose", nullptr, (EPropertyFlags)0x0014040000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachmentSlotData, OverrideAlternateGripPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_OverrideAlternateGripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_OverrideAlternateGripPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AvailableAttachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AvailableAttachments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_SocketRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachMeshPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_AttachMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bRequestAlternateGripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_bUseOverrideAlternateGripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::NewProp_OverrideAlternateGripPose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"AttachmentSlotData",
		sizeof(FAttachmentSlotData),
		alignof(FAttachmentSlotData),
		Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttachmentSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttachmentSlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttachmentSlotData"), sizeof(FAttachmentSlotData), Get_Z_Construct_UScriptStruct_FAttachmentSlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttachmentSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttachmentSlotData_Hash() { return 3487562605U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
