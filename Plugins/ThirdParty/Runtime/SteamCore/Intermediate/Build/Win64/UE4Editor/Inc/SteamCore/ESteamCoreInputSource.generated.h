// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamCoreInputSource_generated_h
#error "ESteamCoreInputSource.generated.h already included, missing '#pragma once' in ESteamCoreInputSource.h"
#endif
#define STEAMCORE_ESteamCoreInputSource_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamCoreInputSource_h


#define FOREACH_ENUM_ESTEAMCOREINPUTSOURCE(op) \
	op(ESteamCoreInputSource::None) \
	op(ESteamCoreInputSource::LeftTrackpad) \
	op(ESteamCoreInputSource::RightTrackpad) \
	op(ESteamCoreInputSource::Joystick) \
	op(ESteamCoreInputSource::ABXY) \
	op(ESteamCoreInputSource::Switch) \
	op(ESteamCoreInputSource::LeftTrigger) \
	op(ESteamCoreInputSource::RightTrigger) \
	op(ESteamCoreInputSource::LeftBumper) \
	op(ESteamCoreInputSource::RightBumper) \
	op(ESteamCoreInputSource::Gyro) \
	op(ESteamCoreInputSource::CenterTrackpad) \
	op(ESteamCoreInputSource::RightJoystick) \
	op(ESteamCoreInputSource::DPad) \
	op(ESteamCoreInputSource::Key) \
	op(ESteamCoreInputSource::Mouse) \
	op(ESteamCoreInputSource::LeftGyro) \
	op(ESteamCoreInputSource::Count) 

enum class ESteamCoreInputSource : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
