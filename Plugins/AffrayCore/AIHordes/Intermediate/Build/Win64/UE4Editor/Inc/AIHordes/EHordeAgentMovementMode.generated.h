// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIHORDES_EHordeAgentMovementMode_generated_h
#error "EHordeAgentMovementMode.generated.h already included, missing '#pragma once' in EHordeAgentMovementMode.h"
#endif
#define AIHORDES_EHordeAgentMovementMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_EHordeAgentMovementMode_h


#define FOREACH_ENUM_EHORDEAGENTMOVEMENTMODE(op) \
	op(EHordeAgentMovementMode::Wandering) \
	op(EHordeAgentMovementMode::Walking) \
	op(EHordeAgentMovementMode::Crawling) \
	op(EHordeAgentMovementMode::Running) 

enum class EHordeAgentMovementMode : uint8;
template<> AIHORDES_API UEnum* StaticEnum<EHordeAgentMovementMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
