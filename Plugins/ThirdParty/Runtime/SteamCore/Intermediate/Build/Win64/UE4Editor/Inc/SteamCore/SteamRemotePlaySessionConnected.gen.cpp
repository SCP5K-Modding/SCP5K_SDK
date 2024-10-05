// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamRemotePlaySessionConnected.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRemotePlaySessionConnected() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FSteamRemotePlaySessionConnected::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamRemotePlaySessionConnected"), sizeof(FSteamRemotePlaySessionConnected), Get_Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamRemotePlaySessionConnected>()
{
	return FSteamRemotePlaySessionConnected::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamRemotePlaySessionConnected(FSteamRemotePlaySessionConnected::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamRemotePlaySessionConnected"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamRemotePlaySessionConnected
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamRemotePlaySessionConnected()
	{
		UScriptStruct::DeferCppStructOps<FSteamRemotePlaySessionConnected>(FName(TEXT("SteamRemotePlaySessionConnected")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamRemotePlaySessionConnected;
	struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemotePlaySessionConnected.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamRemotePlaySessionConnected>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamRemotePlaySessionConnected" },
		{ "ModuleRelativePath", "Public/SteamRemotePlaySessionConnected.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamRemotePlaySessionConnected, SessionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamRemotePlaySessionConnected",
		sizeof(FSteamRemotePlaySessionConnected),
		alignof(FSteamRemotePlaySessionConnected),
		Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamRemotePlaySessionConnected"), sizeof(FSteamRemotePlaySessionConnected), Get_Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Hash() { return 2877599537U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
