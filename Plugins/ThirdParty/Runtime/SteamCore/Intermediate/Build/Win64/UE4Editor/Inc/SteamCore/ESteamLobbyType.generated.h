// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamLobbyType_generated_h
#error "ESteamLobbyType.generated.h already included, missing '#pragma once' in ESteamLobbyType.h"
#endif
#define STEAMCORE_ESteamLobbyType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamLobbyType_h


#define FOREACH_ENUM_ESTEAMLOBBYTYPE(op) \
	op(ESteamLobbyType::Private) \
	op(ESteamLobbyType::FriendsOnly) \
	op(ESteamLobbyType::Public) \
	op(ESteamLobbyType::Invisible) 

enum class ESteamLobbyType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
