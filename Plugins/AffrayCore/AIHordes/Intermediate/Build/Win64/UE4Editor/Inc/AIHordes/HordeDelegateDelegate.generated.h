// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHorde;
#ifdef AIHORDES_HordeDelegateDelegate_generated_h
#error "HordeDelegateDelegate.generated.h already included, missing '#pragma once' in HordeDelegateDelegate.h"
#endif
#define AIHORDES_HordeDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeDelegateDelegate_h_7_DELEGATE \
struct _Script_AIHordes_eventHordeDelegate_Parms \
{ \
	AHorde* Horde; \
}; \
static inline void FHordeDelegate_DelegateWrapper(const FMulticastScriptDelegate& HordeDelegate, AHorde* Horde) \
{ \
	_Script_AIHordes_eventHordeDelegate_Parms Parms; \
	Parms.Horde=Horde; \
	HordeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
