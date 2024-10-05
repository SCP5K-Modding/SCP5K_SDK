// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIUtilities/Public/HUDElementVisibility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDElementVisibility() {}
// Cross Module References
	UIUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FHUDElementVisibility();
	UPackage* Z_Construct_UPackage__Script_UIUtilities();
	UIUTILITIES_API UEnum* Z_Construct_UEnum_UIUtilities_EUIVisibility();
// End Cross Module References
class UScriptStruct* FHUDElementVisibility::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UIUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FHUDElementVisibility_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHUDElementVisibility, Z_Construct_UPackage__Script_UIUtilities(), TEXT("HUDElementVisibility"), sizeof(FHUDElementVisibility), Get_Z_Construct_UScriptStruct_FHUDElementVisibility_Hash());
	}
	return Singleton;
}
template<> UIUTILITIES_API UScriptStruct* StaticStruct<FHUDElementVisibility>()
{
	return FHUDElementVisibility::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHUDElementVisibility(FHUDElementVisibility::StaticStruct, TEXT("/Script/UIUtilities"), TEXT("HUDElementVisibility"), false, nullptr, nullptr);
static struct FScriptStruct_UIUtilities_StaticRegisterNativesFHUDElementVisibility
{
	FScriptStruct_UIUtilities_StaticRegisterNativesFHUDElementVisibility()
	{
		UScriptStruct::DeferCppStructOps<FHUDElementVisibility>(FName(TEXT("HUDElementVisibility")));
	}
} ScriptStruct_UIUtilities_StaticRegisterNativesFHUDElementVisibility;
	struct Z_Construct_UScriptStruct_FHUDElementVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerHealthVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealthVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerHealthVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OtherHealthVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherHealthVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OtherHealthVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoCountVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoCountVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoCountVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemModeVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemModeVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemModeVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HotbarVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotbarVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HotbarVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PVPScoreVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PVPScoreVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PVPScoreVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HUDElementVisibility.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHUDElementVisibility>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PlayerHealthVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PlayerHealthVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HUDElementVisibility" },
		{ "ModuleRelativePath", "Public/HUDElementVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PlayerHealthVisibility = { "PlayerHealthVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHUDElementVisibility, PlayerHealthVisibility), Z_Construct_UEnum_UIUtilities_EUIVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PlayerHealthVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PlayerHealthVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_OtherHealthVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_OtherHealthVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HUDElementVisibility" },
		{ "ModuleRelativePath", "Public/HUDElementVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_OtherHealthVisibility = { "OtherHealthVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHUDElementVisibility, OtherHealthVisibility), Z_Construct_UEnum_UIUtilities_EUIVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_OtherHealthVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_OtherHealthVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_AmmoCountVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_AmmoCountVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HUDElementVisibility" },
		{ "ModuleRelativePath", "Public/HUDElementVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_AmmoCountVisibility = { "AmmoCountVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHUDElementVisibility, AmmoCountVisibility), Z_Construct_UEnum_UIUtilities_EUIVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_AmmoCountVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_AmmoCountVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_ItemModeVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_ItemModeVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HUDElementVisibility" },
		{ "ModuleRelativePath", "Public/HUDElementVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_ItemModeVisibility = { "ItemModeVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHUDElementVisibility, ItemModeVisibility), Z_Construct_UEnum_UIUtilities_EUIVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_ItemModeVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_ItemModeVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_HotbarVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_HotbarVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HUDElementVisibility" },
		{ "ModuleRelativePath", "Public/HUDElementVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_HotbarVisibility = { "HotbarVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHUDElementVisibility, HotbarVisibility), Z_Construct_UEnum_UIUtilities_EUIVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_HotbarVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_HotbarVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PVPScoreVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PVPScoreVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HUDElementVisibility" },
		{ "ModuleRelativePath", "Public/HUDElementVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PVPScoreVisibility = { "PVPScoreVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHUDElementVisibility, PVPScoreVisibility), Z_Construct_UEnum_UIUtilities_EUIVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PVPScoreVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PVPScoreVisibility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PlayerHealthVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PlayerHealthVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_OtherHealthVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_OtherHealthVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_AmmoCountVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_AmmoCountVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_ItemModeVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_ItemModeVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_HotbarVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_HotbarVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PVPScoreVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::NewProp_PVPScoreVisibility,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIUtilities,
		nullptr,
		&NewStructOps,
		"HUDElementVisibility",
		sizeof(FHUDElementVisibility),
		alignof(FHUDElementVisibility),
		Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHUDElementVisibility()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHUDElementVisibility_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UIUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HUDElementVisibility"), sizeof(FHUDElementVisibility), Get_Z_Construct_UScriptStruct_FHUDElementVisibility_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHUDElementVisibility_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHUDElementVisibility_Hash() { return 3192073904U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
