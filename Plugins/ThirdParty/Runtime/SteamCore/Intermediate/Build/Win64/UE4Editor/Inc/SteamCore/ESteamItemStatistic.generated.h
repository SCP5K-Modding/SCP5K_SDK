// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamItemStatistic_generated_h
#error "ESteamItemStatistic.generated.h already included, missing '#pragma once' in ESteamItemStatistic.h"
#endif
#define STEAMCORE_ESteamItemStatistic_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamItemStatistic_h


#define FOREACH_ENUM_ESTEAMITEMSTATISTIC(op) \
	op(ESteamItemStatistic::NumSubscriptions) \
	op(ESteamItemStatistic::NumFavorites) \
	op(ESteamItemStatistic::NumFollowers) \
	op(ESteamItemStatistic::NumUniqueSubscriptions) \
	op(ESteamItemStatistic::NumUniqueFavorites) \
	op(ESteamItemStatistic::NumUniqueFollowers) \
	op(ESteamItemStatistic::NumUniqueWebsiteViews) \
	op(ESteamItemStatistic::ReportScore) \
	op(ESteamItemStatistic::NumSecondsPlayed) \
	op(ESteamItemStatistic::NumPlaytimeSessions) \
	op(ESteamItemStatistic::NumComments) \
	op(ESteamItemStatistic::NumSecondsPlayedDuringTimePeriod) \
	op(ESteamItemStatistic::NumPlaytimeSessionsDuringTimePeriod) 

enum class ESteamItemStatistic : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamItemStatistic>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
