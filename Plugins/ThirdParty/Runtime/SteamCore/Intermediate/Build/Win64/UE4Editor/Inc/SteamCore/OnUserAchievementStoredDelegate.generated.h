// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUserAchievementStored;
#ifdef STEAMCORE_OnUserAchievementStoredDelegate_generated_h
#error "OnUserAchievementStoredDelegate.generated.h already included, missing '#pragma once' in OnUserAchievementStoredDelegate.h"
#endif
#define STEAMCORE_OnUserAchievementStoredDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUserAchievementStoredDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnUserAchievementStored_Parms \
{ \
	FUserAchievementStored Data; \
}; \
static inline void FOnUserAchievementStored_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementStored, FUserAchievementStored const& Data) \
{ \
	_Script_SteamCore_eventOnUserAchievementStored_Parms Parms; \
	Parms.Data=Data; \
	OnUserAchievementStored.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUserAchievementStoredDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
