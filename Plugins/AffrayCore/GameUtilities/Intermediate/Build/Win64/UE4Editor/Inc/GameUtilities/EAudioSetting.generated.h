// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEUTILITIES_EAudioSetting_generated_h
#error "EAudioSetting.generated.h already included, missing '#pragma once' in EAudioSetting.h"
#endif
#define GAMEUTILITIES_EAudioSetting_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_EAudioSetting_h


#define FOREACH_ENUM_EAUDIOSETTING(op) \
	op(EAudioSetting::Master) \
	op(EAudioSetting::Music) \
	op(EAudioSetting::SFX) \
	op(EAudioSetting::Voice) \
	op(EAudioSetting::UI) 

enum class EAudioSetting : uint8;
template<> GAMEUTILITIES_API UEnum* StaticEnum<EAudioSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
