// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEUTILITIES_EUpscalerQuality_generated_h
#error "EUpscalerQuality.generated.h already included, missing '#pragma once' in EUpscalerQuality.h"
#endif
#define GAMEUTILITIES_EUpscalerQuality_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_EUpscalerQuality_h


#define FOREACH_ENUM_EUPSCALERQUALITY(op) \
	op(EUpscalerQuality::UltraQuality) \
	op(EUpscalerQuality::Quality) \
	op(EUpscalerQuality::Balanced) \
	op(EUpscalerQuality::Performance) \
	op(EUpscalerQuality::UltraPerformance) 

enum class EUpscalerQuality : uint8;
template<> GAMEUTILITIES_API UEnum* StaticEnum<EUpscalerQuality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
