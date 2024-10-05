// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordRelationship;
#ifdef DISCORDRELATIONSHIP_OnRelationshipUpdateDelegate_generated_h
#error "OnRelationshipUpdateDelegate.generated.h already included, missing '#pragma once' in OnRelationshipUpdateDelegate.h"
#endif
#define DISCORDRELATIONSHIP_OnRelationshipUpdateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordRelationship_Public_OnRelationshipUpdateDelegate_h_6_DELEGATE \
struct _Script_DiscordRelationship_eventOnRelationshipUpdate_Parms \
{ \
	FDiscordRelationship Relationship; \
}; \
static inline void FOnRelationshipUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnRelationshipUpdate, FDiscordRelationship const& Relationship) \
{ \
	_Script_DiscordRelationship_eventOnRelationshipUpdate_Parms Parms; \
	Parms.Relationship=Relationship; \
	OnRelationshipUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordRelationship_Public_OnRelationshipUpdateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
