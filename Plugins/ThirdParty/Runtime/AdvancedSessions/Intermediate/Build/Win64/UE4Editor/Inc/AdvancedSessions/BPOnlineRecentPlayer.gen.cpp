// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/BPOnlineRecentPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPOnlineRecentPlayer() {}
// Cross Module References
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineUser();
// End Cross Module References

static_assert(std::is_polymorphic<FBPOnlineRecentPlayer>() == std::is_polymorphic<FBPOnlineUser>(), "USTRUCT FBPOnlineRecentPlayer cannot be polymorphic unless super FBPOnlineUser is polymorphic");

class UScriptStruct* FBPOnlineRecentPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPOnlineRecentPlayer"), sizeof(FBPOnlineRecentPlayer), Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FBPOnlineRecentPlayer>()
{
	return FBPOnlineRecentPlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOnlineRecentPlayer(FBPOnlineRecentPlayer::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPOnlineRecentPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineRecentPlayer
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineRecentPlayer()
	{
		UScriptStruct::DeferCppStructOps<FBPOnlineRecentPlayer>(FName(TEXT("BPOnlineRecentPlayer")));
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineRecentPlayer;
	struct Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSeen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastSeen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPOnlineRecentPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOnlineRecentPlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::NewProp_LastSeen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPOnlineRecentPlayer" },
		{ "ModuleRelativePath", "Public/BPOnlineRecentPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::NewProp_LastSeen = { "LastSeen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOnlineRecentPlayer, LastSeen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::NewProp_LastSeen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::NewProp_LastSeen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::NewProp_LastSeen,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		Z_Construct_UScriptStruct_FBPOnlineUser,
		&NewStructOps,
		"BPOnlineRecentPlayer",
		sizeof(FBPOnlineRecentPlayer),
		alignof(FBPOnlineRecentPlayer),
		Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOnlineRecentPlayer"), sizeof(FBPOnlineRecentPlayer), Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Hash() { return 1260150004U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
