// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamItemUpdateStatus_generated_h
#error "ESteamItemUpdateStatus.generated.h already included, missing '#pragma once' in ESteamItemUpdateStatus.h"
#endif
#define STEAMCORE_ESteamItemUpdateStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamItemUpdateStatus_h


#define FOREACH_ENUM_ESTEAMITEMUPDATESTATUS(op) \
	op(ESteamItemUpdateStatus::Invalid) \
	op(ESteamItemUpdateStatus::PreparingConfig) \
	op(ESteamItemUpdateStatus::PreparingContent) \
	op(ESteamItemUpdateStatus::UploadingContent) \
	op(ESteamItemUpdateStatus::UploadingPreviewFile) \
	op(ESteamItemUpdateStatus::CommittingChanges) 

enum class ESteamItemUpdateStatus : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamItemUpdateStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
