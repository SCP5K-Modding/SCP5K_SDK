// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/DiscordLobbyDeleteEventDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordLobbyDeleteEventDelegate() {}
// Cross Module References
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics
	{
		struct _Script_DiscordLobby_eventDiscordLobbyDeleteEvent_Parms
		{
			int64 LobbyId;
			int64 Reason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordLobby_eventDiscordLobbyDeleteEvent_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordLobby_eventDiscordLobbyDeleteEvent_Parms, Reason), METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyDeleteEventDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordLobby, nullptr, "DiscordLobbyDeleteEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_DiscordLobby_eventDiscordLobbyDeleteEvent_Parms), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
