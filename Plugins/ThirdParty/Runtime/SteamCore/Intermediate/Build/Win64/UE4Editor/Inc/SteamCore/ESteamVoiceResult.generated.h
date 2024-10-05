// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamVoiceResult_generated_h
#error "ESteamVoiceResult.generated.h already included, missing '#pragma once' in ESteamVoiceResult.h"
#endif
#define STEAMCORE_ESteamVoiceResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamVoiceResult_h


#define FOREACH_ENUM_ESTEAMVOICERESULT(op) \
	op(ESteamVoiceResult::OK) \
	op(ESteamVoiceResult::NotInitialized) \
	op(ESteamVoiceResult::NotRecording) \
	op(ESteamVoiceResult::NoData) \
	op(ESteamVoiceResult::BufferTooSmall) \
	op(ESteamVoiceResult::DataCorrupted) \
	op(ESteamVoiceResult::Restricted) \
	op(ESteamVoiceResult::UnsupportedCodec) \
	op(ESteamVoiceResult::ReceiverOutOfDate) \
	op(ESteamVoiceResult::ReceiverDidNotAnswer) 

enum class ESteamVoiceResult : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamVoiceResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
