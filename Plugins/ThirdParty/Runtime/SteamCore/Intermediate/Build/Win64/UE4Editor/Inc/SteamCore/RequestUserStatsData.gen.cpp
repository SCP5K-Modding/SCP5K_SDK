// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/RequestUserStatsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRequestUserStatsData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRequestUserStatsData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FRequestUserStatsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRequestUserStatsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestUserStatsData, Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestUserStatsData"), sizeof(FRequestUserStatsData), Get_Z_Construct_UScriptStruct_FRequestUserStatsData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRequestUserStatsData>()
{
	return FRequestUserStatsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRequestUserStatsData(FRequestUserStatsData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RequestUserStatsData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRequestUserStatsData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRequestUserStatsData()
	{
		UScriptStruct::DeferCppStructOps<FRequestUserStatsData>(FName(TEXT("RequestUserStatsData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRequestUserStatsData;
	struct Z_Construct_UScriptStruct_FRequestUserStatsData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RequestUserStatsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestUserStatsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestUserStatsData" },
		{ "ModuleRelativePath", "Public/RequestUserStatsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestUserStatsData, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestUserStatsData" },
		{ "ModuleRelativePath", "Public/RequestUserStatsData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestUserStatsData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestUserStatsData" },
		{ "ModuleRelativePath", "Public/RequestUserStatsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestUserStatsData, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RequestUserStatsData",
		sizeof(FRequestUserStatsData),
		alignof(FRequestUserStatsData),
		Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequestUserStatsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRequestUserStatsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RequestUserStatsData"), sizeof(FRequestUserStatsData), Get_Z_Construct_UScriptStruct_FRequestUserStatsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRequestUserStatsData_Hash() { return 1752738179U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
