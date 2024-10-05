// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordLobby_init() {}
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_LobbyEvent__DelegateSignature();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyResultEvent__DelegateSignature();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyMemberEvent__DelegateSignature();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyMessageEvent__DelegateSignature();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbySpeakingEvent__DelegateSignature();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyUpdateEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordLobby_LobbyEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyResultEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyMemberEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyMessageEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbySpeakingEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyUpdateEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/DiscordLobby",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4F1536A9,
				0x8B8FCE1D,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
