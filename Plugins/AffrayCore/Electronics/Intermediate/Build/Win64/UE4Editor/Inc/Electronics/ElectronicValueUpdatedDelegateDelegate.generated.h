// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AElectronic;
#ifdef ELECTRONICS_ElectronicValueUpdatedDelegateDelegate_generated_h
#error "ElectronicValueUpdatedDelegateDelegate.generated.h already included, missing '#pragma once' in ElectronicValueUpdatedDelegateDelegate.h"
#endif
#define ELECTRONICS_ElectronicValueUpdatedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicValueUpdatedDelegateDelegate_h_7_DELEGATE \
struct _Script_Electronics_eventElectronicValueUpdatedDelegate_Parms \
{ \
	AElectronic* Electronic; \
	bool bValue; \
}; \
static inline void FElectronicValueUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ElectronicValueUpdatedDelegate, AElectronic* Electronic, bool bValue) \
{ \
	_Script_Electronics_eventElectronicValueUpdatedDelegate_Parms Parms; \
	Parms.Electronic=Electronic; \
	Parms.bValue=bValue ? true : false; \
	ElectronicValueUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicValueUpdatedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
