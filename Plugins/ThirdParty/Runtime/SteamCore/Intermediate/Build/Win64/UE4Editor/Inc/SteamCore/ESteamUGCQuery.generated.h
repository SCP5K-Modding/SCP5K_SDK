// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamUGCQuery_generated_h
#error "ESteamUGCQuery.generated.h already included, missing '#pragma once' in ESteamUGCQuery.h"
#endif
#define STEAMCORE_ESteamUGCQuery_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamUGCQuery_h


#define FOREACH_ENUM_ESTEAMUGCQUERY(op) \
	op(ESteamUGCQuery::RankedByVote) \
	op(ESteamUGCQuery::RankedByPublicationDate) \
	op(ESteamUGCQuery::AcceptedForGameRankedByAcceptanceDate) \
	op(ESteamUGCQuery::RankedByTrend) \
	op(ESteamUGCQuery::FavoritedByFriendsRankedByPublicationDate) \
	op(ESteamUGCQuery::CreatedByFriendsRankedByPublicationDate) \
	op(ESteamUGCQuery::RankedByNumTimesReported) \
	op(ESteamUGCQuery::CreatedByFollowedUsersRankedByPublicationDate) \
	op(ESteamUGCQuery::NotYetRated) \
	op(ESteamUGCQuery::RankedByTotalVotesAsc) \
	op(ESteamUGCQuery::RankedByVotesUp) \
	op(ESteamUGCQuery::RankedByTextSearch) \
	op(ESteamUGCQuery::RankedByTotalUniqueSubscriptions) \
	op(ESteamUGCQuery::RankedByPlaytimeTrend) \
	op(ESteamUGCQuery::RankedByTotalPlaytime) \
	op(ESteamUGCQuery::RankedByAveragePlaytimeTrend) \
	op(ESteamUGCQuery::RankedByLifetimeAveragePlaytime) \
	op(ESteamUGCQuery::RankedByPlaytimeSessionsTrend) \
	op(ESteamUGCQuery::RankedByLifetimePlaytimeSessions) 

enum class ESteamUGCQuery : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamUGCQuery>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
