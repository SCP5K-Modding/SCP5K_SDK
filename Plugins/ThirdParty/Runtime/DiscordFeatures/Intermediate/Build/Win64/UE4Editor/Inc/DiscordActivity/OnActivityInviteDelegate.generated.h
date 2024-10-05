// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordActivityActionType : uint8;
struct FDiscordUser;
struct FDiscordActivity;
#ifdef DISCORDACTIVITY_OnActivityInviteDelegate_generated_h
#error "OnActivityInviteDelegate.generated.h already included, missing '#pragma once' in OnActivityInviteDelegate.h"
#endif
#define DISCORDACTIVITY_OnActivityInviteDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_OnActivityInviteDelegate_h_8_DELEGATE \
struct _Script_DiscordActivity_eventOnActivityInvite_Parms \
{ \
	EDiscordActivityActionType Action; \
	FDiscordUser User; \
	FDiscordActivity Activity; \
}; \
static inline void FOnActivityInvite_DelegateWrapper(const FMulticastScriptDelegate& OnActivityInvite, const EDiscordActivityActionType Action, FDiscordUser const& User, FDiscordActivity const& Activity) \
{ \
	_Script_DiscordActivity_eventOnActivityInvite_Parms Parms; \
	Parms.Action=Action; \
	Parms.User=User; \
	Parms.Activity=Activity; \
	OnActivityInvite.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_OnActivityInviteDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
