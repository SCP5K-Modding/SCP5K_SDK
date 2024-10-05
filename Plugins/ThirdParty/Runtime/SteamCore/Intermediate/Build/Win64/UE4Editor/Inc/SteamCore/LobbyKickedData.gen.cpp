// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/LobbyKickedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyKickedData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyKickedData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FLobbyKickedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyKickedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyKickedData, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyKickedData"), sizeof(FLobbyKickedData), Get_Z_Construct_UScriptStruct_FLobbyKickedData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyKickedData>()
{
	return FLobbyKickedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyKickedData(FLobbyKickedData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyKickedData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyKickedData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyKickedData()
	{
		UScriptStruct::DeferCppStructOps<FLobbyKickedData>(FName(TEXT("LobbyKickedData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyKickedData;
	struct Z_Construct_UScriptStruct_FLobbyKickedData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDAdmin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDAdmin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKickedDueToDisconnect_MetaData[];
#endif
		static void NewProp_bKickedDueToDisconnect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKickedDueToDisconnect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LobbyKickedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyKickedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyKickedData" },
		{ "ModuleRelativePath", "Public/LobbyKickedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyKickedData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyKickedData" },
		{ "ModuleRelativePath", "Public/LobbyKickedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin = { "SteamIDAdmin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyKickedData, SteamIDAdmin), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyKickedData" },
		{ "ModuleRelativePath", "Public/LobbyKickedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_SetBit(void* Obj)
	{
		((FLobbyKickedData*)Obj)->bKickedDueToDisconnect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect = { "bKickedDueToDisconnect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLobbyKickedData), &Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyKickedData",
		sizeof(FLobbyKickedData),
		alignof(FLobbyKickedData),
		Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyKickedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyKickedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyKickedData"), sizeof(FLobbyKickedData), Get_Z_Construct_UScriptStruct_FLobbyKickedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyKickedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyKickedData_Hash() { return 4170088429U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
