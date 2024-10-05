// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSItemSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSItemSlot() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSItemSlot();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSItemData_NoRegister();
// End Cross Module References
class UScriptStruct* FFPSItemSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FFPSItemSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFPSItemSlot, Z_Construct_UPackage__Script_FPSController(), TEXT("FPSItemSlot"), sizeof(FFPSItemSlot), Get_Z_Construct_UScriptStruct_FFPSItemSlot_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FFPSItemSlot>()
{
	return FFPSItemSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFPSItemSlot(FFPSItemSlot::StaticStruct, TEXT("/Script/FPSController"), TEXT("FPSItemSlot"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFFPSItemSlot
{
	FScriptStruct_FPSController_StaticRegisterNativesFFPSItemSlot()
	{
		UScriptStruct::DeferCppStructOps<FFPSItemSlot>(FName(TEXT("FPSItemSlot")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFFPSItemSlot;
	struct Z_Construct_UScriptStruct_FFPSItemSlot_Statics
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Skins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Skins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FactionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSItemSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPSItemSlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFPSItemSlot>();
	}
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemSlot" },
		{ "ModuleRelativePath", "Public/FPSItemSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSItemSlot, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Skins_Inner = { "Skins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Skins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemSlot" },
		{ "ModuleRelativePath", "Public/FPSItemSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Skins = { "Skins", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSItemSlot, Skins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Skins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Skins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_FactionIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemSlot" },
		{ "ModuleRelativePath", "Public/FPSItemSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_FactionIndex = { "FactionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFPSItemSlot, FactionIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_FactionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_FactionIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFPSItemSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Skins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_Skins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPSItemSlot_Statics::NewProp_FactionIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFPSItemSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"FPSItemSlot",
		sizeof(FFPSItemSlot),
		alignof(FFPSItemSlot),
		Z_Construct_UScriptStruct_FFPSItemSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSItemSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFPSItemSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPSItemSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFPSItemSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFPSItemSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FPSItemSlot"), sizeof(FFPSItemSlot), Get_Z_Construct_UScriptStruct_FFPSItemSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFPSItemSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFPSItemSlot_Hash() { return 4161924858U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
