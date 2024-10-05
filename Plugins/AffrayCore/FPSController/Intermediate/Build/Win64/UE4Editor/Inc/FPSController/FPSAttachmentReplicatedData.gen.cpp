// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSAttachmentReplicatedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAttachmentReplicatedData() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
class UScriptStruct* FFPSAttachmentReplicatedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData, Z_Construct_UPackage__Script_FPSController(), TEXT("FPSAttachmentReplicatedData"), sizeof(FFPSAttachmentReplicatedData), Get_Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FFPSAttachmentReplicatedData>()
{
	return FFPSAttachmentReplicatedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFPSAttachmentReplicatedData(FFPSAttachmentReplicatedData::StaticStruct, TEXT("/Script/FPSController"), TEXT("FPSAttachmentReplicatedData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFFPSAttachmentReplicatedData
{
	FScriptStruct_FPSController_StaticRegisterNativesFFPSAttachmentReplicatedData()
	{
		UScriptStruct::DeferCppStructOps<FFPSAttachmentReplicatedData>(FName(TEXT("FPSAttachmentReplicatedData")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFFPSAttachmentReplicatedData;
	struct Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPSAttachmentReplicatedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFPSAttachmentReplicatedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_AttachSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentReplicatedData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentReplicatedData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_AttachSocket = { "AttachSocket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSAttachmentReplicatedData, AttachSocket), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_AttachSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_AttachSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_Slot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentReplicatedData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentReplicatedData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSAttachmentReplicatedData, Slot), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_bInitialized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentReplicatedData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentReplicatedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FFPSAttachmentReplicatedData*)Obj)->bInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSAttachmentReplicatedData), &Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_bInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_bInitialized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_AttachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::NewProp_bInitialized,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"FPSAttachmentReplicatedData",
		sizeof(FFPSAttachmentReplicatedData),
		alignof(FFPSAttachmentReplicatedData),
		Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FPSAttachmentReplicatedData"), sizeof(FFPSAttachmentReplicatedData), Get_Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData_Hash() { return 3584293339U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
