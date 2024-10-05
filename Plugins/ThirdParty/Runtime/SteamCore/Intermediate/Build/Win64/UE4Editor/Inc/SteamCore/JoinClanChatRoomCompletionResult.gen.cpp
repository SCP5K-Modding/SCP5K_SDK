// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/JoinClanChatRoomCompletionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoinClanChatRoomCompletionResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse();
// End Cross Module References
class UScriptStruct* FJoinClanChatRoomCompletionResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("JoinClanChatRoomCompletionResult"), sizeof(FJoinClanChatRoomCompletionResult), Get_Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FJoinClanChatRoomCompletionResult>()
{
	return FJoinClanChatRoomCompletionResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJoinClanChatRoomCompletionResult(FJoinClanChatRoomCompletionResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("JoinClanChatRoomCompletionResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFJoinClanChatRoomCompletionResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFJoinClanChatRoomCompletionResult()
	{
		UScriptStruct::DeferCppStructOps<FJoinClanChatRoomCompletionResult>(FName(TEXT("JoinClanChatRoomCompletionResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFJoinClanChatRoomCompletionResult;
	struct Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDClanChat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatRoomEnterResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChatRoomEnterResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JoinClanChatRoomCompletionResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoinClanChatRoomCompletionResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewProp_SteamIDClanChat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JoinClanChatRoomCompletionResult" },
		{ "ModuleRelativePath", "Public/JoinClanChatRoomCompletionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoinClanChatRoomCompletionResult, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewProp_SteamIDClanChat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewProp_SteamIDClanChat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewProp_ChatRoomEnterResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JoinClanChatRoomCompletionResult" },
		{ "ModuleRelativePath", "Public/JoinClanChatRoomCompletionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoinClanChatRoomCompletionResult, ChatRoomEnterResponse), Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewProp_ChatRoomEnterResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewProp_ChatRoomEnterResponse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewProp_SteamIDClanChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewProp_ChatRoomEnterResponse_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::NewProp_ChatRoomEnterResponse,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"JoinClanChatRoomCompletionResult",
		sizeof(FJoinClanChatRoomCompletionResult),
		alignof(FJoinClanChatRoomCompletionResult),
		Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JoinClanChatRoomCompletionResult"), sizeof(FJoinClanChatRoomCompletionResult), Get_Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult_Hash() { return 1031129058U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
