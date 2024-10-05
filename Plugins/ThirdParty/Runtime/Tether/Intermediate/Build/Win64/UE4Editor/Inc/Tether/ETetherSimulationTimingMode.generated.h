// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETHER_ETetherSimulationTimingMode_generated_h
#error "ETetherSimulationTimingMode.generated.h already included, missing '#pragma once' in ETetherSimulationTimingMode.h"
#endif
#define TETHER_ETetherSimulationTimingMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_Tether_Source_Tether_Public_ETetherSimulationTimingMode_h


#define FOREACH_ENUM_ETETHERSIMULATIONTIMINGMODE(op) \
	op(ETetherSimulationTimingMode::SimulateInSequence) \
	op(ETetherSimulationTimingMode::ProgressSimulation) 

enum class ETetherSimulationTimingMode : uint8;
template<> TETHER_API UEnum* StaticEnum<ETetherSimulationTimingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
