// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/BPFriendPresenceInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPFriendPresenceInfo() {}
// Cross Module References
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPFriendPresenceInfo();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState();
// End Cross Module References
class UScriptStruct* FBPFriendPresenceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPFriendPresenceInfo, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPFriendPresenceInfo"), sizeof(FBPFriendPresenceInfo), Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FBPFriendPresenceInfo>()
{
	return FBPFriendPresenceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPFriendPresenceInfo(FBPFriendPresenceInfo::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPFriendPresenceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendPresenceInfo
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendPresenceInfo()
	{
		UScriptStruct::DeferCppStructOps<FBPFriendPresenceInfo>(FName(TEXT("BPFriendPresenceInfo")));
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendPresenceInfo;
	struct Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOnline_MetaData[];
#endif
		static void NewProp_bIsOnline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[];
#endif
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingThisGame_MetaData[];
#endif
		static void NewProp_bIsPlayingThisGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingThisGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsJoinable_MetaData[];
#endif
		static void NewProp_bIsJoinable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJoinable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasVoiceSupport_MetaData[];
#endif
		static void NewProp_bHasVoiceSupport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasVoiceSupport;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PresenceState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PresenceState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatusString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPFriendPresenceInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPFriendPresenceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendPresenceInfo" },
		{ "ModuleRelativePath", "Public/BPFriendPresenceInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline_SetBit(void* Obj)
	{
		((FBPFriendPresenceInfo*)Obj)->bIsOnline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline = { "bIsOnline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPFriendPresenceInfo), &Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendPresenceInfo" },
		{ "ModuleRelativePath", "Public/BPFriendPresenceInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((FBPFriendPresenceInfo*)Obj)->bIsPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPFriendPresenceInfo), &Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendPresenceInfo" },
		{ "ModuleRelativePath", "Public/BPFriendPresenceInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame_SetBit(void* Obj)
	{
		((FBPFriendPresenceInfo*)Obj)->bIsPlayingThisGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame = { "bIsPlayingThisGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPFriendPresenceInfo), &Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendPresenceInfo" },
		{ "ModuleRelativePath", "Public/BPFriendPresenceInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable_SetBit(void* Obj)
	{
		((FBPFriendPresenceInfo*)Obj)->bIsJoinable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable = { "bIsJoinable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPFriendPresenceInfo), &Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendPresenceInfo" },
		{ "ModuleRelativePath", "Public/BPFriendPresenceInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport_SetBit(void* Obj)
	{
		((FBPFriendPresenceInfo*)Obj)->bHasVoiceSupport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport = { "bHasVoiceSupport", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPFriendPresenceInfo), &Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendPresenceInfo" },
		{ "ModuleRelativePath", "Public/BPFriendPresenceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState = { "PresenceState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendPresenceInfo, PresenceState), Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_StatusString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendPresenceInfo" },
		{ "ModuleRelativePath", "Public/BPFriendPresenceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_StatusString = { "StatusString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendPresenceInfo, StatusString), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_StatusString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_StatusString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_StatusString,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		nullptr,
		&NewStructOps,
		"BPFriendPresenceInfo",
		sizeof(FBPFriendPresenceInfo),
		alignof(FBPFriendPresenceInfo),
		Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPFriendPresenceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPFriendPresenceInfo"), sizeof(FBPFriendPresenceInfo), Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Hash() { return 218143017U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
