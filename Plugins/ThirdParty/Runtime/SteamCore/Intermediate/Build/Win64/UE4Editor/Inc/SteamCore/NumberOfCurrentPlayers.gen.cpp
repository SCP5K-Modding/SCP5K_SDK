// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/NumberOfCurrentPlayers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberOfCurrentPlayers() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FNumberOfCurrentPlayers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, Z_Construct_UPackage__Script_SteamCore(), TEXT("NumberOfCurrentPlayers"), sizeof(FNumberOfCurrentPlayers), Get_Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FNumberOfCurrentPlayers>()
{
	return FNumberOfCurrentPlayers::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNumberOfCurrentPlayers(FNumberOfCurrentPlayers::StaticStruct, TEXT("/Script/SteamCore"), TEXT("NumberOfCurrentPlayers"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFNumberOfCurrentPlayers
{
	FScriptStruct_SteamCore_StaticRegisterNativesFNumberOfCurrentPlayers()
	{
		UScriptStruct::DeferCppStructOps<FNumberOfCurrentPlayers>(FName(TEXT("NumberOfCurrentPlayers")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFNumberOfCurrentPlayers;
	struct Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NumberOfCurrentPlayers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNumberOfCurrentPlayers>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NumberOfCurrentPlayers" },
		{ "ModuleRelativePath", "Public/NumberOfCurrentPlayers.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FNumberOfCurrentPlayers*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNumberOfCurrentPlayers), &Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NumberOfCurrentPlayers" },
		{ "ModuleRelativePath", "Public/NumberOfCurrentPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNumberOfCurrentPlayers, Players), METADATA_PARAMS(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"NumberOfCurrentPlayers",
		sizeof(FNumberOfCurrentPlayers),
		alignof(FNumberOfCurrentPlayers),
		Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NumberOfCurrentPlayers"), sizeof(FNumberOfCurrentPlayers), Get_Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Hash() { return 1737721204U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
