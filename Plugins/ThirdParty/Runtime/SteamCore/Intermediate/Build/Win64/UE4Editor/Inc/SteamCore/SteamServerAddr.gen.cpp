// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamServerAddr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamServerAddr() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FSteamServerAddr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamServerAddr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServerAddr, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamServerAddr"), sizeof(FSteamServerAddr), Get_Z_Construct_UScriptStruct_FSteamServerAddr_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamServerAddr>()
{
	return FSteamServerAddr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamServerAddr(FSteamServerAddr::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamServerAddr"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamServerAddr
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamServerAddr()
	{
		UScriptStruct::DeferCppStructOps<FSteamServerAddr>(FName(TEXT("SteamServerAddr")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamServerAddr;
	struct Z_Construct_UScriptStruct_FSteamServerAddr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionAddressString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionAddressString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamP2PAddr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamP2PAddr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamServerAddr.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServerAddr>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamServerAddr" },
		{ "ModuleRelativePath", "Public/SteamServerAddr.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServerAddr, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamServerAddr" },
		{ "ModuleRelativePath", "Public/SteamServerAddr.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServerAddr, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamServerAddr" },
		{ "ModuleRelativePath", "Public/SteamServerAddr.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServerAddr, QueryPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamServerAddr" },
		{ "ModuleRelativePath", "Public/SteamServerAddr.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString = { "ConnectionAddressString", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServerAddr, ConnectionAddressString), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamServerAddr" },
		{ "ModuleRelativePath", "Public/SteamServerAddr.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr = { "SteamP2PAddr", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServerAddr, SteamP2PAddr), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamServerAddr",
		sizeof(FSteamServerAddr),
		alignof(FSteamServerAddr),
		Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamServerAddr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamServerAddr"), sizeof(FSteamServerAddr), Get_Z_Construct_UScriptStruct_FSteamServerAddr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamServerAddr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamServerAddr_Hash() { return 1086125753U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
