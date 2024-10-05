// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/LobbyEnterData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyEnterData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyEnterData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse();
// End Cross Module References
class UScriptStruct* FLobbyEnterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyEnterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyEnterData, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyEnterData"), sizeof(FLobbyEnterData), Get_Z_Construct_UScriptStruct_FLobbyEnterData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyEnterData>()
{
	return FLobbyEnterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyEnterData(FLobbyEnterData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyEnterData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyEnterData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyEnterData()
	{
		UScriptStruct::DeferCppStructOps<FLobbyEnterData>(FName(TEXT("LobbyEnterData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyEnterData;
	struct Z_Construct_UScriptStruct_FLobbyEnterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatRoomEnterResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChatRoomEnterResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LobbyEnterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyEnterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyEnterData" },
		{ "ModuleRelativePath", "Public/LobbyEnterData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyEnterData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyEnterData" },
		{ "ModuleRelativePath", "Public/LobbyEnterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((FLobbyEnterData*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLobbyEnterData), &Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyEnterData" },
		{ "ModuleRelativePath", "Public/LobbyEnterData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyEnterData, ChatRoomEnterResponse), Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyEnterData",
		sizeof(FLobbyEnterData),
		alignof(FLobbyEnterData),
		Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyEnterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyEnterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyEnterData"), sizeof(FLobbyEnterData), Get_Z_Construct_UScriptStruct_FLobbyEnterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyEnterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyEnterData_Hash() { return 3585594616U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
