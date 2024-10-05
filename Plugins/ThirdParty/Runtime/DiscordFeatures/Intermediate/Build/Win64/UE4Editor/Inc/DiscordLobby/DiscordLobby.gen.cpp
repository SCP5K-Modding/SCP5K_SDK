// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/DiscordLobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordLobby() {}
// Cross Module References
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobby();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
	DISCORDLOBBY_API UEnum* Z_Construct_UEnum_DiscordLobby_EDiscordLobbyType();
// End Cross Module References
class UScriptStruct* FDiscordLobby::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDLOBBY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordLobby_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordLobby, Z_Construct_UPackage__Script_DiscordLobby(), TEXT("DiscordLobby"), sizeof(FDiscordLobby), Get_Z_Construct_UScriptStruct_FDiscordLobby_Hash());
	}
	return Singleton;
}
template<> DISCORDLOBBY_API UScriptStruct* StaticStruct<FDiscordLobby>()
{
	return FDiscordLobby::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordLobby(FDiscordLobby::StaticStruct, TEXT("/Script/DiscordLobby"), TEXT("DiscordLobby"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordLobby_StaticRegisterNativesFDiscordLobby
{
	FScriptStruct_DiscordLobby_StaticRegisterNativesFDiscordLobby()
	{
		UScriptStruct::DeferCppStructOps<FDiscordLobby>(FName(TEXT("DiscordLobby")));
	}
} ScriptStruct_DiscordLobby_StaticRegisterNativesFDiscordLobby;
	struct Z_Construct_UScriptStruct_FDiscordLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_OwnerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Secret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Secret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Capacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordLobby_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordLobby.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordLobby>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobby" },
		{ "ModuleRelativePath", "Public/DiscordLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordLobby, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobby" },
		{ "ModuleRelativePath", "Public/DiscordLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordLobby, Type), Z_Construct_UEnum_DiscordLobby_EDiscordLobbyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_OwnerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobby" },
		{ "ModuleRelativePath", "Public/DiscordLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_OwnerId = { "OwnerId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordLobby, OwnerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_OwnerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_OwnerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Secret_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobby" },
		{ "ModuleRelativePath", "Public/DiscordLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Secret = { "Secret", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordLobby, Secret), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Secret_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Secret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Capacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobby" },
		{ "ModuleRelativePath", "Public/DiscordLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordLobby, Capacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Capacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Capacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_bLocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobby" },
		{ "ModuleRelativePath", "Public/DiscordLobby.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((FDiscordLobby*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordLobby), &Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_bLocked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_OwnerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Secret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_Capacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordLobby_Statics::NewProp_bLocked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordLobby_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordLobby,
		nullptr,
		&NewStructOps,
		"DiscordLobby",
		sizeof(FDiscordLobby),
		alignof(FDiscordLobby),
		Z_Construct_UScriptStruct_FDiscordLobby_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordLobby_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordLobby_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordLobby_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobby()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordLobby_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordLobby();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordLobby"), sizeof(FDiscordLobby), Get_Z_Construct_UScriptStruct_FDiscordLobby_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordLobby_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordLobby_Hash() { return 2790339669U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
