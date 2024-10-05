// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/VolumeHasChanged.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeHasChanged() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeHasChanged();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FVolumeHasChanged::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FVolumeHasChanged_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumeHasChanged, Z_Construct_UPackage__Script_SteamCore(), TEXT("VolumeHasChanged"), sizeof(FVolumeHasChanged), Get_Z_Construct_UScriptStruct_FVolumeHasChanged_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FVolumeHasChanged>()
{
	return FVolumeHasChanged::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVolumeHasChanged(FVolumeHasChanged::StaticStruct, TEXT("/Script/SteamCore"), TEXT("VolumeHasChanged"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFVolumeHasChanged
{
	FScriptStruct_SteamCore_StaticRegisterNativesFVolumeHasChanged()
	{
		UScriptStruct::DeferCppStructOps<FVolumeHasChanged>(FName(TEXT("VolumeHasChanged")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFVolumeHasChanged;
	struct Z_Construct_UScriptStruct_FVolumeHasChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VolumeHasChanged.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumeHasChanged>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VolumeHasChanged" },
		{ "ModuleRelativePath", "Public/VolumeHasChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVolumeHasChanged, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"VolumeHasChanged",
		sizeof(FVolumeHasChanged),
		alignof(FVolumeHasChanged),
		Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVolumeHasChanged()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVolumeHasChanged_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VolumeHasChanged"), sizeof(FVolumeHasChanged), Get_Z_Construct_UScriptStruct_FVolumeHasChanged_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVolumeHasChanged_Hash() { return 3181380025U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
