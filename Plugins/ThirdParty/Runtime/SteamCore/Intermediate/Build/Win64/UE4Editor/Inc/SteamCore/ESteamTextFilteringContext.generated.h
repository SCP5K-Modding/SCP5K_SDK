// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamTextFilteringContext_generated_h
#error "ESteamTextFilteringContext.generated.h already included, missing '#pragma once' in ESteamTextFilteringContext.h"
#endif
#define STEAMCORE_ESteamTextFilteringContext_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamTextFilteringContext_h


#define FOREACH_ENUM_ESTEAMTEXTFILTERINGCONTEXT(op) \
	op(ESteamTextFilteringContext::k_ETextFilteringContextUnknown) \
	op(ESteamTextFilteringContext::k_ETextFilteringContextGameContent) \
	op(ESteamTextFilteringContext::k_ETextFilteringContextChat) \
	op(ESteamTextFilteringContext::k_ETextFilteringContextName) 

enum class ESteamTextFilteringContext : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamTextFilteringContext>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
