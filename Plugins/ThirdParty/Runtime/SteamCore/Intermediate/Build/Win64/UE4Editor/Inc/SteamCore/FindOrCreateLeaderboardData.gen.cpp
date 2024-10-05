// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/FindOrCreateLeaderboardData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindOrCreateLeaderboardData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
// End Cross Module References
class UScriptStruct* FFindOrCreateLeaderboardData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, Z_Construct_UPackage__Script_SteamCore(), TEXT("FindOrCreateLeaderboardData"), sizeof(FFindOrCreateLeaderboardData), Get_Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FFindOrCreateLeaderboardData>()
{
	return FFindOrCreateLeaderboardData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFindOrCreateLeaderboardData(FFindOrCreateLeaderboardData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("FindOrCreateLeaderboardData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFFindOrCreateLeaderboardData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFFindOrCreateLeaderboardData()
	{
		UScriptStruct::DeferCppStructOps<FFindOrCreateLeaderboardData>(FName(TEXT("FindOrCreateLeaderboardData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFFindOrCreateLeaderboardData;
	struct Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeaderboardFound_MetaData[];
#endif
		static void NewProp_bLeaderboardFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeaderboardFound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FindOrCreateLeaderboardData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFindOrCreateLeaderboardData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FindOrCreateLeaderboardData" },
		{ "ModuleRelativePath", "Public/FindOrCreateLeaderboardData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFindOrCreateLeaderboardData, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FindOrCreateLeaderboardData" },
		{ "ModuleRelativePath", "Public/FindOrCreateLeaderboardData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_SetBit(void* Obj)
	{
		((FFindOrCreateLeaderboardData*)Obj)->bLeaderboardFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound = { "bLeaderboardFound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFindOrCreateLeaderboardData), &Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"FindOrCreateLeaderboardData",
		sizeof(FFindOrCreateLeaderboardData),
		alignof(FFindOrCreateLeaderboardData),
		Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FindOrCreateLeaderboardData"), sizeof(FFindOrCreateLeaderboardData), Get_Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Hash() { return 3378972901U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
