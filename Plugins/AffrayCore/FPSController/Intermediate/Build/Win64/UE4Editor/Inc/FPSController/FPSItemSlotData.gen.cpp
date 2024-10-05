// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSItemSlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSItemSlotData() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSItemSlotData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
class UScriptStruct* FFPSItemSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FFPSItemSlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFPSItemSlotData, Z_Construct_UPackage__Script_FPSController(), TEXT("FPSItemSlotData"), sizeof(FFPSItemSlotData), Get_Z_Construct_UScriptStruct_FFPSItemSlotData_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FFPSItemSlotData>()
{
	return FFPSItemSlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFPSItemSlotData(FFPSItemSlotData::StaticStruct, TEXT("/Script/FPSController"), TEXT("FPSItemSlotData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFFPSItemSlotData
{
	FScriptStruct_FPSController_StaticRegisterNativesFFPSItemSlotData()
	{
		UScriptStruct::DeferCppStructOps<FFPSItemSlotData>(FName(TEXT("FPSItemSlotData")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFFPSItemSlotData;
	struct Z_Construct_UScriptStruct_FFPSItemSlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Attachments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attachments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFullAmmo_MetaData[];
#endif
		static void NewProp_bUseFullAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Skin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultCosmetic_MetaData[];
#endif
		static void NewProp_bUseDefaultCosmetic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultCosmetic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPSItemSlotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFPSItemSlotData>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Attachments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemSlotData" },
		{ "ModuleRelativePath", "Public/FPSItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSItemSlotData, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Attachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Attachments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseFullAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemSlotData" },
		{ "ModuleRelativePath", "Public/FPSItemSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseFullAmmo_SetBit(void* Obj)
	{
		((FFPSItemSlotData*)Obj)->bUseFullAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseFullAmmo = { "bUseFullAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSItemSlotData), &Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseFullAmmo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseFullAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseFullAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Amount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemSlotData" },
		{ "ModuleRelativePath", "Public/FPSItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSItemSlotData, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Skin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemSlotData" },
		{ "ModuleRelativePath", "Public/FPSItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Skin = { "Skin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSItemSlotData, Skin), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Skin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Skin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseDefaultCosmetic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemSlotData" },
		{ "ModuleRelativePath", "Public/FPSItemSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseDefaultCosmetic_SetBit(void* Obj)
	{
		((FFPSItemSlotData*)Obj)->bUseDefaultCosmetic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseDefaultCosmetic = { "bUseDefaultCosmetic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFPSItemSlotData), &Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseDefaultCosmetic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseDefaultCosmetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseDefaultCosmetic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Attachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Attachments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseFullAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_Skin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::NewProp_bUseDefaultCosmetic,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"FPSItemSlotData",
		sizeof(FFPSItemSlotData),
		alignof(FFPSItemSlotData),
		Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFPSItemSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFPSItemSlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FPSItemSlotData"), sizeof(FFPSItemSlotData), Get_Z_Construct_UScriptStruct_FFPSItemSlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFPSItemSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFPSItemSlotData_Hash() { return 2656338645U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
