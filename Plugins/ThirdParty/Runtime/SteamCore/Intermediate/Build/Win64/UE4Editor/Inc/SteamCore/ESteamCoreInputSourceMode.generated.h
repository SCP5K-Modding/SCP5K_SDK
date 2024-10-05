// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamCoreInputSourceMode_generated_h
#error "ESteamCoreInputSourceMode.generated.h already included, missing '#pragma once' in ESteamCoreInputSourceMode.h"
#endif
#define STEAMCORE_ESteamCoreInputSourceMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamCoreInputSourceMode_h


#define FOREACH_ENUM_ESTEAMCOREINPUTSOURCEMODE(op) \
	op(ESteamCoreInputSourceMode::None) \
	op(ESteamCoreInputSourceMode::Dpad) \
	op(ESteamCoreInputSourceMode::Buttons) \
	op(ESteamCoreInputSourceMode::FourButtons) \
	op(ESteamCoreInputSourceMode::AbsoluteMouse) \
	op(ESteamCoreInputSourceMode::RelativeMouse) \
	op(ESteamCoreInputSourceMode::JoystickMove) \
	op(ESteamCoreInputSourceMode::JoystickMouse) \
	op(ESteamCoreInputSourceMode::JoystickCamera) \
	op(ESteamCoreInputSourceMode::ScrollWheel) \
	op(ESteamCoreInputSourceMode::Trigger) \
	op(ESteamCoreInputSourceMode::TouchMenu) \
	op(ESteamCoreInputSourceMode::MouseJoystick) \
	op(ESteamCoreInputSourceMode::MouseRegion) \
	op(ESteamCoreInputSourceMode::RadialMenu) \
	op(ESteamCoreInputSourceMode::SingleButton) \
	op(ESteamCoreInputSourceMode::Switches) 

enum class ESteamCoreInputSourceMode : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputSourceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
