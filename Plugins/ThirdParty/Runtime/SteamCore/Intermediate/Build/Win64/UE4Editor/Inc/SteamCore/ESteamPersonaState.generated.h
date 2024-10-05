// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamPersonaState_generated_h
#error "ESteamPersonaState.generated.h already included, missing '#pragma once' in ESteamPersonaState.h"
#endif
#define STEAMCORE_ESteamPersonaState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamPersonaState_h


#define FOREACH_ENUM_ESTEAMPERSONASTATE(op) \
	op(ESteamPersonaState::Offline) \
	op(ESteamPersonaState::Online) \
	op(ESteamPersonaState::Busy) \
	op(ESteamPersonaState::Away) \
	op(ESteamPersonaState::Snooze) \
	op(ESteamPersonaState::LookingToTrade) \
	op(ESteamPersonaState::LookingToPlay) \
	op(ESteamPersonaState::Max) 

enum class ESteamPersonaState : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamPersonaState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
