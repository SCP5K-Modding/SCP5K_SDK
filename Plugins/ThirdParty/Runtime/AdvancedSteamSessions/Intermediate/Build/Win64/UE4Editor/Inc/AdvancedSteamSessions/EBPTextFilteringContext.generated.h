// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSTEAMSESSIONS_EBPTextFilteringContext_generated_h
#error "EBPTextFilteringContext.generated.h already included, missing '#pragma once' in EBPTextFilteringContext.h"
#endif
#define ADVANCEDSTEAMSESSIONS_EBPTextFilteringContext_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_EBPTextFilteringContext_h


#define FOREACH_ENUM_EBPTEXTFILTERINGCONTEXT(op) \
	op(EBPTextFilteringContext::FContext_Unknown) \
	op(EBPTextFilteringContext::FContext_GameContent) \
	op(EBPTextFilteringContext::FContext_Chat) \
	op(EBPTextFilteringContext::FContext_Name) 

enum class EBPTextFilteringContext : uint8;
template<> ADVANCEDSTEAMSESSIONS_API UEnum* StaticEnum<EBPTextFilteringContext>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
