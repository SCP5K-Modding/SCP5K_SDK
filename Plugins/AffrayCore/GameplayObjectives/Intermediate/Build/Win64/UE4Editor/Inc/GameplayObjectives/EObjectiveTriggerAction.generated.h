// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYOBJECTIVES_EObjectiveTriggerAction_generated_h
#error "EObjectiveTriggerAction.generated.h already included, missing '#pragma once' in EObjectiveTriggerAction.h"
#endif
#define GAMEPLAYOBJECTIVES_EObjectiveTriggerAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_EObjectiveTriggerAction_h


#define FOREACH_ENUM_EOBJECTIVETRIGGERACTION(op) \
	op(EObjectiveTriggerAction::None) \
	op(EObjectiveTriggerAction::Complete) \
	op(EObjectiveTriggerAction::Activate) \
	op(EObjectiveTriggerAction::Deactivate) \
	op(EObjectiveTriggerAction::Start) \
	op(EObjectiveTriggerAction::Reset) 

enum class EObjectiveTriggerAction : uint8;
template<> GAMEPLAYOBJECTIVES_API UEnum* StaticEnum<EObjectiveTriggerAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
