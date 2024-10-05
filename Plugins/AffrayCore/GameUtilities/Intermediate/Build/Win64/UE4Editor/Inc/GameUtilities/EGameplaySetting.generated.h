// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEUTILITIES_EGameplaySetting_generated_h
#error "EGameplaySetting.generated.h already included, missing '#pragma once' in EGameplaySetting.h"
#endif
#define GAMEUTILITIES_EGameplaySetting_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_EGameplaySetting_h


#define FOREACH_ENUM_EGAMEPLAYSETTING(op) \
	op(EGameplaySetting::ToggleCrouch) \
	op(EGameplaySetting::ToggleSprint) \
	op(EGameplaySetting::ToggleAim) \
	op(EGameplaySetting::ToggleLean) \
	op(EGameplaySetting::ToggleLowReady) \
	op(EGameplaySetting::TogglePointShooting) \
	op(EGameplaySetting::CenterViewOnADS) \
	op(EGameplaySetting::InvertHorizontalInput) \
	op(EGameplaySetting::InvertVerticalInput) \
	op(EGameplaySetting::InputSensitivity) \
	op(EGameplaySetting::AimingSensitivity) \
	op(EGameplaySetting::DeadzoneSensitivity) \
	op(EGameplaySetting::HeadBobIntensity) 

enum class EGameplaySetting : uint8;
template<> GAMEUTILITIES_API UEnum* StaticEnum<EGameplaySetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
