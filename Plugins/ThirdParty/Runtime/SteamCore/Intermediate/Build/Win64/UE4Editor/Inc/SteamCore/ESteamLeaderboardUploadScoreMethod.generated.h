// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamLeaderboardUploadScoreMethod_generated_h
#error "ESteamLeaderboardUploadScoreMethod.generated.h already included, missing '#pragma once' in ESteamLeaderboardUploadScoreMethod.h"
#endif
#define STEAMCORE_ESteamLeaderboardUploadScoreMethod_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamLeaderboardUploadScoreMethod_h


#define FOREACH_ENUM_ESTEAMLEADERBOARDUPLOADSCOREMETHOD(op) \
	op(ESteamLeaderboardUploadScoreMethod::None) \
	op(ESteamLeaderboardUploadScoreMethod::KeepBest) \
	op(ESteamLeaderboardUploadScoreMethod::ForceUpdate) 

enum class ESteamLeaderboardUploadScoreMethod : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardUploadScoreMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
