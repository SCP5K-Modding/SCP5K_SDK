// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamLeaderboardDataRequest_generated_h
#error "ESteamLeaderboardDataRequest.generated.h already included, missing '#pragma once' in ESteamLeaderboardDataRequest.h"
#endif
#define STEAMCORE_ESteamLeaderboardDataRequest_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamLeaderboardDataRequest_h


#define FOREACH_ENUM_ESTEAMLEADERBOARDDATAREQUEST(op) \
	op(ESteamLeaderboardDataRequest::Global) \
	op(ESteamLeaderboardDataRequest::GlobalAroundUser) \
	op(ESteamLeaderboardDataRequest::Friends) \
	op(ESteamLeaderboardDataRequest::Users) 

enum class ESteamLeaderboardDataRequest : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardDataRequest>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
