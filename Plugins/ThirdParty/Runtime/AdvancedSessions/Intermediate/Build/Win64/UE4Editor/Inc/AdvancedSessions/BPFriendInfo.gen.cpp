// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/BPFriendInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPFriendInfo() {}
// Cross Module References
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPFriendInfo();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPFriendPresenceInfo();
// End Cross Module References
class UScriptStruct* FBPFriendInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPFriendInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPFriendInfo, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPFriendInfo"), sizeof(FBPFriendInfo), Get_Z_Construct_UScriptStruct_FBPFriendInfo_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FBPFriendInfo>()
{
	return FBPFriendInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPFriendInfo(FBPFriendInfo::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPFriendInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendInfo
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendInfo()
	{
		UScriptStruct::DeferCppStructOps<FBPFriendInfo>(FName(TEXT("BPFriendInfo")));
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendInfo;
	struct Z_Construct_UScriptStruct_FBPFriendInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RealName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnlineState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnlineState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingSameGame_MetaData[];
#endif
		static void NewProp_bIsPlayingSameGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingSameGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PresenceInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPFriendInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPFriendInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendInfo" },
		{ "ModuleRelativePath", "Public/BPFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_RealName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendInfo" },
		{ "ModuleRelativePath", "Public/BPFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_RealName = { "RealName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendInfo, RealName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_RealName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_RealName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendInfo" },
		{ "ModuleRelativePath", "Public/BPFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState = { "OnlineState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendInfo, OnlineState), Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendInfo" },
		{ "ModuleRelativePath", "Public/BPFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendInfo, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_UniqueNetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendInfo" },
		{ "ModuleRelativePath", "Public/BPFriendInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame_SetBit(void* Obj)
	{
		((FBPFriendInfo*)Obj)->bIsPlayingSameGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame = { "bIsPlayingSameGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPFriendInfo), &Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_PresenceInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPFriendInfo" },
		{ "ModuleRelativePath", "Public/BPFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_PresenceInfo = { "PresenceInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendInfo, PresenceInfo), Z_Construct_UScriptStruct_FBPFriendPresenceInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_PresenceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_PresenceInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPFriendInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_RealName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_PresenceInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		nullptr,
		&NewStructOps,
		"BPFriendInfo",
		sizeof(FBPFriendInfo),
		alignof(FBPFriendInfo),
		Z_Construct_UScriptStruct_FBPFriendInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPFriendInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPFriendInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPFriendInfo"), sizeof(FBPFriendInfo), Get_Z_Construct_UScriptStruct_FBPFriendInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPFriendInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPFriendInfo_Hash() { return 1874125934U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
