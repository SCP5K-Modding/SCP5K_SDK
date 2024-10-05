// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSESSIONS_EBPServerPresenceSearchType_generated_h
#error "EBPServerPresenceSearchType.generated.h already included, missing '#pragma once' in EBPServerPresenceSearchType.h"
#endif
#define ADVANCEDSESSIONS_EBPServerPresenceSearchType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_EBPServerPresenceSearchType_h


#define FOREACH_ENUM_EBPSERVERPRESENCESEARCHTYPE(op) \
	op(EBPServerPresenceSearchType::AllServers) \
	op(EBPServerPresenceSearchType::ClientServersOnly) \
	op(EBPServerPresenceSearchType::DedicatedServersOnly) 

enum class EBPServerPresenceSearchType : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPServerPresenceSearchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
