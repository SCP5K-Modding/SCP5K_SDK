// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_PlayerHealthUpdatedDelegate_generated_h
#error "PlayerHealthUpdatedDelegate.generated.h already included, missing '#pragma once' in PlayerHealthUpdatedDelegate.h"
#endif
#define USERINTERFACE_PlayerHealthUpdatedDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_PlayerHealthUpdatedDelegate_h_5_DELEGATE \
struct _Script_UserInterface_eventPlayerHealthUpdated_Parms \
{ \
	int32 PlayerID; \
	float Health; \
}; \
static inline void FPlayerHealthUpdated_DelegateWrapper(const FMulticastScriptDelegate& PlayerHealthUpdated, int32 PlayerID, float Health) \
{ \
	_Script_UserInterface_eventPlayerHealthUpdated_Parms Parms; \
	Parms.PlayerID=PlayerID; \
	Parms.Health=Health; \
	PlayerHealthUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_PlayerHealthUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
