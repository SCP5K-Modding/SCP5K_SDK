// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamGameSearchErrorCode_generated_h
#error "ESteamGameSearchErrorCode.generated.h already included, missing '#pragma once' in ESteamGameSearchErrorCode.h"
#endif
#define STEAMCORE_ESteamGameSearchErrorCode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamGameSearchErrorCode_h


#define FOREACH_ENUM_ESTEAMGAMESEARCHERRORCODE(op) \
	op(ESteamGameSearchErrorCode::Invalid) \
	op(ESteamGameSearchErrorCode::OK) \
	op(ESteamGameSearchErrorCode::Failed_Search_Already_In_Progress) \
	op(ESteamGameSearchErrorCode::Failed_No_Search_In_Progress) \
	op(ESteamGameSearchErrorCode::Failed_Not_Lobby_Leader) \
	op(ESteamGameSearchErrorCode::Failed_No_Host_Available) \
	op(ESteamGameSearchErrorCode::Failed_Search_Params_Invalid) \
	op(ESteamGameSearchErrorCode::Failed_Offline) \
	op(ESteamGameSearchErrorCode::Failed_NotAuthorized) \
	op(ESteamGameSearchErrorCode::Failed_Unknown_Error) 

enum class ESteamGameSearchErrorCode : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamGameSearchErrorCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
