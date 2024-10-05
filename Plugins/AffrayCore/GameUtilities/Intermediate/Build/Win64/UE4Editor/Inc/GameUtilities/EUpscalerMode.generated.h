// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEUTILITIES_EUpscalerMode_generated_h
#error "EUpscalerMode.generated.h already included, missing '#pragma once' in EUpscalerMode.h"
#endif
#define GAMEUTILITIES_EUpscalerMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_EUpscalerMode_h


#define FOREACH_ENUM_EUPSCALERMODE(op) \
	op(EUpscalerMode::None) \
	op(EUpscalerMode::DLSS2) \
	op(EUpscalerMode::DLSS3) \
	op(EUpscalerMode::NIS) \
	op(EUpscalerMode::FSR) \
	op(EUpscalerMode::FSR2) \
	op(EUpscalerMode::TAAU) \
	op(EUpscalerMode::DLAA) 

enum class EUpscalerMode : uint8;
template<> GAMEUTILITIES_API UEnum* StaticEnum<EUpscalerMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
