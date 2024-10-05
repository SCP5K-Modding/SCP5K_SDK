// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AElectronic;
#ifdef ELECTRONICS_ElectronicUpdatedDelegateDelegate_generated_h
#error "ElectronicUpdatedDelegateDelegate.generated.h already included, missing '#pragma once' in ElectronicUpdatedDelegateDelegate.h"
#endif
#define ELECTRONICS_ElectronicUpdatedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicUpdatedDelegateDelegate_h_7_DELEGATE \
struct _Script_Electronics_eventElectronicUpdatedDelegate_Parms \
{ \
	AElectronic* Electronic; \
}; \
static inline void FElectronicUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ElectronicUpdatedDelegate, AElectronic* Electronic) \
{ \
	_Script_Electronics_eventElectronicUpdatedDelegate_Parms Parms; \
	Parms.Electronic=Electronic; \
	ElectronicUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicUpdatedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
