// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFPSCharacterBase;
class AController;
#ifdef FPSCONTROLLER_CharacterControllerChangedDelegateDelegate_generated_h
#error "CharacterControllerChangedDelegateDelegate.generated.h already included, missing '#pragma once' in CharacterControllerChangedDelegateDelegate.h"
#endif
#define FPSCONTROLLER_CharacterControllerChangedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_CharacterControllerChangedDelegateDelegate_h_8_DELEGATE \
struct _Script_FPSController_eventCharacterControllerChangedDelegate_Parms \
{ \
	AFPSCharacterBase* Character; \
	AController* Controller; \
}; \
static inline void FCharacterControllerChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterControllerChangedDelegate, AFPSCharacterBase* Character, AController* Controller) \
{ \
	_Script_FPSController_eventCharacterControllerChangedDelegate_Parms Parms; \
	Parms.Character=Character; \
	Parms.Controller=Controller; \
	CharacterControllerChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_CharacterControllerChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
