// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/LobbyDataUpdate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyDataUpdate() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyDataUpdate();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FLobbyDataUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyDataUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyDataUpdate, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyDataUpdate"), sizeof(FLobbyDataUpdate), Get_Z_Construct_UScriptStruct_FLobbyDataUpdate_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyDataUpdate>()
{
	return FLobbyDataUpdate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyDataUpdate(FLobbyDataUpdate::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyDataUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyDataUpdate
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyDataUpdate()
	{
		UScriptStruct::DeferCppStructOps<FLobbyDataUpdate>(FName(TEXT("LobbyDataUpdate")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyDataUpdate;
	struct Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LobbyDataUpdate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyDataUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyDataUpdate" },
		{ "ModuleRelativePath", "Public/LobbyDataUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyDataUpdate, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyDataUpdate" },
		{ "ModuleRelativePath", "Public/LobbyDataUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember = { "SteamIDMember", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyDataUpdate, SteamIDMember), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyDataUpdate" },
		{ "ModuleRelativePath", "Public/LobbyDataUpdate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FLobbyDataUpdate*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLobbyDataUpdate), &Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyDataUpdate",
		sizeof(FLobbyDataUpdate),
		alignof(FLobbyDataUpdate),
		Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyDataUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyDataUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyDataUpdate"), sizeof(FLobbyDataUpdate), Get_Z_Construct_UScriptStruct_FLobbyDataUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyDataUpdate_Hash() { return 3461603936U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
