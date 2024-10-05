// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LensEffects/Public/LensFlareGhostSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensFlareGhostSettings() {}
// Cross Module References
	LENSEFFECTS_API UScriptStruct* Z_Construct_UScriptStruct_FLensFlareGhostSettings();
	UPackage* Z_Construct_UPackage__Script_LensEffects();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FLensFlareGhostSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LENSEFFECTS_API uint32 Get_Z_Construct_UScriptStruct_FLensFlareGhostSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensFlareGhostSettings, Z_Construct_UPackage__Script_LensEffects(), TEXT("LensFlareGhostSettings"), sizeof(FLensFlareGhostSettings), Get_Z_Construct_UScriptStruct_FLensFlareGhostSettings_Hash());
	}
	return Singleton;
}
template<> LENSEFFECTS_API UScriptStruct* StaticStruct<FLensFlareGhostSettings>()
{
	return FLensFlareGhostSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLensFlareGhostSettings(FLensFlareGhostSettings::StaticStruct, TEXT("/Script/LensEffects"), TEXT("LensFlareGhostSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LensEffects_StaticRegisterNativesFLensFlareGhostSettings
{
	FScriptStruct_LensEffects_StaticRegisterNativesFLensFlareGhostSettings()
	{
		UScriptStruct::DeferCppStructOps<FLensFlareGhostSettings>(FName(TEXT("LensFlareGhostSettings")));
	}
} ScriptStruct_LensEffects_StaticRegisterNativesFLensFlareGhostSettings;
	struct Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LensFlareGhostSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensFlareGhostSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LensFlareGhostSettings" },
		{ "ModuleRelativePath", "Public/LensFlareGhostSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLensFlareGhostSettings, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LensFlareGhostSettings" },
		{ "ModuleRelativePath", "Public/LensFlareGhostSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLensFlareGhostSettings, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LensEffects,
		nullptr,
		&NewStructOps,
		"LensFlareGhostSettings",
		sizeof(FLensFlareGhostSettings),
		alignof(FLensFlareGhostSettings),
		Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensFlareGhostSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLensFlareGhostSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LensEffects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LensFlareGhostSettings"), sizeof(FLensFlareGhostSettings), Get_Z_Construct_UScriptStruct_FLensFlareGhostSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLensFlareGhostSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLensFlareGhostSettings_Hash() { return 2067437408U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
