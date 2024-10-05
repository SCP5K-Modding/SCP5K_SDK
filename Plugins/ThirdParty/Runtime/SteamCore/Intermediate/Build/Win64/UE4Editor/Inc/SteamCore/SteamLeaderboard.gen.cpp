// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamLeaderboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamLeaderboard() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FSteamLeaderboard::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboard_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboard, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamLeaderboard"), sizeof(FSteamLeaderboard), Get_Z_Construct_UScriptStruct_FSteamLeaderboard_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamLeaderboard>()
{
	return FSteamLeaderboard::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamLeaderboard(FSteamLeaderboard::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamLeaderboard"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboard
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboard()
	{
		UScriptStruct::DeferCppStructOps<FSteamLeaderboard>(FName(TEXT("SteamLeaderboard")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboard;
	struct Z_Construct_UScriptStruct_FSteamLeaderboard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamLeaderboard.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboard>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamLeaderboard",
		sizeof(FSteamLeaderboard),
		alignof(FSteamLeaderboard),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboard_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamLeaderboard"), sizeof(FSteamLeaderboard), Get_Z_Construct_UScriptStruct_FSteamLeaderboard_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboard_Hash() { return 3022098086U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
