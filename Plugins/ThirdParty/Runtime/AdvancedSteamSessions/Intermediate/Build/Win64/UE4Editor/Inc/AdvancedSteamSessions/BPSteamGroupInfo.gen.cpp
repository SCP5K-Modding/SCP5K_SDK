// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Public/BPSteamGroupInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPSteamGroupInfo() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupInfo();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
// End Cross Module References
class UScriptStruct* FBPSteamGroupInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSTEAMSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSteamGroupInfo, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("BPSteamGroupInfo"), sizeof(FBPSteamGroupInfo), Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSTEAMSESSIONS_API UScriptStruct* StaticStruct<FBPSteamGroupInfo>()
{
	return FBPSteamGroupInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPSteamGroupInfo(FBPSteamGroupInfo::StaticStruct, TEXT("/Script/AdvancedSteamSessions"), TEXT("BPSteamGroupInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupInfo
{
	FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupInfo()
	{
		UScriptStruct::DeferCppStructOps<FBPSteamGroupInfo>(FName(TEXT("BPSteamGroupInfo")));
	}
} ScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupInfo;
	struct Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numOnline_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numOnline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numInGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numChatting_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numChatting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPSteamGroupInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPSteamGroupInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamGroupInfo" },
		{ "ModuleRelativePath", "Public/BPSteamGroupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupID = { "GroupID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamGroupInfo, GroupID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamGroupInfo" },
		{ "ModuleRelativePath", "Public/BPSteamGroupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamGroupInfo, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamGroupInfo" },
		{ "ModuleRelativePath", "Public/BPSteamGroupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupTag = { "GroupTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamGroupInfo, GroupTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numOnline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamGroupInfo" },
		{ "ModuleRelativePath", "Public/BPSteamGroupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numOnline = { "numOnline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamGroupInfo, numOnline), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numOnline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numInGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamGroupInfo" },
		{ "ModuleRelativePath", "Public/BPSteamGroupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numInGame = { "numInGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamGroupInfo, numInGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numChatting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamGroupInfo" },
		{ "ModuleRelativePath", "Public/BPSteamGroupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numChatting = { "numChatting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamGroupInfo, numChatting), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numChatting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numChatting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_GroupTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::NewProp_numChatting,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
		nullptr,
		&NewStructOps,
		"BPSteamGroupInfo",
		sizeof(FBPSteamGroupInfo),
		alignof(FBPSteamGroupInfo),
		Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPSteamGroupInfo"), sizeof(FBPSteamGroupInfo), Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPSteamGroupInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_Hash() { return 748130835U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
