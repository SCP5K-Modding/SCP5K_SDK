// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/FriendRichPresenceUpdate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendRichPresenceUpdate() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFriendRichPresenceUpdate();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FFriendRichPresenceUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendRichPresenceUpdate, Z_Construct_UPackage__Script_SteamCore(), TEXT("FriendRichPresenceUpdate"), sizeof(FFriendRichPresenceUpdate), Get_Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FFriendRichPresenceUpdate>()
{
	return FFriendRichPresenceUpdate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFriendRichPresenceUpdate(FFriendRichPresenceUpdate::StaticStruct, TEXT("/Script/SteamCore"), TEXT("FriendRichPresenceUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFFriendRichPresenceUpdate
{
	FScriptStruct_SteamCore_StaticRegisterNativesFFriendRichPresenceUpdate()
	{
		UScriptStruct::DeferCppStructOps<FFriendRichPresenceUpdate>(FName(TEXT("FriendRichPresenceUpdate")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFFriendRichPresenceUpdate;
	struct Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDFriend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FriendRichPresenceUpdate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendRichPresenceUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::NewProp_SteamIDFriend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FriendRichPresenceUpdate" },
		{ "ModuleRelativePath", "Public/FriendRichPresenceUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendRichPresenceUpdate, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::NewProp_SteamIDFriend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::NewProp_SteamIDFriend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::NewProp_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FriendRichPresenceUpdate" },
		{ "ModuleRelativePath", "Public/FriendRichPresenceUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendRichPresenceUpdate, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::NewProp_AppID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::NewProp_AppID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"FriendRichPresenceUpdate",
		sizeof(FFriendRichPresenceUpdate),
		alignof(FFriendRichPresenceUpdate),
		Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendRichPresenceUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FriendRichPresenceUpdate"), sizeof(FFriendRichPresenceUpdate), Get_Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFriendRichPresenceUpdate_Hash() { return 4015459708U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
