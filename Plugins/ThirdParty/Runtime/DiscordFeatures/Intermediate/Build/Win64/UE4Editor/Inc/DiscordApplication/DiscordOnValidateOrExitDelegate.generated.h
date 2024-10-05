// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
#ifdef DISCORDAPPLICATION_DiscordOnValidateOrExitDelegate_generated_h
#error "DiscordOnValidateOrExitDelegate.generated.h already included, missing '#pragma once' in DiscordOnValidateOrExitDelegate.h"
#endif
#define DISCORDAPPLICATION_DiscordOnValidateOrExitDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordOnValidateOrExitDelegate_h_6_DELEGATE \
struct _Script_DiscordApplication_eventDiscordOnValidateOrExit_Parms \
{ \
	EDiscordResult Result; \
}; \
static inline void FDiscordOnValidateOrExit_DelegateWrapper(const FMulticastScriptDelegate& DiscordOnValidateOrExit, EDiscordResult Result) \
{ \
	_Script_DiscordApplication_eventDiscordOnValidateOrExit_Parms Parms; \
	Parms.Result=Result; \
	DiscordOnValidateOrExit.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordOnValidateOrExitDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
