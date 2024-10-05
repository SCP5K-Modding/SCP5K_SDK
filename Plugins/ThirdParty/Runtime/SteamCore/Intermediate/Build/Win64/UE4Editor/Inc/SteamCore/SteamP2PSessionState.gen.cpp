// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamP2PSessionState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamP2PSessionState() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamP2PSessionState();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamP2PSessionError();
// End Cross Module References
class UScriptStruct* FSteamP2PSessionState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamP2PSessionState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamP2PSessionState, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamP2PSessionState"), sizeof(FSteamP2PSessionState), Get_Z_Construct_UScriptStruct_FSteamP2PSessionState_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamP2PSessionState>()
{
	return FSteamP2PSessionState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamP2PSessionState(FSteamP2PSessionState::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamP2PSessionState"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamP2PSessionState
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamP2PSessionState()
	{
		UScriptStruct::DeferCppStructOps<FSteamP2PSessionState>(FName(TEXT("SteamP2PSessionState")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamP2PSessionState;
	struct Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConnectionActive_MetaData[];
#endif
		static void NewProp_bConnectionActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConnectionActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConnecting_MetaData[];
#endif
		static void NewProp_bConnecting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConnecting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_P2PSessionError_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2PSessionError_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_P2PSessionError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingRelay_MetaData[];
#endif
		static void NewProp_bUsingRelay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingRelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytesQueuedForSend_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesQueuedForSend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketsQueuedForSend_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PacketsQueuedForSend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoteIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemotePort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemotePort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamP2PSessionState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamP2PSessionState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamP2PSessionState" },
		{ "ModuleRelativePath", "Public/SteamP2PSessionState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive_SetBit(void* Obj)
	{
		((FSteamP2PSessionState*)Obj)->bConnectionActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive = { "bConnectionActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSteamP2PSessionState), &Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamP2PSessionState" },
		{ "ModuleRelativePath", "Public/SteamP2PSessionState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting_SetBit(void* Obj)
	{
		((FSteamP2PSessionState*)Obj)->bConnecting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting = { "bConnecting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSteamP2PSessionState), &Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamP2PSessionState" },
		{ "ModuleRelativePath", "Public/SteamP2PSessionState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError = { "P2PSessionError", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamP2PSessionState, P2PSessionError), Z_Construct_UEnum_SteamCore_ESteamP2PSessionError, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamP2PSessionState" },
		{ "ModuleRelativePath", "Public/SteamP2PSessionState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay_SetBit(void* Obj)
	{
		((FSteamP2PSessionState*)Obj)->bUsingRelay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay = { "bUsingRelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSteamP2PSessionState), &Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_BytesQueuedForSend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamP2PSessionState" },
		{ "ModuleRelativePath", "Public/SteamP2PSessionState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_BytesQueuedForSend = { "BytesQueuedForSend", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamP2PSessionState, BytesQueuedForSend), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_BytesQueuedForSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_BytesQueuedForSend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_PacketsQueuedForSend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamP2PSessionState" },
		{ "ModuleRelativePath", "Public/SteamP2PSessionState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_PacketsQueuedForSend = { "PacketsQueuedForSend", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamP2PSessionState, PacketsQueuedForSend), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_PacketsQueuedForSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_PacketsQueuedForSend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemoteIP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamP2PSessionState" },
		{ "ModuleRelativePath", "Public/SteamP2PSessionState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemoteIP = { "RemoteIP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamP2PSessionState, RemoteIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemoteIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemoteIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemotePort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamP2PSessionState" },
		{ "ModuleRelativePath", "Public/SteamP2PSessionState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemotePort = { "RemotePort", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamP2PSessionState, RemotePort), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemotePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemotePort_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_BytesQueuedForSend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_PacketsQueuedForSend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemoteIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemotePort,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamP2PSessionState",
		sizeof(FSteamP2PSessionState),
		alignof(FSteamP2PSessionState),
		Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamP2PSessionState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamP2PSessionState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamP2PSessionState"), sizeof(FSteamP2PSessionState), Get_Z_Construct_UScriptStruct_FSteamP2PSessionState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamP2PSessionState_Hash() { return 1194741338U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
