// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSESSIONS_EBPOnlineSessionState_generated_h
#error "EBPOnlineSessionState.generated.h already included, missing '#pragma once' in EBPOnlineSessionState.h"
#endif
#define ADVANCEDSESSIONS_EBPOnlineSessionState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_EBPOnlineSessionState_h


#define FOREACH_ENUM_EBPONLINESESSIONSTATE(op) \
	op(EBPOnlineSessionState::NoSession) \
	op(EBPOnlineSessionState::Creating) \
	op(EBPOnlineSessionState::Pending) \
	op(EBPOnlineSessionState::Starting) \
	op(EBPOnlineSessionState::InProgress) \
	op(EBPOnlineSessionState::Ending) \
	op(EBPOnlineSessionState::Ended) \
	op(EBPOnlineSessionState::Destroying) 

enum class EBPOnlineSessionState : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPOnlineSessionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
