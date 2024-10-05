// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFPSCharacterBase;
#ifdef FPSCONTROLLER_CharacterSlotUpdatedDelegateDelegate_generated_h
#error "CharacterSlotUpdatedDelegateDelegate.generated.h already included, missing '#pragma once' in CharacterSlotUpdatedDelegateDelegate.h"
#endif
#define FPSCONTROLLER_CharacterSlotUpdatedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_CharacterSlotUpdatedDelegateDelegate_h_7_DELEGATE \
struct _Script_FPSController_eventCharacterSlotUpdatedDelegate_Parms \
{ \
	AFPSCharacterBase* Character; \
	int32 Slot; \
}; \
static inline void FCharacterSlotUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterSlotUpdatedDelegate, AFPSCharacterBase* Character, int32 Slot) \
{ \
	_Script_FPSController_eventCharacterSlotUpdatedDelegate_Parms Parms; \
	Parms.Character=Character; \
	Parms.Slot=Slot; \
	CharacterSlotUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_CharacterSlotUpdatedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
