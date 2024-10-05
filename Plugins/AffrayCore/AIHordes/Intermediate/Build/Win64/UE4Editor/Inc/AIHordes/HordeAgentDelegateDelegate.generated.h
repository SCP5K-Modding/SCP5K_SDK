// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHorde;
class AHordeAgent;
#ifdef AIHORDES_HordeAgentDelegateDelegate_generated_h
#error "HordeAgentDelegateDelegate.generated.h already included, missing '#pragma once' in HordeAgentDelegateDelegate.h"
#endif
#define AIHORDES_HordeAgentDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentDelegateDelegate_h_8_DELEGATE \
struct _Script_AIHordes_eventHordeAgentDelegate_Parms \
{ \
	AHorde* Horde; \
	AHordeAgent* Agent; \
}; \
static inline void FHordeAgentDelegate_DelegateWrapper(const FMulticastScriptDelegate& HordeAgentDelegate, AHorde* Horde, AHordeAgent* Agent) \
{ \
	_Script_AIHordes_eventHordeAgentDelegate_Parms Parms; \
	Parms.Horde=Horde; \
	Parms.Agent=Agent; \
	HordeAgentDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
