// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordRelationship;
#ifdef DISCORDRELATIONSHIP_DiscordFilterFunctionDelegate_generated_h
#error "DiscordFilterFunctionDelegate.generated.h already included, missing '#pragma once' in DiscordFilterFunctionDelegate.h"
#endif
#define DISCORDRELATIONSHIP_DiscordFilterFunctionDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordRelationship_Public_DiscordFilterFunctionDelegate_h_6_DELEGATE \
struct _Script_DiscordRelationship_eventDiscordFilterFunction_Parms \
{ \
	FDiscordRelationship Relationship; \
	bool ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_DiscordRelationship_eventDiscordFilterFunction_Parms() \
		: ReturnValue(false) \
	{ \
	} \
}; \
static inline bool FDiscordFilterFunction_DelegateWrapper(const FScriptDelegate& DiscordFilterFunction, FDiscordRelationship const& Relationship) \
{ \
	_Script_DiscordRelationship_eventDiscordFilterFunction_Parms Parms; \
	Parms.Relationship=Relationship; \
	DiscordFilterFunction.ProcessDelegate<UObject>(&Parms); \
	return !!Parms.ReturnValue; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordRelationship_Public_DiscordFilterFunctionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
