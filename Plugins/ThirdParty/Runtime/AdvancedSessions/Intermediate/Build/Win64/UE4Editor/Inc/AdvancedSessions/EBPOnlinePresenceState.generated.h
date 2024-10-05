// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSESSIONS_EBPOnlinePresenceState_generated_h
#error "EBPOnlinePresenceState.generated.h already included, missing '#pragma once' in EBPOnlinePresenceState.h"
#endif
#define ADVANCEDSESSIONS_EBPOnlinePresenceState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_EBPOnlinePresenceState_h


#define FOREACH_ENUM_EBPONLINEPRESENCESTATE(op) \
	op(EBPOnlinePresenceState::Online) \
	op(EBPOnlinePresenceState::Offline) \
	op(EBPOnlinePresenceState::Away) \
	op(EBPOnlinePresenceState::ExtendedAway) \
	op(EBPOnlinePresenceState::DoNotDisturb) \
	op(EBPOnlinePresenceState::Chat) 

enum class EBPOnlinePresenceState : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPOnlinePresenceState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
