// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamAccountType_generated_h
#error "ESteamAccountType.generated.h already included, missing '#pragma once' in ESteamAccountType.h"
#endif
#define STEAMCORE_ESteamAccountType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamAccountType_h


#define FOREACH_ENUM_ESTEAMACCOUNTTYPE(op) \
	op(ESteamAccountType::Invalid) \
	op(ESteamAccountType::Individual) \
	op(ESteamAccountType::Multiseat) \
	op(ESteamAccountType::GameServer) \
	op(ESteamAccountType::AnonGameServer) \
	op(ESteamAccountType::Pending) \
	op(ESteamAccountType::ContentServer) \
	op(ESteamAccountType::Clan) \
	op(ESteamAccountType::Chat) \
	op(ESteamAccountType::ConsoleUser) \
	op(ESteamAccountType::AnonUser) \
	op(ESteamAccountType::Max) 

enum class ESteamAccountType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamAccountType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
