// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEUTILITIES_EVideoSetting_generated_h
#error "EVideoSetting.generated.h already included, missing '#pragma once' in EVideoSetting.h"
#endif
#define GAMEUTILITIES_EVideoSetting_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_EVideoSetting_h


#define FOREACH_ENUM_EVIDEOSETTING(op) \
	op(EVideoSetting::ReflexMode) \
	op(EVideoSetting::UpscalerMode) \
	op(EVideoSetting::UpscalerQuality) \
	op(EVideoSetting::EnableDepthOfField) \
	op(EVideoSetting::EnableMotionBlur) \
	op(EVideoSetting::EnablePaniniProjection) \
	op(EVideoSetting::PaniniProjectionAmount) \
	op(EVideoSetting::Brightness) \
	op(EVideoSetting::FieldOfView) \
	op(EVideoSetting::ScalabilitySettings) \
	op(EVideoSetting::ResolutionScale) 

enum class EVideoSetting : uint8;
template<> GAMEUTILITIES_API UEnum* StaticEnum<EVideoSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
