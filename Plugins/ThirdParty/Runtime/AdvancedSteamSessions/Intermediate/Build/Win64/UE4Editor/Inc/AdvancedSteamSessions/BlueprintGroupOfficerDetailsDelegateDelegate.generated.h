// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPSteamGroupOfficer;
#ifdef ADVANCEDSTEAMSESSIONS_BlueprintGroupOfficerDetailsDelegateDelegate_generated_h
#error "BlueprintGroupOfficerDetailsDelegateDelegate.generated.h already included, missing '#pragma once' in BlueprintGroupOfficerDetailsDelegateDelegate.h"
#endif
#define ADVANCEDSTEAMSESSIONS_BlueprintGroupOfficerDetailsDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_BlueprintGroupOfficerDetailsDelegateDelegate_h_6_DELEGATE \
struct _Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms \
{ \
	TArray<FBPSteamGroupOfficer> OfficerList; \
}; \
static inline void FBlueprintGroupOfficerDetailsDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGroupOfficerDetailsDelegate, TArray<FBPSteamGroupOfficer> const& OfficerList) \
{ \
	_Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms Parms; \
	Parms.OfficerList=OfficerList; \
	BlueprintGroupOfficerDetailsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_BlueprintGroupOfficerDetailsDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
