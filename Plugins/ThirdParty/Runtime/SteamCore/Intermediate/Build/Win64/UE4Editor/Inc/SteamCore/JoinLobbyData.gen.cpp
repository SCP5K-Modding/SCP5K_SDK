// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/JoinLobbyData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoinLobbyData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse();
// End Cross Module References
class UScriptStruct* FJoinLobbyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FJoinLobbyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoinLobbyData, Z_Construct_UPackage__Script_SteamCore(), TEXT("JoinLobbyData"), sizeof(FJoinLobbyData), Get_Z_Construct_UScriptStruct_FJoinLobbyData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FJoinLobbyData>()
{
	return FJoinLobbyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJoinLobbyData(FJoinLobbyData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("JoinLobbyData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFJoinLobbyData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFJoinLobbyData()
	{
		UScriptStruct::DeferCppStructOps<FJoinLobbyData>(FName(TEXT("JoinLobbyData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFJoinLobbyData;
	struct Z_Construct_UScriptStruct_FJoinLobbyData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JoinLobbyData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoinLobbyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JoinLobbyData" },
		{ "ModuleRelativePath", "Public/JoinLobbyData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoinLobbyData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JoinLobbyData" },
		{ "ModuleRelativePath", "Public/JoinLobbyData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((FJoinLobbyData*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJoinLobbyData), &Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JoinLobbyData" },
		{ "ModuleRelativePath", "Public/JoinLobbyData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoinLobbyData, ChatRoomEnterResponse), Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"JoinLobbyData",
		sizeof(FJoinLobbyData),
		alignof(FJoinLobbyData),
		Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJoinLobbyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JoinLobbyData"), sizeof(FJoinLobbyData), Get_Z_Construct_UScriptStruct_FJoinLobbyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJoinLobbyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJoinLobbyData_Hash() { return 481950888U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
