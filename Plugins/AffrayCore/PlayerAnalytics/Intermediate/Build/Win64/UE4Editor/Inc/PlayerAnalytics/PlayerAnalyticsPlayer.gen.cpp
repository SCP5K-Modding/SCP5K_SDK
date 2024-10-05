// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerAnalytics/Public/PlayerAnalyticsPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnalyticsPlayer() {}
// Cross Module References
	PLAYERANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer();
	UPackage* Z_Construct_UPackage__Script_PlayerAnalytics();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	PLAYERANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsEvent();
// End Cross Module References
class UScriptStruct* FPlayerAnalyticsPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYERANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer, Z_Construct_UPackage__Script_PlayerAnalytics(), TEXT("PlayerAnalyticsPlayer"), sizeof(FPlayerAnalyticsPlayer), Get_Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Hash());
	}
	return Singleton;
}
template<> PLAYERANALYTICS_API UScriptStruct* StaticStruct<FPlayerAnalyticsPlayer>()
{
	return FPlayerAnalyticsPlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerAnalyticsPlayer(FPlayerAnalyticsPlayer::StaticStruct, TEXT("/Script/PlayerAnalytics"), TEXT("PlayerAnalyticsPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_PlayerAnalytics_StaticRegisterNativesFPlayerAnalyticsPlayer
{
	FScriptStruct_PlayerAnalytics_StaticRegisterNativesFPlayerAnalyticsPlayer()
	{
		UScriptStruct::DeferCppStructOps<FPlayerAnalyticsPlayer>(FName(TEXT("PlayerAnalyticsPlayer")));
	}
} ScriptStruct_PlayerAnalytics_StaticRegisterNativesFPlayerAnalyticsPlayer;
	struct Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerAnalyticsPlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsPlayer" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0090000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsPlayer, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsPlayer" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0090000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsPlayer, UniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_UniqueNetId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerAnalyticsEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_Events_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsPlayer" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsPlayer, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::NewProp_Events,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerAnalytics,
		nullptr,
		&NewStructOps,
		"PlayerAnalyticsPlayer",
		sizeof(FPlayerAnalyticsPlayer),
		alignof(FPlayerAnalyticsPlayer),
		Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayerAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerAnalyticsPlayer"), sizeof(FPlayerAnalyticsPlayer), Get_Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer_Hash() { return 613761260U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
