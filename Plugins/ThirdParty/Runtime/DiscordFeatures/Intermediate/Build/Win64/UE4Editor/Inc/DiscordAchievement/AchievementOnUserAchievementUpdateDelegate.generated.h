// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordUserAchievement;
#ifdef DISCORDACHIEVEMENT_AchievementOnUserAchievementUpdateDelegate_generated_h
#error "AchievementOnUserAchievementUpdateDelegate.generated.h already included, missing '#pragma once' in AchievementOnUserAchievementUpdateDelegate.h"
#endif
#define DISCORDACHIEVEMENT_AchievementOnUserAchievementUpdateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordAchievement_Public_AchievementOnUserAchievementUpdateDelegate_h_6_DELEGATE \
struct _Script_DiscordAchievement_eventAchievementOnUserAchievementUpdate_Parms \
{ \
	FDiscordUserAchievement Achievement; \
}; \
static inline void FAchievementOnUserAchievementUpdate_DelegateWrapper(const FMulticastScriptDelegate& AchievementOnUserAchievementUpdate, FDiscordUserAchievement const& Achievement) \
{ \
	_Script_DiscordAchievement_eventAchievementOnUserAchievementUpdate_Parms Parms; \
	Parms.Achievement=Achievement; \
	AchievementOnUserAchievementUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordAchievement_Public_AchievementOnUserAchievementUpdateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
