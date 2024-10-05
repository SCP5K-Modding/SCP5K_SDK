// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/UserStatsReceived.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserStatsReceived() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserStatsReceived();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
// End Cross Module References
class UScriptStruct* FUserStatsReceived::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FUserStatsReceived_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsReceived, Z_Construct_UPackage__Script_SteamCore(), TEXT("UserStatsReceived"), sizeof(FUserStatsReceived), Get_Z_Construct_UScriptStruct_FUserStatsReceived_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserStatsReceived>()
{
	return FUserStatsReceived::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserStatsReceived(FUserStatsReceived::StaticStruct, TEXT("/Script/SteamCore"), TEXT("UserStatsReceived"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFUserStatsReceived
{
	FScriptStruct_SteamCore_StaticRegisterNativesFUserStatsReceived()
	{
		UScriptStruct::DeferCppStructOps<FUserStatsReceived>(FName(TEXT("UserStatsReceived")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFUserStatsReceived;
	struct Z_Construct_UScriptStruct_FUserStatsReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStatsReceived.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsReceived>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserStatsReceived" },
		{ "ModuleRelativePath", "Public/UserStatsReceived.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserStatsReceived, GameID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserStatsReceived" },
		{ "ModuleRelativePath", "Public/UserStatsReceived.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserStatsReceived, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserStatsReceived" },
		{ "ModuleRelativePath", "Public/UserStatsReceived.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserStatsReceived, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserStatsReceived",
		sizeof(FUserStatsReceived),
		alignof(FUserStatsReceived),
		Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserStatsReceived()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserStatsReceived_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserStatsReceived"), sizeof(FUserStatsReceived), Get_Z_Construct_UScriptStruct_FUserStatsReceived_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserStatsReceived_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserStatsReceived_Hash() { return 3177953786U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
