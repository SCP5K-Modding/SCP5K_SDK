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
#ifdef FPSCONTROLLER_CharacterItemUpdatedDelegateDelegate_generated_h
#error "CharacterItemUpdatedDelegateDelegate.generated.h already included, missing '#pragma once' in CharacterItemUpdatedDelegateDelegate.h"
#endif
#define FPSCONTROLLER_CharacterItemUpdatedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_CharacterItemUpdatedDelegateDelegate_h_8_DELEGATE \
struct _Script_FPSController_eventCharacterItemUpdatedDelegate_Parms \
{ \
	AFPSCharacterBase* Character; \
	AFPSItem* Item; \
}; \
static inline void FCharacterItemUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterItemUpdatedDelegate, AFPSCharacterBase* Character, AFPSItem* Item) \
{ \
	_Script_FPSController_eventCharacterItemUpdatedDelegate_Parms Parms; \
	Parms.Character=Character; \
	Parms.Item=Item; \
	CharacterItemUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_CharacterItemUpdatedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
