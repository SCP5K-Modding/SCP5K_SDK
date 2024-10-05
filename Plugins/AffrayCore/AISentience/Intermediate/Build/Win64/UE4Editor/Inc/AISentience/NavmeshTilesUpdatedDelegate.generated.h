// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISENTIENCE_NavmeshTilesUpdatedDelegate_generated_h
#error "NavmeshTilesUpdatedDelegate.generated.h already included, missing '#pragma once' in NavmeshTilesUpdatedDelegate.h"
#endif
#define AISENTIENCE_NavmeshTilesUpdatedDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_NavmeshTilesUpdatedDelegate_h_5_DELEGATE \
struct _Script_AISentience_eventNavmeshTilesUpdated_Parms \
{ \
	TSet<uint32> ChangedTiles; \
}; \
static inline void FNavmeshTilesUpdated_DelegateWrapper(const FMulticastScriptDelegate& NavmeshTilesUpdated, TSet<uint32> const& ChangedTiles) \
{ \
	_Script_AISentience_eventNavmeshTilesUpdated_Parms Parms; \
	Parms.ChangedTiles=ChangedTiles; \
	NavmeshTilesUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_NavmeshTilesUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
