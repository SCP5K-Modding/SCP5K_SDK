// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEUTILITIES_EUISetting_generated_h
#error "EUISetting.generated.h already included, missing '#pragma once' in EUISetting.h"
#endif
#define GAMEUTILITIES_EUISetting_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_EUISetting_h


#define FOREACH_ENUM_EUISETTING(op) \
	op(EUISetting::Language) \
	op(EUISetting::TextSize) \
	op(EUISetting::RedColor) \
	op(EUISetting::GreenColor) \
	op(EUISetting::UIScale) \
	op(EUISetting::DisplayTimeScale) \
	op(EUISetting::HUDVisibility) 

enum class EUISetting : uint8;
template<> GAMEUTILITIES_API UEnum* StaticEnum<EUISetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
