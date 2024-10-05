// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIUtilities/Public/MagazineStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagazineStyle() {}
// Cross Module References
	UIUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMagazineStyle();
	UPackage* Z_Construct_UPackage__Script_UIUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FMagazineStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UIUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FMagazineStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagazineStyle, Z_Construct_UPackage__Script_UIUtilities(), TEXT("MagazineStyle"), sizeof(FMagazineStyle), Get_Z_Construct_UScriptStruct_FMagazineStyle_Hash());
	}
	return Singleton;
}
template<> UIUTILITIES_API UScriptStruct* StaticStruct<FMagazineStyle>()
{
	return FMagazineStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagazineStyle(FMagazineStyle::StaticStruct, TEXT("/Script/UIUtilities"), TEXT("MagazineStyle"), false, nullptr, nullptr);
static struct FScriptStruct_UIUtilities_StaticRegisterNativesFMagazineStyle
{
	FScriptStruct_UIUtilities_StaticRegisterNativesFMagazineStyle()
	{
		UScriptStruct::DeferCppStructOps<FMagazineStyle>(FName(TEXT("MagazineStyle")));
	}
} ScriptStruct_UIUtilities_StaticRegisterNativesFMagazineStyle;
	struct Z_Construct_UScriptStruct_FMagazineStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MagazineBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MagazineBorder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagazineStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MagazineStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagazineStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagazineStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagazineStyle_Statics::NewProp_MagazineBackground_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MagazineStyle" },
		{ "ModuleRelativePath", "Public/MagazineStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMagazineStyle_Statics::NewProp_MagazineBackground = { "MagazineBackground", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagazineStyle, MagazineBackground), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagazineStyle_Statics::NewProp_MagazineBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagazineStyle_Statics::NewProp_MagazineBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagazineStyle_Statics::NewProp_MagazineBorder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MagazineStyle" },
		{ "ModuleRelativePath", "Public/MagazineStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMagazineStyle_Statics::NewProp_MagazineBorder = { "MagazineBorder", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagazineStyle, MagazineBorder), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagazineStyle_Statics::NewProp_MagazineBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagazineStyle_Statics::NewProp_MagazineBorder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagazineStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagazineStyle_Statics::NewProp_MagazineBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagazineStyle_Statics::NewProp_MagazineBorder,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagazineStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIUtilities,
		nullptr,
		&NewStructOps,
		"MagazineStyle",
		sizeof(FMagazineStyle),
		alignof(FMagazineStyle),
		Z_Construct_UScriptStruct_FMagazineStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagazineStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagazineStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagazineStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagazineStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagazineStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UIUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagazineStyle"), sizeof(FMagazineStyle), Get_Z_Construct_UScriptStruct_FMagazineStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagazineStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagazineStyle_Hash() { return 2053560999U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
