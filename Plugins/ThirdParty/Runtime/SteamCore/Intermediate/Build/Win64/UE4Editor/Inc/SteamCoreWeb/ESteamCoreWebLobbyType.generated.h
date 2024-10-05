// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREWEB_ESteamCoreWebLobbyType_generated_h
#error "ESteamCoreWebLobbyType.generated.h already included, missing '#pragma once' in ESteamCoreWebLobbyType.h"
#endif
#define STEAMCOREWEB_ESteamCoreWebLobbyType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_ESteamCoreWebLobbyType_h


#define FOREACH_ENUM_ESTEAMCOREWEBLOBBYTYPE(op) \
	op(ESteamCoreWebLobbyType::Private) \
	op(ESteamCoreWebLobbyType::FriendsOnly) \
	op(ESteamCoreWebLobbyType::TypePublic) \
	op(ESteamCoreWebLobbyType::TypeInvisible) 

enum class ESteamCoreWebLobbyType : uint8;
template<> STEAMCOREWEB_API UEnum* StaticEnum<ESteamCoreWebLobbyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
