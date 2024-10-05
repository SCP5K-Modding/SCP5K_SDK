// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamLeaderboard;
struct FSteamUGCHandle;
enum class ESteamLeaderboardDataRequest : uint8;
struct FSteamID;
enum class ESteamLeaderboardSortMethod : uint8;
enum class ESteamLeaderboardDisplayType : uint8;
class UTexture2D;
struct FSteamLeaderboardEntries;
struct FSteamLeaderboardEntry;
enum class ESteamLeaderboardUploadScoreMethod : uint8;
#ifdef STEAMCORE_UserStats_generated_h
#error "UserStats.generated.h already included, missing '#pragma once' in UserStats.h"
#endif
#define STEAMCORE_UserStats_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttachLeaderboardUGC); \
	DECLARE_FUNCTION(execClearAchievement); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntries); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntriesForUsers); \
	DECLARE_FUNCTION(execFindLeaderboard); \
	DECLARE_FUNCTION(execFindOrCreateLeaderboard); \
	DECLARE_FUNCTION(execGetAchievement); \
	DECLARE_FUNCTION(execGetAchievementAchievedPercent); \
	DECLARE_FUNCTION(execGetAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetAchievementDisplayAttribute); \
	DECLARE_FUNCTION(execGetAchievementIcon); \
	DECLARE_FUNCTION(execGetAchievementName); \
	DECLARE_FUNCTION(execGetAchievementProgressLimits); \
	DECLARE_FUNCTION(execGetAchievementProgressLimitsFloat); \
	DECLARE_FUNCTION(execGetDownloadedLeaderboardEntry); \
	DECLARE_FUNCTION(execGetGlobalStatFloat); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryFloat); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryInt); \
	DECLARE_FUNCTION(execGetGlobalStatInt); \
	DECLARE_FUNCTION(execGetLeaderboardDisplayType); \
	DECLARE_FUNCTION(execGetLeaderboardEntryCount); \
	DECLARE_FUNCTION(execGetLeaderboardName); \
	DECLARE_FUNCTION(execGetLeaderboardSortMethod); \
	DECLARE_FUNCTION(execGetMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetNextMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetNumAchievements); \
	DECLARE_FUNCTION(execGetNumberOfCurrentPlayers); \
	DECLARE_FUNCTION(execGetStatFloat); \
	DECLARE_FUNCTION(execGetStatInt); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execGetUserAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserStatInteger); \
	DECLARE_FUNCTION(execIndicateAchievementProgress); \
	DECLARE_FUNCTION(execRequestCurrentStats); \
	DECLARE_FUNCTION(execRequestGlobalAchievementPercentages); \
	DECLARE_FUNCTION(execRequestGlobalStats); \
	DECLARE_FUNCTION(execRequestUserStats); \
	DECLARE_FUNCTION(execResetAllStats); \
	DECLARE_FUNCTION(execSetAchievement); \
	DECLARE_FUNCTION(execSetStatFloat); \
	DECLARE_FUNCTION(execSetStatInt); \
	DECLARE_FUNCTION(execStoreStats); \
	DECLARE_FUNCTION(execUpdateAvgRateStat); \
	DECLARE_FUNCTION(execUploadLeaderboardScore);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttachLeaderboardUGC); \
	DECLARE_FUNCTION(execClearAchievement); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntries); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntriesForUsers); \
	DECLARE_FUNCTION(execFindLeaderboard); \
	DECLARE_FUNCTION(execFindOrCreateLeaderboard); \
	DECLARE_FUNCTION(execGetAchievement); \
	DECLARE_FUNCTION(execGetAchievementAchievedPercent); \
	DECLARE_FUNCTION(execGetAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetAchievementDisplayAttribute); \
	DECLARE_FUNCTION(execGetAchievementIcon); \
	DECLARE_FUNCTION(execGetAchievementName); \
	DECLARE_FUNCTION(execGetAchievementProgressLimits); \
	DECLARE_FUNCTION(execGetAchievementProgressLimitsFloat); \
	DECLARE_FUNCTION(execGetDownloadedLeaderboardEntry); \
	DECLARE_FUNCTION(execGetGlobalStatFloat); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryFloat); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryInt); \
	DECLARE_FUNCTION(execGetGlobalStatInt); \
	DECLARE_FUNCTION(execGetLeaderboardDisplayType); \
	DECLARE_FUNCTION(execGetLeaderboardEntryCount); \
	DECLARE_FUNCTION(execGetLeaderboardName); \
	DECLARE_FUNCTION(execGetLeaderboardSortMethod); \
	DECLARE_FUNCTION(execGetMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetNextMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetNumAchievements); \
	DECLARE_FUNCTION(execGetNumberOfCurrentPlayers); \
	DECLARE_FUNCTION(execGetStatFloat); \
	DECLARE_FUNCTION(execGetStatInt); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execGetUserAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserStatInteger); \
	DECLARE_FUNCTION(execIndicateAchievementProgress); \
	DECLARE_FUNCTION(execRequestCurrentStats); \
	DECLARE_FUNCTION(execRequestGlobalAchievementPercentages); \
	DECLARE_FUNCTION(execRequestGlobalStats); \
	DECLARE_FUNCTION(execRequestUserStats); \
	DECLARE_FUNCTION(execResetAllStats); \
	DECLARE_FUNCTION(execSetAchievement); \
	DECLARE_FUNCTION(execSetStatFloat); \
	DECLARE_FUNCTION(execSetStatInt); \
	DECLARE_FUNCTION(execStoreStats); \
	DECLARE_FUNCTION(execUpdateAvgRateStat); \
	DECLARE_FUNCTION(execUploadLeaderboardScore);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserStats(); \
	friend struct Z_Construct_UClass_UUserStats_Statics; \
public: \
	DECLARE_CLASS(UUserStats, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUserStats)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUUserStats(); \
	friend struct Z_Construct_UClass_UUserStats_Statics; \
public: \
	DECLARE_CLASS(UUserStats, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUserStats)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserStats(UUserStats&&); \
	NO_API UUserStats(const UUserStats&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserStats(UUserStats&&); \
	NO_API UUserStats(const UUserStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUserStats)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_32_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UUserStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_UserStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
