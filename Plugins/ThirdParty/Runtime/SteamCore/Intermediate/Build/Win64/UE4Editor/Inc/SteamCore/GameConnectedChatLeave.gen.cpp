// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GameConnectedChatLeave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameConnectedChatLeave() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameConnectedChatLeave();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FGameConnectedChatLeave::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGameConnectedChatLeave_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameConnectedChatLeave, Z_Construct_UPackage__Script_SteamCore(), TEXT("GameConnectedChatLeave"), sizeof(FGameConnectedChatLeave), Get_Z_Construct_UScriptStruct_FGameConnectedChatLeave_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameConnectedChatLeave>()
{
	return FGameConnectedChatLeave::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameConnectedChatLeave(FGameConnectedChatLeave::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GameConnectedChatLeave"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGameConnectedChatLeave
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGameConnectedChatLeave()
	{
		UScriptStruct::DeferCppStructOps<FGameConnectedChatLeave>(FName(TEXT("GameConnectedChatLeave")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGameConnectedChatLeave;
	struct Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDClanChat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKicked_MetaData[];
#endif
		static void NewProp_bKicked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDropped_MetaData[];
#endif
		static void NewProp_bDropped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDropped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameConnectedChatLeave.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameConnectedChatLeave>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_SteamIDClanChat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameConnectedChatLeave" },
		{ "ModuleRelativePath", "Public/GameConnectedChatLeave.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameConnectedChatLeave, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_SteamIDClanChat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_SteamIDClanChat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameConnectedChatLeave" },
		{ "ModuleRelativePath", "Public/GameConnectedChatLeave.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameConnectedChatLeave, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_SteamIDUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bKicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameConnectedChatLeave" },
		{ "ModuleRelativePath", "Public/GameConnectedChatLeave.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bKicked_SetBit(void* Obj)
	{
		((FGameConnectedChatLeave*)Obj)->bKicked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bKicked = { "bKicked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameConnectedChatLeave), &Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bKicked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bKicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bKicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bDropped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameConnectedChatLeave" },
		{ "ModuleRelativePath", "Public/GameConnectedChatLeave.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bDropped_SetBit(void* Obj)
	{
		((FGameConnectedChatLeave*)Obj)->bDropped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bDropped = { "bDropped", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameConnectedChatLeave), &Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bDropped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bDropped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_SteamIDClanChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bKicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::NewProp_bDropped,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameConnectedChatLeave",
		sizeof(FGameConnectedChatLeave),
		alignof(FGameConnectedChatLeave),
		Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameConnectedChatLeave()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameConnectedChatLeave_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameConnectedChatLeave"), sizeof(FGameConnectedChatLeave), Get_Z_Construct_UScriptStruct_FGameConnectedChatLeave_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameConnectedChatLeave_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameConnectedChatLeave_Hash() { return 1424759611U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
