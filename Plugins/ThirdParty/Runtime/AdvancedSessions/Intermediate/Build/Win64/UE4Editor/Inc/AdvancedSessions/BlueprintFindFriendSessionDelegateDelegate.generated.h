// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
#ifdef ADVANCEDSESSIONS_BlueprintFindFriendSessionDelegateDelegate_generated_h
#error "BlueprintFindFriendSessionDelegateDelegate.generated.h already included, missing '#pragma once' in BlueprintFindFriendSessionDelegateDelegate.h"
#endif
#define ADVANCEDSESSIONS_BlueprintFindFriendSessionDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_BlueprintFindFriendSessionDelegateDelegate_h_6_DELEGATE \
struct _Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms \
{ \
	TArray<FBlueprintSessionResult> SessionInfo; \
}; \
static inline void FBlueprintFindFriendSessionDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintFindFriendSessionDelegate, TArray<FBlueprintSessionResult> const& SessionInfo) \
{ \
	_Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms Parms; \
	Parms.SessionInfo=SessionInfo; \
	BlueprintFindFriendSessionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_BlueprintFindFriendSessionDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
