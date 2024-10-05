// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamLeaderboardDisplayType_generated_h
#error "ESteamLeaderboardDisplayType.generated.h already included, missing '#pragma once' in ESteamLeaderboardDisplayType.h"
#endif
#define STEAMCORE_ESteamLeaderboardDisplayType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamLeaderboardDisplayType_h


#define FOREACH_ENUM_ESTEAMLEADERBOARDDISPLAYTYPE(op) \
	op(ESteamLeaderboardDisplayType::None) \
	op(ESteamLeaderboardDisplayType::Numeric) \
	op(ESteamLeaderboardDisplayType::TimeSeconds) \
	op(ESteamLeaderboardDisplayType::TimeMilliSeconds) 

enum class ESteamLeaderboardDisplayType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardDisplayType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
