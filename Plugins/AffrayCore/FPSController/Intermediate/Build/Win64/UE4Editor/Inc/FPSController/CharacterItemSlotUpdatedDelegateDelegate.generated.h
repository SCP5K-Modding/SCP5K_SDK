// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFPSCharacterBase;
class AFPSItem;
#ifdef FPSCONTROLLER_CharacterItemSlotUpdatedDelegateDelegate_generated_h
#error "CharacterItemSlotUpdatedDelegateDelegate.generated.h already included, missing '#pragma once' in CharacterItemSlotUpdatedDelegateDelegate.h"
#endif
#define FPSCONTROLLER_CharacterItemSlotUpdatedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_CharacterItemSlotUpdatedDelegateDelegate_h_8_DELEGATE \
struct _Script_FPSController_eventCharacterItemSlotUpdatedDelegate_Parms \
{ \
	AFPSCharacterBase* Character; \
	AFPSItem* Item; \
	int32 Slot; \
}; \
static inline void FCharacterItemSlotUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterItemSlotUpdatedDelegate, AFPSCharacterBase* Character, AFPSItem* Item, int32 Slot) \
{ \
	_Script_FPSController_eventCharacterItemSlotUpdatedDelegate_Parms Parms; \
	Parms.Character=Character; \
	Parms.Item=Item; \
	Parms.Slot=Slot; \
	CharacterItemSlotUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_CharacterItemSlotUpdatedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
