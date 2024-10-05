// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamAudioPlaybackStatus_generated_h
#error "ESteamAudioPlaybackStatus.generated.h already included, missing '#pragma once' in ESteamAudioPlaybackStatus.h"
#endif
#define STEAMCORE_ESteamAudioPlaybackStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamAudioPlaybackStatus_h


#define FOREACH_ENUM_ESTEAMAUDIOPLAYBACKSTATUS(op) \
	op(ESteamAudioPlaybackStatus::Undefined) \
	op(ESteamAudioPlaybackStatus::Playing) \
	op(ESteamAudioPlaybackStatus::Paused) \
	op(ESteamAudioPlaybackStatus::Idle) 

enum class ESteamAudioPlaybackStatus : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamAudioPlaybackStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
