// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISENTIENCE_ESAIState_generated_h
#error "ESAIState.generated.h already included, missing '#pragma once' in ESAIState.h"
#endif
#define AISENTIENCE_ESAIState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_ESAIState_h


#define FOREACH_ENUM_ESAISTATE(op) \
	op(ESAIState::None) \
	op(ESAIState::Idle) \
	op(ESAIState::Investigating) \
	op(ESAIState::Alert) \
	op(ESAIState::Combat) \
	op(ESAIState::Dead) 

enum class ESAIState : uint8;
template<> AISENTIENCE_API UEnum* StaticEnum<ESAIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
