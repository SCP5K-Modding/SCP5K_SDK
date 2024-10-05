// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerAnalytics/Public/PlayerAnalyticsSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnalyticsSession() {}
// Cross Module References
	PLAYERANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsSession();
	UPackage* Z_Construct_UPackage__Script_PlayerAnalytics();
	PLAYERANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer();
	PLAYERANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FPlayerAnalyticsSession::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYERANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerAnalyticsSession, Z_Construct_UPackage__Script_PlayerAnalytics(), TEXT("PlayerAnalyticsSession"), sizeof(FPlayerAnalyticsSession), Get_Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Hash());
	}
	return Singleton;
}
template<> PLAYERANALYTICS_API UScriptStruct* StaticStruct<FPlayerAnalyticsSession>()
{
	return FPlayerAnalyticsSession::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerAnalyticsSession(FPlayerAnalyticsSession::StaticStruct, TEXT("/Script/PlayerAnalytics"), TEXT("PlayerAnalyticsSession"), false, nullptr, nullptr);
static struct FScriptStruct_PlayerAnalytics_StaticRegisterNativesFPlayerAnalyticsSession
{
	FScriptStruct_PlayerAnalytics_StaticRegisterNativesFPlayerAnalyticsSession()
	{
		UScriptStruct::DeferCppStructOps<FPlayerAnalyticsSession>(FName(TEXT("PlayerAnalyticsSession")));
	}
} ScriptStruct_PlayerAnalytics_StaticRegisterNativesFPlayerAnalyticsSession;
	struct Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordingStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordingStartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSession.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerAnalyticsSession>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_MapName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsSession" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsSession, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_MapName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerAnalyticsPlayer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_Players_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsSession" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSession.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsSession, Players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_GlobalEvents_Inner = { "GlobalEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerAnalyticsEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_GlobalEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsSession" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSession.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_GlobalEvents = { "GlobalEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsSession, GlobalEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_GlobalEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_GlobalEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_RecordingStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsSession" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_RecordingStartTime = { "RecordingStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsSession, RecordingStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_RecordingStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_RecordingStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_GlobalEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_GlobalEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::NewProp_RecordingStartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerAnalytics,
		nullptr,
		&NewStructOps,
		"PlayerAnalyticsSession",
		sizeof(FPlayerAnalyticsSession),
		alignof(FPlayerAnalyticsSession),
		Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsSession()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayerAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerAnalyticsSession"), sizeof(FPlayerAnalyticsSession), Get_Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerAnalyticsSession_Hash() { return 963123485U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
