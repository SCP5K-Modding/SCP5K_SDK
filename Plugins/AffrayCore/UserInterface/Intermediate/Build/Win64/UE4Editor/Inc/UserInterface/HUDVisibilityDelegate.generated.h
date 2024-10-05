// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_HUDVisibilityDelegate_generated_h
#error "HUDVisibilityDelegate.generated.h already included, missing '#pragma once' in HUDVisibilityDelegate.h"
#endif
#define USERINTERFACE_HUDVisibilityDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_HUDVisibilityDelegate_h_5_DELEGATE \
struct _Script_UserInterface_eventHUDVisibility_Parms \
{ \
	bool UIHUDVisibility; \
}; \
static inline void FHUDVisibility_DelegateWrapper(const FMulticastScriptDelegate& HUDVisibility, bool UIHUDVisibility) \
{ \
	_Script_UserInterface_eventHUDVisibility_Parms Parms; \
	Parms.UIHUDVisibility=UIHUDVisibility ? true : false; \
	HUDVisibility.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_HUDVisibilityDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
