// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFPSCharacterBase;
class APlayerState;
#ifdef FPSCONTROLLER_CharacterPlayerStateChangedDelegateDelegate_generated_h
#error "CharacterPlayerStateChangedDelegateDelegate.generated.h already included, missing '#pragma once' in CharacterPlayerStateChangedDelegateDelegate.h"
#endif
#define FPSCONTROLLER_CharacterPlayerStateChangedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_CharacterPlayerStateChangedDelegateDelegate_h_8_DELEGATE \
struct _Script_FPSController_eventCharacterPlayerStateChangedDelegate_Parms \
{ \
	AFPSCharacterBase* Character; \
	APlayerState* PlayerState; \
}; \
static inline void FCharacterPlayerStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterPlayerStateChangedDelegate, AFPSCharacterBase* Character, APlayerState* PlayerState) \
{ \
	_Script_FPSController_eventCharacterPlayerStateChangedDelegate_Parms Parms; \
	Parms.Character=Character; \
	Parms.PlayerState=PlayerState; \
	CharacterPlayerStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_CharacterPlayerStateChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
