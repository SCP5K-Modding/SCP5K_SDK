// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamLobbyDistanceFilter_generated_h
#error "ESteamLobbyDistanceFilter.generated.h already included, missing '#pragma once' in ESteamLobbyDistanceFilter.h"
#endif
#define STEAMCORE_ESteamLobbyDistanceFilter_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamLobbyDistanceFilter_h


#define FOREACH_ENUM_ESTEAMLOBBYDISTANCEFILTER(op) \
	op(ESteamLobbyDistanceFilter::Close) \
	op(ESteamLobbyDistanceFilter::Default) \
	op(ESteamLobbyDistanceFilter::Far) \
	op(ESteamLobbyDistanceFilter::Worldwide) 

enum class ESteamLobbyDistanceFilter : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyDistanceFilter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
