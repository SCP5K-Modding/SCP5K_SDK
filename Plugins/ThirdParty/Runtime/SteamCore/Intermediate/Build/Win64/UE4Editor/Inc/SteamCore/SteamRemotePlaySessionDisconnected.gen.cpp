// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamRemotePlaySessionDisconnected.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRemotePlaySessionDisconnected() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FSteamRemotePlaySessionDisconnected::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamRemotePlaySessionDisconnected"), sizeof(FSteamRemotePlaySessionDisconnected), Get_Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamRemotePlaySessionDisconnected>()
{
	return FSteamRemotePlaySessionDisconnected::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamRemotePlaySessionDisconnected(FSteamRemotePlaySessionDisconnected::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamRemotePlaySessionDisconnected"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamRemotePlaySessionDisconnected
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamRemotePlaySessionDisconnected()
	{
		UScriptStruct::DeferCppStructOps<FSteamRemotePlaySessionDisconnected>(FName(TEXT("SteamRemotePlaySessionDisconnected")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamRemotePlaySessionDisconnected;
	struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemotePlaySessionDisconnected.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamRemotePlaySessionDisconnected>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamRemotePlaySessionDisconnected" },
		{ "ModuleRelativePath", "Public/SteamRemotePlaySessionDisconnected.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamRemotePlaySessionDisconnected, SessionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamRemotePlaySessionDisconnected",
		sizeof(FSteamRemotePlaySessionDisconnected),
		alignof(FSteamRemotePlaySessionDisconnected),
		Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamRemotePlaySessionDisconnected"), sizeof(FSteamRemotePlaySessionDisconnected), Get_Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Hash() { return 4107691606U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
