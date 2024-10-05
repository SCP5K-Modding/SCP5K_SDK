// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSLoadout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSLoadout() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSLoadout();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSItemData_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSItemSlotData();
// End Cross Module References
class UScriptStruct* FFPSLoadout::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FFPSLoadout_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFPSLoadout, Z_Construct_UPackage__Script_FPSController(), TEXT("FPSLoadout"), sizeof(FFPSLoadout), Get_Z_Construct_UScriptStruct_FFPSLoadout_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FFPSLoadout>()
{
	return FFPSLoadout::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFPSLoadout(FFPSLoadout::StaticStruct, TEXT("/Script/FPSController"), TEXT("FPSLoadout"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFFPSLoadout
{
	FScriptStruct_FPSController_StaticRegisterNativesFFPSLoadout()
	{
		UScriptStruct::DeferCppStructOps<FFPSLoadout>(FName(TEXT("FPSLoadout")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFFPSLoadout;
	struct Z_Construct_UScriptStruct_FFPSLoadout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSlotData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemSlotData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FactionIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoleIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSkinIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterSkinIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSLoadout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPSLoadout.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFPSLoadout>();
	}
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSLoadout" },
		{ "ModuleRelativePath", "Public/FPSLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSLoadout, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_ItemSlotData_Inner = { "ItemSlotData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFPSItemSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_ItemSlotData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSLoadout" },
		{ "ModuleRelativePath", "Public/FPSLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_ItemSlotData = { "ItemSlotData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSLoadout, ItemSlotData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_ItemSlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_ItemSlotData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_FactionIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSLoadout" },
		{ "ModuleRelativePath", "Public/FPSLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_FactionIndex = { "FactionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSLoadout, FactionIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_FactionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_FactionIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_RoleIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSLoadout" },
		{ "ModuleRelativePath", "Public/FPSLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_RoleIndex = { "RoleIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSLoadout, RoleIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_RoleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_RoleIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_CharacterSkinIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSLoadout" },
		{ "ModuleRelativePath", "Public/FPSLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_CharacterSkinIndex = { "CharacterSkinIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSLoadout, CharacterSkinIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_CharacterSkinIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_CharacterSkinIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFPSLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_ItemSlotData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_ItemSlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_FactionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_RoleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSLoadout_Statics::NewProp_CharacterSkinIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFPSLoadout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"FPSLoadout",
		sizeof(FFPSLoadout),
		alignof(FFPSLoadout),
		Z_Construct_UScriptStruct_FFPSLoadout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSLoadout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSLoadout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSLoadout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFPSLoadout()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFPSLoadout_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FPSLoadout"), sizeof(FFPSLoadout), Get_Z_Construct_UScriptStruct_FFPSLoadout_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFPSLoadout_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFPSLoadout_Hash() { return 3706165681U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
