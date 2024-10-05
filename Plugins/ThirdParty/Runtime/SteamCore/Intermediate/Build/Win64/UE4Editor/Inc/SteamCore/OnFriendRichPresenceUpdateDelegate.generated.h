// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFriendRichPresenceUpdate;
#ifdef STEAMCORE_OnFriendRichPresenceUpdateDelegate_generated_h
#error "OnFriendRichPresenceUpdateDelegate.generated.h already included, missing '#pragma once' in OnFriendRichPresenceUpdateDelegate.h"
#endif
#define STEAMCORE_OnFriendRichPresenceUpdateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFriendRichPresenceUpdateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFriendRichPresenceUpdate_Parms \
{ \
	FFriendRichPresenceUpdate Data; \
}; \
static inline void FOnFriendRichPresenceUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnFriendRichPresenceUpdate, FFriendRichPresenceUpdate const& Data) \
{ \
	_Script_SteamCore_eventOnFriendRichPresenceUpdate_Parms Parms; \
	Parms.Data=Data; \
	OnFriendRichPresenceUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFriendRichPresenceUpdateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
