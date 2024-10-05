// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/PlaybackStatusHasChanged.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaybackStatusHasChanged() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPlaybackStatusHasChanged();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FPlaybackStatusHasChanged::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaybackStatusHasChanged, Z_Construct_UPackage__Script_SteamCore(), TEXT("PlaybackStatusHasChanged"), sizeof(FPlaybackStatusHasChanged), Get_Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FPlaybackStatusHasChanged>()
{
	return FPlaybackStatusHasChanged::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlaybackStatusHasChanged(FPlaybackStatusHasChanged::StaticStruct, TEXT("/Script/SteamCore"), TEXT("PlaybackStatusHasChanged"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFPlaybackStatusHasChanged
{
	FScriptStruct_SteamCore_StaticRegisterNativesFPlaybackStatusHasChanged()
	{
		UScriptStruct::DeferCppStructOps<FPlaybackStatusHasChanged>(FName(TEXT("PlaybackStatusHasChanged")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFPlaybackStatusHasChanged;
	struct Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlaybackStatusHasChanged.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaybackStatusHasChanged>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"PlaybackStatusHasChanged",
		sizeof(FPlaybackStatusHasChanged),
		alignof(FPlaybackStatusHasChanged),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlaybackStatusHasChanged()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlaybackStatusHasChanged"), sizeof(FPlaybackStatusHasChanged), Get_Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Hash() { return 513540079U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
