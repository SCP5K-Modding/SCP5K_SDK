// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GameServerChangeRequested.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameServerChangeRequested() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerChangeRequested();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FGameServerChangeRequested::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGameServerChangeRequested_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameServerChangeRequested, Z_Construct_UPackage__Script_SteamCore(), TEXT("GameServerChangeRequested"), sizeof(FGameServerChangeRequested), Get_Z_Construct_UScriptStruct_FGameServerChangeRequested_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameServerChangeRequested>()
{
	return FGameServerChangeRequested::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameServerChangeRequested(FGameServerChangeRequested::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GameServerChangeRequested"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGameServerChangeRequested
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGameServerChangeRequested()
	{
		UScriptStruct::DeferCppStructOps<FGameServerChangeRequested>(FName(TEXT("GameServerChangeRequested")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGameServerChangeRequested;
	struct Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Server_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Server;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameServerChangeRequested.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameServerChangeRequested>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::NewProp_Server_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerChangeRequested" },
		{ "ModuleRelativePath", "Public/GameServerChangeRequested.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::NewProp_Server = { "Server", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerChangeRequested, Server), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::NewProp_Server_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::NewProp_Server_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::NewProp_Password_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerChangeRequested" },
		{ "ModuleRelativePath", "Public/GameServerChangeRequested.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerChangeRequested, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::NewProp_Server,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::NewProp_Password,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameServerChangeRequested",
		sizeof(FGameServerChangeRequested),
		alignof(FGameServerChangeRequested),
		Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameServerChangeRequested()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameServerChangeRequested_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameServerChangeRequested"), sizeof(FGameServerChangeRequested), Get_Z_Construct_UScriptStruct_FGameServerChangeRequested_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameServerChangeRequested_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameServerChangeRequested_Hash() { return 3506006035U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
