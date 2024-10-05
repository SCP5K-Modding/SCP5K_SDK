// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamBroadcastUploadResult_generated_h
#error "ESteamBroadcastUploadResult.generated.h already included, missing '#pragma once' in ESteamBroadcastUploadResult.h"
#endif
#define STEAMCORE_ESteamBroadcastUploadResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamBroadcastUploadResult_h


#define FOREACH_ENUM_ESTEAMBROADCASTUPLOADRESULT(op) \
	op(ESteamBroadcastUploadResult::None) \
	op(ESteamBroadcastUploadResult::OK) \
	op(ESteamBroadcastUploadResult::InitFailed) \
	op(ESteamBroadcastUploadResult::FrameFailed) \
	op(ESteamBroadcastUploadResult::Timeout) \
	op(ESteamBroadcastUploadResult::BandwidthExceeded) \
	op(ESteamBroadcastUploadResult::LowFPS) \
	op(ESteamBroadcastUploadResult::MissingKeyFrames) \
	op(ESteamBroadcastUploadResult::NoConnection) \
	op(ESteamBroadcastUploadResult::RelayFailed) \
	op(ESteamBroadcastUploadResult::SettingsChanged) \
	op(ESteamBroadcastUploadResult::MissingAudio) \
	op(ESteamBroadcastUploadResult::TooFarBehind) \
	op(ESteamBroadcastUploadResult::TranscodeBehind) 

enum class ESteamBroadcastUploadResult : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamBroadcastUploadResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
