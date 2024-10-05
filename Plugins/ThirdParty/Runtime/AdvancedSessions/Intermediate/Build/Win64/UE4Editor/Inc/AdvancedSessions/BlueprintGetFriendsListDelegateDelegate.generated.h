// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPFriendInfo;
#ifdef ADVANCEDSESSIONS_BlueprintGetFriendsListDelegateDelegate_generated_h
#error "BlueprintGetFriendsListDelegateDelegate.generated.h already included, missing '#pragma once' in BlueprintGetFriendsListDelegateDelegate.h"
#endif
#define ADVANCEDSESSIONS_BlueprintGetFriendsListDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_BlueprintGetFriendsListDelegateDelegate_h_6_DELEGATE \
struct _Script_AdvancedSessions_eventBlueprintGetFriendsListDelegate_Parms \
{ \
	TArray<FBPFriendInfo> Results; \
}; \
static inline void FBlueprintGetFriendsListDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGetFriendsListDelegate, TArray<FBPFriendInfo> const& Results) \
{ \
	_Script_AdvancedSessions_eventBlueprintGetFriendsListDelegate_Parms Parms; \
	Parms.Results=Results; \
	BlueprintGetFriendsListDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_BlueprintGetFriendsListDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
