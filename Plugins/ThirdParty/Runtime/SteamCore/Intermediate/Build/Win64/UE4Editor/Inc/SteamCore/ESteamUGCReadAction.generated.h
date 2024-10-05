// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamUGCReadAction_generated_h
#error "ESteamUGCReadAction.generated.h already included, missing '#pragma once' in ESteamUGCReadAction.h"
#endif
#define STEAMCORE_ESteamUGCReadAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamUGCReadAction_h


#define FOREACH_ENUM_ESTEAMUGCREADACTION(op) \
	op(ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished) \
	op(ESteamUGCReadAction::k_EUGCRead_ContinueReading) \
	op(ESteamUGCReadAction::k_EUGCRead_Close) 

enum class ESteamUGCReadAction : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamUGCReadAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
