// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/FavoritesListChanged.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFavoritesListChanged() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListChanged();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FFavoritesListChanged::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FFavoritesListChanged_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFavoritesListChanged, Z_Construct_UPackage__Script_SteamCore(), TEXT("FavoritesListChanged"), sizeof(FFavoritesListChanged), Get_Z_Construct_UScriptStruct_FFavoritesListChanged_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FFavoritesListChanged>()
{
	return FFavoritesListChanged::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFavoritesListChanged(FFavoritesListChanged::StaticStruct, TEXT("/Script/SteamCore"), TEXT("FavoritesListChanged"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFFavoritesListChanged
{
	FScriptStruct_SteamCore_StaticRegisterNativesFFavoritesListChanged()
	{
		UScriptStruct::DeferCppStructOps<FFavoritesListChanged>(FName(TEXT("FavoritesListChanged")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFFavoritesListChanged;
	struct Z_Construct_UScriptStruct_FFavoritesListChanged_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdd_MetaData[];
#endif
		static void NewProp_bAdd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FavoritesListChanged.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFavoritesListChanged>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FavoritesListChanged" },
		{ "ModuleRelativePath", "Public/FavoritesListChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListChanged, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FavoritesListChanged" },
		{ "ModuleRelativePath", "Public/FavoritesListChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListChanged, QueryPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FavoritesListChanged" },
		{ "ModuleRelativePath", "Public/FavoritesListChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListChanged, ConnectionPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FavoritesListChanged" },
		{ "ModuleRelativePath", "Public/FavoritesListChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListChanged, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FavoritesListChanged" },
		{ "ModuleRelativePath", "Public/FavoritesListChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListChanged, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FavoritesListChanged" },
		{ "ModuleRelativePath", "Public/FavoritesListChanged.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_SetBit(void* Obj)
	{
		((FFavoritesListChanged*)Obj)->bAdd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd = { "bAdd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFavoritesListChanged), &Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FavoritesListChanged" },
		{ "ModuleRelativePath", "Public/FavoritesListChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListChanged, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"FavoritesListChanged",
		sizeof(FFavoritesListChanged),
		alignof(FFavoritesListChanged),
		Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListChanged()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFavoritesListChanged_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FavoritesListChanged"), sizeof(FFavoritesListChanged), Get_Z_Construct_UScriptStruct_FFavoritesListChanged_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFavoritesListChanged_Hash() { return 439213344U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
