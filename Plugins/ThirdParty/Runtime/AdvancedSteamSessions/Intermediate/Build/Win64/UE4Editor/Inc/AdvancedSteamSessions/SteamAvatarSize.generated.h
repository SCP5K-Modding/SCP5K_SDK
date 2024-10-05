// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSTEAMSESSIONS_SteamAvatarSize_generated_h
#error "SteamAvatarSize.generated.h already included, missing '#pragma once' in SteamAvatarSize.h"
#endif
#define ADVANCEDSTEAMSESSIONS_SteamAvatarSize_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_SteamAvatarSize_h


#define FOREACH_ENUM_STEAMAVATARSIZE(op) \
	op(SteamAvatarSize::SteamAvatar_INVALID) \
	op(SteamAvatarSize::SteamAvatar_Small) \
	op(SteamAvatarSize::SteamAvatar_Medium) \
	op(SteamAvatarSize::SteamAvatar_Large) 

enum class SteamAvatarSize : uint8;
template<> ADVANCEDSTEAMSESSIONS_API UEnum* StaticEnum<SteamAvatarSize>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
