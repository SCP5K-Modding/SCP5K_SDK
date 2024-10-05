// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELSTREAMING_EStreamingState_generated_h
#error "EStreamingState.generated.h already included, missing '#pragma once' in EStreamingState.h"
#endif
#define LEVELSTREAMING_EStreamingState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_EStreamingState_h


#define FOREACH_ENUM_ESTREAMINGSTATE(op) \
	op(EStreamingState::Visible) \
	op(EStreamingState::Loaded) \
	op(EStreamingState::Unloaded) 

enum class EStreamingState : uint8;
template<> LEVELSTREAMING_API UEnum* StaticEnum<EStreamingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
