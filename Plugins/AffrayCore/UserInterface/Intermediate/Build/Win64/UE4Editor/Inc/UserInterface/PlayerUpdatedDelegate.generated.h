// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
#ifdef USERINTERFACE_PlayerUpdatedDelegate_generated_h
#error "PlayerUpdatedDelegate.generated.h already included, missing '#pragma once' in PlayerUpdatedDelegate.h"
#endif
#define USERINTERFACE_PlayerUpdatedDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_PlayerUpdatedDelegate_h_7_DELEGATE \
struct _Script_UserInterface_eventPlayerUpdated_Parms \
{ \
	int32 PlayerID; \
	APlayerState* PlayerState; \
}; \
static inline void FPlayerUpdated_DelegateWrapper(const FMulticastScriptDelegate& PlayerUpdated, int32 PlayerID, APlayerState* PlayerState) \
{ \
	_Script_UserInterface_eventPlayerUpdated_Parms Parms; \
	Parms.PlayerID=PlayerID; \
	Parms.PlayerState=PlayerState; \
	PlayerUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_PlayerUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
