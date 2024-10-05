// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NISBLUEPRINT_UNISMode_generated_h
#error "UNISMode.generated.h already included, missing '#pragma once' in UNISMode.h"
#endif
#define NISBLUEPRINT_UNISMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_NIS_Source_NISBlueprint_Public_UNISMode_h


#define FOREACH_ENUM_UNISMODE(op) \
	op(UNISMode::Off) \
	op(UNISMode::UltraQuality) \
	op(UNISMode::Quality) \
	op(UNISMode::Balanced) \
	op(UNISMode::Performance) \
	op(UNISMode::Custom) 

enum class UNISMode : uint8;
template<> NISBLUEPRINT_API UEnum* StaticEnum<UNISMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
