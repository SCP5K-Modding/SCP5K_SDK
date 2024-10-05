// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/UserStats.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserStats() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UUserStats_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UUserStats();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UUserStats::execAttachLeaderboardUGC)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachLeaderboardUGC(FOnAttachLeaderboardUGC(Z_Param_Out_Callback),Z_Param_SteamLeaderboard,Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execClearAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::ClearAchievement(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execDownloadLeaderboardEntries)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_GET_ENUM(ESteamLeaderboardDataRequest,Z_Param_DataRequest);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadLeaderboardEntries(FOnDownloadLeaderboardEntries(Z_Param_Out_Callback),Z_Param_SteamLeaderboard,ESteamLeaderboardDataRequest(Z_Param_DataRequest),Z_Param_RangeStart,Z_Param_RangeEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execDownloadLeaderboardEntriesForUsers)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_GET_TARRAY(FSteamID,Z_Param_Users);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadLeaderboardEntriesForUsers(FOnDownloadLeaderboardEntriesForUsers(Z_Param_Out_Callback),Z_Param_SteamLeaderboard,Z_Param_Users);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execFindLeaderboard)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindLeaderboard(FOnFindLeaderboard(Z_Param_Out_Callback),Z_Param_LeaderboardName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execFindOrCreateLeaderboard)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_ENUM(ESteamLeaderboardSortMethod,Z_Param_SortMethod);
		P_GET_ENUM(ESteamLeaderboardDisplayType,Z_Param_DisplayType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindOrCreateLeaderboard(FOnFindOrCreateLeaderboard(Z_Param_Out_Callback),Z_Param_LeaderboardName,ESteamLeaderboardSortMethod(Z_Param_SortMethod),ESteamLeaderboardDisplayType(Z_Param_DisplayType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetAchievement(Z_Param_Name,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievementAchievedPercent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetAchievementAchievedPercent(Z_Param_Name,Z_Param_Out_Percent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievementAndUnlockTime)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UnlockTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetAchievementAndUnlockTime(Z_Param_Name,Z_Param_Out_bAchieved,Z_Param_Out_UnlockTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievementDisplayAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUserStats::GetAchievementDisplayAttribute(Z_Param_Name,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievementIcon)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UUserStats::GetAchievementIcon(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievementName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Achievement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUserStats::GetAchievementName(Z_Param_Achievement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievementProgressLimits)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinProgress);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetAchievementProgressLimits(Z_Param_Name,Z_Param_Out_MinProgress,Z_Param_Out_MaxProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievementProgressLimitsFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinProgress);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetAchievementProgressLimitsFloat(Z_Param_Name,Z_Param_Out_MinProgress,Z_Param_Out_MaxProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetDownloadedLeaderboardEntry)
	{
		P_GET_STRUCT(FSteamLeaderboardEntries,Z_Param_LeaderboardEntries);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FSteamLeaderboardEntry,Z_Param_Out_LeaderboardEntry);
		P_GET_TARRAY(int32,Z_Param_Details);
		P_GET_TARRAY_REF(int32,Z_Param_Out_outDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetDownloadedLeaderboardEntry(Z_Param_LeaderboardEntries,Z_Param_Index,Z_Param_Out_LeaderboardEntry,Z_Param_Details,Z_Param_Out_outDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetGlobalStatFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetGlobalStatFloat(Z_Param_StatName,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetGlobalStatHistoryFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
		P_GET_TARRAY_REF(float,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUserStats::GetGlobalStatHistoryFloat(Z_Param_StatName,Z_Param_HistoryDays,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetGlobalStatHistoryInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUserStats::GetGlobalStatHistoryInt(Z_Param_StatName,Z_Param_HistoryDays,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetGlobalStatInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetGlobalStatInt(Z_Param_StatName,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetLeaderboardDisplayType)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamLeaderboardDisplayType*)Z_Param__Result=UUserStats::GetLeaderboardDisplayType(Z_Param_SteamLeaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetLeaderboardEntryCount)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUserStats::GetLeaderboardEntryCount(Z_Param_SteamLeaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetLeaderboardName)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUserStats::GetLeaderboardName(Z_Param_SteamLeaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetLeaderboardSortMethod)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamLeaderboardSortMethod*)Z_Param__Result=UUserStats::GetLeaderboardSortMethod(Z_Param_SteamLeaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetMostAchievedAchievementInfo)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUserStats::GetMostAchievedAchievementInfo(Z_Param_Out_Name,Z_Param_Out_Percent,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetNextMostAchievedAchievementInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IteratorPrevious);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUserStats::GetNextMostAchievedAchievementInfo(Z_Param_IteratorPrevious,Z_Param_Out_Name,Z_Param_Out_Percent,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetNumAchievements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUserStats::GetNumAchievements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetNumberOfCurrentPlayers)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNumberOfCurrentPlayers(FOnGetNumberOfCurrentPlayers(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetStatFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetStatFloat(Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetStatInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetStatInt(Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetUserAchievement)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetUserAchievementAndUnlockTime)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UnlockTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetUserAchievementAndUnlockTime(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved,Z_Param_Out_UnlockTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetUserStatFloat)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetUserStatInteger)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetUserStatInteger(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execIndicateAchievementProgress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentProgress);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::IndicateAchievementProgress(Z_Param_Name,Z_Param_CurrentProgress,Z_Param_MaxProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execRequestCurrentStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::RequestCurrentStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execRequestGlobalAchievementPercentages)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestGlobalAchievementPercentages(FOnRequestGlobalAchievementPercentages(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execRequestGlobalStats)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestGlobalStats(FOnRequestGlobalStats(Z_Param_Out_Callback),Z_Param_HistoryDays);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execRequestUserStats)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestUserStats(FOnRequestUserStats(Z_Param_Out_Callback),Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execResetAllStats)
	{
		P_GET_UBOOL(Z_Param_bAchievementsToo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::ResetAllStats(Z_Param_bAchievementsToo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execSetAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::SetAchievement(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execSetStatFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::SetStatFloat(Z_Param_Name,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execSetStatInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::SetStatInt(Z_Param_Name,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execStoreStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::StoreStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execUpdateAvgRateStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CountThisSession);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SessionLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::UpdateAvgRateStat(Z_Param_Name,Z_Param_CountThisSession,Z_Param_SessionLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execUploadLeaderboardScore)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_GET_ENUM(ESteamLeaderboardUploadScoreMethod,Z_Param_UploadScoreMethod);
		P_GET_PROPERTY(FIntProperty,Z_Param_Score);
		P_GET_TARRAY(int32,Z_Param_ScoreDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UploadLeaderboardScore(FOnUploadLeaderboardScore(Z_Param_Out_Callback),Z_Param_SteamLeaderboard,ESteamLeaderboardUploadScoreMethod(Z_Param_UploadScoreMethod),Z_Param_Score,Z_Param_ScoreDetails);
		P_NATIVE_END;
	}
	void UUserStats::StaticRegisterNativesUUserStats()
	{
		UClass* Class = UUserStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachLeaderboardUGC", &UUserStats::execAttachLeaderboardUGC },
			{ "ClearAchievement", &UUserStats::execClearAchievement },
			{ "DownloadLeaderboardEntries", &UUserStats::execDownloadLeaderboardEntries },
			{ "DownloadLeaderboardEntriesForUsers", &UUserStats::execDownloadLeaderboardEntriesForUsers },
			{ "FindLeaderboard", &UUserStats::execFindLeaderboard },
			{ "FindOrCreateLeaderboard", &UUserStats::execFindOrCreateLeaderboard },
			{ "GetAchievement", &UUserStats::execGetAchievement },
			{ "GetAchievementAchievedPercent", &UUserStats::execGetAchievementAchievedPercent },
			{ "GetAchievementAndUnlockTime", &UUserStats::execGetAchievementAndUnlockTime },
			{ "GetAchievementDisplayAttribute", &UUserStats::execGetAchievementDisplayAttribute },
			{ "GetAchievementIcon", &UUserStats::execGetAchievementIcon },
			{ "GetAchievementName", &UUserStats::execGetAchievementName },
			{ "GetAchievementProgressLimits", &UUserStats::execGetAchievementProgressLimits },
			{ "GetAchievementProgressLimitsFloat", &UUserStats::execGetAchievementProgressLimitsFloat },
			{ "GetDownloadedLeaderboardEntry", &UUserStats::execGetDownloadedLeaderboardEntry },
			{ "GetGlobalStatFloat", &UUserStats::execGetGlobalStatFloat },
			{ "GetGlobalStatHistoryFloat", &UUserStats::execGetGlobalStatHistoryFloat },
			{ "GetGlobalStatHistoryInt", &UUserStats::execGetGlobalStatHistoryInt },
			{ "GetGlobalStatInt", &UUserStats::execGetGlobalStatInt },
			{ "GetLeaderboardDisplayType", &UUserStats::execGetLeaderboardDisplayType },
			{ "GetLeaderboardEntryCount", &UUserStats::execGetLeaderboardEntryCount },
			{ "GetLeaderboardName", &UUserStats::execGetLeaderboardName },
			{ "GetLeaderboardSortMethod", &UUserStats::execGetLeaderboardSortMethod },
			{ "GetMostAchievedAchievementInfo", &UUserStats::execGetMostAchievedAchievementInfo },
			{ "GetNextMostAchievedAchievementInfo", &UUserStats::execGetNextMostAchievedAchievementInfo },
			{ "GetNumAchievements", &UUserStats::execGetNumAchievements },
			{ "GetNumberOfCurrentPlayers", &UUserStats::execGetNumberOfCurrentPlayers },
			{ "GetStatFloat", &UUserStats::execGetStatFloat },
			{ "GetStatInt", &UUserStats::execGetStatInt },
			{ "GetUserAchievement", &UUserStats::execGetUserAchievement },
			{ "GetUserAchievementAndUnlockTime", &UUserStats::execGetUserAchievementAndUnlockTime },
			{ "GetUserStatFloat", &UUserStats::execGetUserStatFloat },
			{ "GetUserStatInteger", &UUserStats::execGetUserStatInteger },
			{ "IndicateAchievementProgress", &UUserStats::execIndicateAchievementProgress },
			{ "RequestCurrentStats", &UUserStats::execRequestCurrentStats },
			{ "RequestGlobalAchievementPercentages", &UUserStats::execRequestGlobalAchievementPercentages },
			{ "RequestGlobalStats", &UUserStats::execRequestGlobalStats },
			{ "RequestUserStats", &UUserStats::execRequestUserStats },
			{ "ResetAllStats", &UUserStats::execResetAllStats },
			{ "SetAchievement", &UUserStats::execSetAchievement },
			{ "SetStatFloat", &UUserStats::execSetStatFloat },
			{ "SetStatInt", &UUserStats::execSetStatInt },
			{ "StoreStats", &UUserStats::execStoreStats },
			{ "UpdateAvgRateStat", &UUserStats::execUpdateAvgRateStat },
			{ "UploadLeaderboardScore", &UUserStats::execUploadLeaderboardScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics
	{
		struct UserStats_eventAttachLeaderboardUGC_Parms
		{
			FScriptDelegate Callback;
			FSteamLeaderboard SteamLeaderboard;
			FSteamUGCHandle Handle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventAttachLeaderboardUGC_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventAttachLeaderboardUGC_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventAttachLeaderboardUGC_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "AttachLeaderboardUGC", nullptr, nullptr, sizeof(UserStats_eventAttachLeaderboardUGC_Parms), Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_ClearAchievement_Statics
	{
		struct UserStats_eventClearAchievement_Parms
		{
			FString Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventClearAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventClearAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventClearAchievement_Parms), &Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "ClearAchievement", nullptr, nullptr, sizeof(UserStats_eventClearAchievement_Parms), Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_ClearAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics
	{
		struct UserStats_eventDownloadLeaderboardEntries_Parms
		{
			FScriptDelegate Callback;
			FSteamLeaderboard SteamLeaderboard;
			ESteamLeaderboardDataRequest DataRequest;
			int32 RangeStart;
			int32 RangeEnd;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataRequest_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataRequest;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RangeStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntries_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntries_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_DataRequest_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_DataRequest = { "DataRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntries_Parms, DataRequest), Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntries_Parms, RangeStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntries_Parms, RangeEnd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_DataRequest_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_DataRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeEnd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "DownloadLeaderboardEntries", nullptr, nullptr, sizeof(UserStats_eventDownloadLeaderboardEntries_Parms), Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics
	{
		struct UserStats_eventDownloadLeaderboardEntriesForUsers_Parms
		{
			FScriptDelegate Callback;
			FSteamLeaderboard SteamLeaderboard;
			TArray<FSteamID> Users;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Users_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Users;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntriesForUsers_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntriesForUsers_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Users_Inner = { "Users", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntriesForUsers_Parms, Users), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Users_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Users,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "DownloadLeaderboardEntriesForUsers", nullptr, nullptr, sizeof(UserStats_eventDownloadLeaderboardEntriesForUsers_Parms), Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics
	{
		struct UserStats_eventFindLeaderboard_Parms
		{
			FScriptDelegate Callback;
			FString LeaderboardName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventFindLeaderboard_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventFindLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "FindLeaderboard", nullptr, nullptr, sizeof(UserStats_eventFindLeaderboard_Parms), Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_FindLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics
	{
		struct UserStats_eventFindOrCreateLeaderboard_Parms
		{
			FScriptDelegate Callback;
			FString LeaderboardName;
			ESteamLeaderboardSortMethod SortMethod;
			ESteamLeaderboardDisplayType DisplayType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplayType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DisplayType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventFindOrCreateLeaderboard_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventFindOrCreateLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventFindOrCreateLeaderboard_Parms, SortMethod), Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_DisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventFindOrCreateLeaderboard_Parms, DisplayType), Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_SortMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_SortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_DisplayType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_DisplayType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "FindOrCreateLeaderboard", nullptr, nullptr, sizeof(UserStats_eventFindOrCreateLeaderboard_Parms), Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievement_Statics
	{
		struct UserStats_eventGetAchievement_Parms
		{
			FString Name;
			bool bAchieved;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((UserStats_eventGetAchievement_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetAchievement_Parms), &Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetAchievement_Parms), &Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievement", nullptr, nullptr, sizeof(UserStats_eventGetAchievement_Parms), Z_Construct_UFunction_UUserStats_GetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics
	{
		struct UserStats_eventGetAchievementAchievedPercent_Parms
		{
			FString Name;
			float Percent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementAchievedPercent_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementAchievedPercent_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetAchievementAchievedPercent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetAchievementAchievedPercent_Parms), &Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_Percent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievementAchievedPercent", nullptr, nullptr, sizeof(UserStats_eventGetAchievementAchievedPercent_Parms), Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics
	{
		struct UserStats_eventGetAchievementAndUnlockTime_Parms
		{
			FString Name;
			bool bAchieved;
			int32 UnlockTime;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementAndUnlockTime_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((UserStats_eventGetAchievementAndUnlockTime_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementAndUnlockTime_Parms, UnlockTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetAchievementAndUnlockTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_UnlockTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievementAndUnlockTime", nullptr, nullptr, sizeof(UserStats_eventGetAchievementAndUnlockTime_Parms), Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics
	{
		struct UserStats_eventGetAchievementDisplayAttribute_Parms
		{
			FString Name;
			FString Key;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementDisplayAttribute_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementDisplayAttribute_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementDisplayAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievementDisplayAttribute", nullptr, nullptr, sizeof(UserStats_eventGetAchievementDisplayAttribute_Parms), Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics
	{
		struct UserStats_eventGetAchievementIcon_Parms
		{
			FString Name;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementIcon_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievementIcon", nullptr, nullptr, sizeof(UserStats_eventGetAchievementIcon_Parms), Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievementIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievementName_Statics
	{
		struct UserStats_eventGetAchievementName_Parms
		{
			int32 Achievement;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Achievement;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::NewProp_Achievement = { "Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementName_Parms, Achievement), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::NewProp_Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievementName", nullptr, nullptr, sizeof(UserStats_eventGetAchievementName_Parms), Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievementName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics
	{
		struct UserStats_eventGetAchievementProgressLimits_Parms
		{
			FString Name;
			int32 MinProgress;
			int32 MaxProgress;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinProgress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementProgressLimits_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_MinProgress = { "MinProgress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementProgressLimits_Parms, MinProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementProgressLimits_Parms, MaxProgress), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetAchievementProgressLimits_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetAchievementProgressLimits_Parms), &Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_MinProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_MaxProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievementProgressLimits", nullptr, nullptr, sizeof(UserStats_eventGetAchievementProgressLimits_Parms), Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics
	{
		struct UserStats_eventGetAchievementProgressLimitsFloat_Parms
		{
			FString Name;
			float MinProgress;
			float MaxProgress;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinProgress;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxProgress;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementProgressLimitsFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_MinProgress = { "MinProgress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementProgressLimitsFloat_Parms, MinProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementProgressLimitsFloat_Parms, MaxProgress), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetAchievementProgressLimitsFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetAchievementProgressLimitsFloat_Parms), &Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_MinProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_MaxProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievementProgressLimitsFloat", nullptr, nullptr, sizeof(UserStats_eventGetAchievementProgressLimitsFloat_Parms), Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics
	{
		struct UserStats_eventGetDownloadedLeaderboardEntry_Parms
		{
			FSteamLeaderboardEntries LeaderboardEntries;
			int32 Index;
			FSteamLeaderboardEntry LeaderboardEntry;
			TArray<int32> Details;
			TArray<int32> outDetails;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntries;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntry;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Details_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Details;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outDetails_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outDetails;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntries = { "LeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetDownloadedLeaderboardEntry_Parms, LeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetDownloadedLeaderboardEntry_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntry = { "LeaderboardEntry", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetDownloadedLeaderboardEntry_Parms, LeaderboardEntry), Z_Construct_UScriptStruct_FSteamLeaderboardEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetDownloadedLeaderboardEntry_Parms, Details), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails_Inner = { "outDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails = { "outDetails", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetDownloadedLeaderboardEntry_Parms, outDetails), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetDownloadedLeaderboardEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetDownloadedLeaderboardEntry_Parms), &Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetDownloadedLeaderboardEntry", nullptr, nullptr, sizeof(UserStats_eventGetDownloadedLeaderboardEntry_Parms), Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics
	{
		struct UserStats_eventGetGlobalStatFloat_Parms
		{
			FString StatName;
			float Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatFloat_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatFloat_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetGlobalStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetGlobalStatFloat_Parms), &Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetGlobalStatFloat", nullptr, nullptr, sizeof(UserStats_eventGetGlobalStatFloat_Parms), Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetGlobalStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics
	{
		struct UserStats_eventGetGlobalStatHistoryFloat_Parms
		{
			FString StatName;
			int32 HistoryDays;
			TArray<float> Data;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryFloat_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryFloat_Parms, HistoryDays), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryFloat_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_HistoryDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetGlobalStatHistoryFloat", nullptr, nullptr, sizeof(UserStats_eventGetGlobalStatHistoryFloat_Parms), Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics
	{
		struct UserStats_eventGetGlobalStatHistoryInt_Parms
		{
			FString StatName;
			int32 HistoryDays;
			TArray<int32> Data;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryInt_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryInt_Parms, HistoryDays), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryInt_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_HistoryDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetGlobalStatHistoryInt", nullptr, nullptr, sizeof(UserStats_eventGetGlobalStatHistoryInt_Parms), Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics
	{
		struct UserStats_eventGetGlobalStatInt_Parms
		{
			FString StatName;
			int32 Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatInt_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatInt_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetGlobalStatInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetGlobalStatInt_Parms), &Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetGlobalStatInt", nullptr, nullptr, sizeof(UserStats_eventGetGlobalStatInt_Parms), Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetGlobalStatInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics
	{
		struct UserStats_eventGetLeaderboardDisplayType_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			ESteamLeaderboardDisplayType ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardDisplayType_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardDisplayType_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetLeaderboardDisplayType", nullptr, nullptr, sizeof(UserStats_eventGetLeaderboardDisplayType_Parms), Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics
	{
		struct UserStats_eventGetLeaderboardEntryCount_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardEntryCount_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardEntryCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetLeaderboardEntryCount", nullptr, nullptr, sizeof(UserStats_eventGetLeaderboardEntryCount_Parms), Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics
	{
		struct UserStats_eventGetLeaderboardName_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardName_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetLeaderboardName", nullptr, nullptr, sizeof(UserStats_eventGetLeaderboardName_Parms), Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetLeaderboardName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics
	{
		struct UserStats_eventGetLeaderboardSortMethod_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			ESteamLeaderboardSortMethod ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardSortMethod_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardSortMethod_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetLeaderboardSortMethod", nullptr, nullptr, sizeof(UserStats_eventGetLeaderboardSortMethod_Parms), Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics
	{
		struct UserStats_eventGetMostAchievedAchievementInfo_Parms
		{
			FString Name;
			float Percent;
			bool bAchieved;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetMostAchievedAchievementInfo_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetMostAchievedAchievementInfo_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((UserStats_eventGetMostAchievedAchievementInfo_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetMostAchievedAchievementInfo_Parms), &Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetMostAchievedAchievementInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Percent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetMostAchievedAchievementInfo", nullptr, nullptr, sizeof(UserStats_eventGetMostAchievedAchievementInfo_Parms), Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics
	{
		struct UserStats_eventGetNextMostAchievedAchievementInfo_Parms
		{
			int32 IteratorPrevious;
			FString Name;
			float Percent;
			bool bAchieved;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IteratorPrevious;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_IteratorPrevious = { "IteratorPrevious", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetNextMostAchievedAchievementInfo_Parms, IteratorPrevious), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetNextMostAchievedAchievementInfo_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetNextMostAchievedAchievementInfo_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((UserStats_eventGetNextMostAchievedAchievementInfo_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetNextMostAchievedAchievementInfo_Parms), &Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetNextMostAchievedAchievementInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_IteratorPrevious,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Percent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetNextMostAchievedAchievementInfo", nullptr, nullptr, sizeof(UserStats_eventGetNextMostAchievedAchievementInfo_Parms), Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics
	{
		struct UserStats_eventGetNumAchievements_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetNumAchievements_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetNumAchievements", nullptr, nullptr, sizeof(UserStats_eventGetNumAchievements_Parms), Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetNumAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics
	{
		struct UserStats_eventGetNumberOfCurrentPlayers_Parms
		{
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetNumberOfCurrentPlayers_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetNumberOfCurrentPlayers", nullptr, nullptr, sizeof(UserStats_eventGetNumberOfCurrentPlayers_Parms), Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetStatFloat_Statics
	{
		struct UserStats_eventGetStatFloat_Parms
		{
			FString Name;
			float Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetStatFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetStatFloat_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetStatFloat_Parms), &Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetStatFloat", nullptr, nullptr, sizeof(UserStats_eventGetStatFloat_Parms), Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetStatInt_Statics
	{
		struct UserStats_eventGetStatInt_Parms
		{
			FString Name;
			int32 Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetStatInt_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetStatInt_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetStatInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetStatInt_Parms), &Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetStatInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetStatInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetStatInt", nullptr, nullptr, sizeof(UserStats_eventGetStatInt_Parms), Z_Construct_UFunction_UUserStats_GetStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetStatInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetStatInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetStatInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetStatInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetStatInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics
	{
		struct UserStats_eventGetUserAchievement_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			bool bAchieved;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((UserStats_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetUserAchievement", nullptr, nullptr, sizeof(UserStats_eventGetUserAchievement_Parms), Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics
	{
		struct UserStats_eventGetUserAchievementAndUnlockTime_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			bool bAchieved;
			int32 UnlockTime;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserAchievementAndUnlockTime_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserAchievementAndUnlockTime_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((UserStats_eventGetUserAchievementAndUnlockTime_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetUserAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserAchievementAndUnlockTime_Parms, UnlockTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetUserAchievementAndUnlockTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetUserAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_UnlockTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetUserAchievementAndUnlockTime", nullptr, nullptr, sizeof(UserStats_eventGetUserAchievementAndUnlockTime_Parms), Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics
	{
		struct UserStats_eventGetUserStatFloat_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			float Data;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserStatFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserStatFloat_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetUserStatFloat_Parms), &Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetUserStatFloat", nullptr, nullptr, sizeof(UserStats_eventGetUserStatFloat_Parms), Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetUserStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics
	{
		struct UserStats_eventGetUserStatInteger_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			int32 Data;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserStatInteger_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserStatInteger_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserStatInteger_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetUserStatInteger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetUserStatInteger_Parms), &Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetUserStatInteger", nullptr, nullptr, sizeof(UserStats_eventGetUserStatInteger_Parms), Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetUserStatInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics
	{
		struct UserStats_eventIndicateAchievementProgress_Parms
		{
			FString Name;
			int32 CurrentProgress;
			int32 MaxProgress;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventIndicateAchievementProgress_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventIndicateAchievementProgress_Parms, CurrentProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventIndicateAchievementProgress_Parms, MaxProgress), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventIndicateAchievementProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventIndicateAchievementProgress_Parms), &Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_CurrentProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_MaxProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "IndicateAchievementProgress", nullptr, nullptr, sizeof(UserStats_eventIndicateAchievementProgress_Parms), Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_IndicateAchievementProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics
	{
		struct UserStats_eventRequestCurrentStats_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventRequestCurrentStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventRequestCurrentStats_Parms), &Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "RequestCurrentStats", nullptr, nullptr, sizeof(UserStats_eventRequestCurrentStats_Parms), Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_RequestCurrentStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics
	{
		struct UserStats_eventRequestGlobalAchievementPercentages_Parms
		{
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventRequestGlobalAchievementPercentages_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "RequestGlobalAchievementPercentages", nullptr, nullptr, sizeof(UserStats_eventRequestGlobalAchievementPercentages_Parms), Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics
	{
		struct UserStats_eventRequestGlobalStats_Parms
		{
			FScriptDelegate Callback;
			int32 HistoryDays;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventRequestGlobalStats_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventRequestGlobalStats_Parms, HistoryDays), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_HistoryDays,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "RequestGlobalStats", nullptr, nullptr, sizeof(UserStats_eventRequestGlobalStats_Parms), Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_RequestGlobalStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_RequestUserStats_Statics
	{
		struct UserStats_eventRequestUserStats_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventRequestUserStats_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventRequestUserStats_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "RequestUserStats", nullptr, nullptr, sizeof(UserStats_eventRequestUserStats_Parms), Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_RequestUserStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_ResetAllStats_Statics
	{
		struct UserStats_eventResetAllStats_Parms
		{
			bool bAchievementsToo;
			bool ReturnValue;
		};
		static void NewProp_bAchievementsToo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchievementsToo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo_SetBit(void* Obj)
	{
		((UserStats_eventResetAllStats_Parms*)Obj)->bAchievementsToo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo = { "bAchievementsToo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventResetAllStats_Parms), &Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventResetAllStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventResetAllStats_Parms), &Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "ResetAllStats", nullptr, nullptr, sizeof(UserStats_eventResetAllStats_Parms), Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_ResetAllStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_SetAchievement_Statics
	{
		struct UserStats_eventSetAchievement_Parms
		{
			FString Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventSetAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventSetAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventSetAchievement_Parms), &Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_SetAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_SetAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_SetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "SetAchievement", nullptr, nullptr, sizeof(UserStats_eventSetAchievement_Parms), Z_Construct_UFunction_UUserStats_SetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_SetAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_SetAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_SetAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_SetStatFloat_Statics
	{
		struct UserStats_eventSetStatFloat_Parms
		{
			FString Name;
			float Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventSetStatFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventSetStatFloat_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventSetStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventSetStatFloat_Parms), &Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "SetStatFloat", nullptr, nullptr, sizeof(UserStats_eventSetStatFloat_Parms), Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_SetStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_SetStatInt_Statics
	{
		struct UserStats_eventSetStatInt_Parms
		{
			FString Name;
			int32 Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventSetStatInt_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventSetStatInt_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventSetStatInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventSetStatInt_Parms), &Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_SetStatInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_SetStatInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_SetStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "SetStatInt", nullptr, nullptr, sizeof(UserStats_eventSetStatInt_Parms), Z_Construct_UFunction_UUserStats_SetStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetStatInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_SetStatInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetStatInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_SetStatInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_SetStatInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_StoreStats_Statics
	{
		struct UserStats_eventStoreStats_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_StoreStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventStoreStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_StoreStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventStoreStats_Parms), &Z_Construct_UFunction_UUserStats_StoreStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_StoreStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_StoreStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_StoreStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_StoreStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "StoreStats", nullptr, nullptr, sizeof(UserStats_eventStoreStats_Parms), Z_Construct_UFunction_UUserStats_StoreStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_StoreStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_StoreStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_StoreStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_StoreStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_StoreStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics
	{
		struct UserStats_eventUpdateAvgRateStat_Parms
		{
			FString Name;
			float CountThisSession;
			float SessionLength;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CountThisSession;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SessionLength;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUpdateAvgRateStat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_CountThisSession = { "CountThisSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUpdateAvgRateStat_Parms, CountThisSession), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_SessionLength = { "SessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUpdateAvgRateStat_Parms, SessionLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventUpdateAvgRateStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventUpdateAvgRateStat_Parms), &Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_CountThisSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_SessionLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "UpdateAvgRateStat", nullptr, nullptr, sizeof(UserStats_eventUpdateAvgRateStat_Parms), Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_UpdateAvgRateStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics
	{
		struct UserStats_eventUploadLeaderboardScore_Parms
		{
			FScriptDelegate Callback;
			FSteamLeaderboard SteamLeaderboard;
			ESteamLeaderboardUploadScoreMethod UploadScoreMethod;
			int32 Score;
			TArray<int32> ScoreDetails;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UploadScoreMethod_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UploadScoreMethod;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreDetails_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScoreDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUploadLeaderboardScore_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUploadLeaderboardScore_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod = { "UploadScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUploadLeaderboardScore_Parms, UploadScoreMethod), Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUploadLeaderboardScore_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_Inner = { "ScoreDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails = { "ScoreDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUploadLeaderboardScore_Parms, ScoreDetails), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "UploadLeaderboardScore", nullptr, nullptr, sizeof(UserStats_eventUploadLeaderboardScore_Parms), Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_UploadLeaderboardScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUserStats_NoRegister()
	{
		return UUserStats::StaticClass();
	}
	struct Z_Construct_UClass_UUserStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserAchievementIconFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserAchievementIconFetched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserAchievementStored_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserAchievementStored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserStatsReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserStatsReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserStatsStored_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserStatsStored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserStatsUnloaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserStatsUnloaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC, "AttachLeaderboardUGC" }, // 3787277768
		{ &Z_Construct_UFunction_UUserStats_ClearAchievement, "ClearAchievement" }, // 226535827
		{ &Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries, "DownloadLeaderboardEntries" }, // 4289273293
		{ &Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers, "DownloadLeaderboardEntriesForUsers" }, // 4001536066
		{ &Z_Construct_UFunction_UUserStats_FindLeaderboard, "FindLeaderboard" }, // 1160085992
		{ &Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard, "FindOrCreateLeaderboard" }, // 202859356
		{ &Z_Construct_UFunction_UUserStats_GetAchievement, "GetAchievement" }, // 172194373
		{ &Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent, "GetAchievementAchievedPercent" }, // 2838595253
		{ &Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime, "GetAchievementAndUnlockTime" }, // 3884217837
		{ &Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute, "GetAchievementDisplayAttribute" }, // 457641390
		{ &Z_Construct_UFunction_UUserStats_GetAchievementIcon, "GetAchievementIcon" }, // 3563188960
		{ &Z_Construct_UFunction_UUserStats_GetAchievementName, "GetAchievementName" }, // 4099105013
		{ &Z_Construct_UFunction_UUserStats_GetAchievementProgressLimits, "GetAchievementProgressLimits" }, // 3748249076
		{ &Z_Construct_UFunction_UUserStats_GetAchievementProgressLimitsFloat, "GetAchievementProgressLimitsFloat" }, // 1362568549
		{ &Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry, "GetDownloadedLeaderboardEntry" }, // 3196474163
		{ &Z_Construct_UFunction_UUserStats_GetGlobalStatFloat, "GetGlobalStatFloat" }, // 390077577
		{ &Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat, "GetGlobalStatHistoryFloat" }, // 383794791
		{ &Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt, "GetGlobalStatHistoryInt" }, // 597383251
		{ &Z_Construct_UFunction_UUserStats_GetGlobalStatInt, "GetGlobalStatInt" }, // 3831871067
		{ &Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType, "GetLeaderboardDisplayType" }, // 1207997697
		{ &Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount, "GetLeaderboardEntryCount" }, // 940281195
		{ &Z_Construct_UFunction_UUserStats_GetLeaderboardName, "GetLeaderboardName" }, // 732152505
		{ &Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod, "GetLeaderboardSortMethod" }, // 984741929
		{ &Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo, "GetMostAchievedAchievementInfo" }, // 3568469237
		{ &Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo, "GetNextMostAchievedAchievementInfo" }, // 4226508097
		{ &Z_Construct_UFunction_UUserStats_GetNumAchievements, "GetNumAchievements" }, // 2301609883
		{ &Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers, "GetNumberOfCurrentPlayers" }, // 916428022
		{ &Z_Construct_UFunction_UUserStats_GetStatFloat, "GetStatFloat" }, // 3654459466
		{ &Z_Construct_UFunction_UUserStats_GetStatInt, "GetStatInt" }, // 83810787
		{ &Z_Construct_UFunction_UUserStats_GetUserAchievement, "GetUserAchievement" }, // 2845119708
		{ &Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime, "GetUserAchievementAndUnlockTime" }, // 3676430789
		{ &Z_Construct_UFunction_UUserStats_GetUserStatFloat, "GetUserStatFloat" }, // 2393584687
		{ &Z_Construct_UFunction_UUserStats_GetUserStatInteger, "GetUserStatInteger" }, // 2918896564
		{ &Z_Construct_UFunction_UUserStats_IndicateAchievementProgress, "IndicateAchievementProgress" }, // 3006558998
		{ &Z_Construct_UFunction_UUserStats_RequestCurrentStats, "RequestCurrentStats" }, // 2904343583
		{ &Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages, "RequestGlobalAchievementPercentages" }, // 453677465
		{ &Z_Construct_UFunction_UUserStats_RequestGlobalStats, "RequestGlobalStats" }, // 2480732650
		{ &Z_Construct_UFunction_UUserStats_RequestUserStats, "RequestUserStats" }, // 2408750486
		{ &Z_Construct_UFunction_UUserStats_ResetAllStats, "ResetAllStats" }, // 3078815028
		{ &Z_Construct_UFunction_UUserStats_SetAchievement, "SetAchievement" }, // 3601355223
		{ &Z_Construct_UFunction_UUserStats_SetStatFloat, "SetStatFloat" }, // 2764286031
		{ &Z_Construct_UFunction_UUserStats_SetStatInt, "SetStatInt" }, // 4209404356
		{ &Z_Construct_UFunction_UUserStats_StoreStats, "StoreStats" }, // 1862129873
		{ &Z_Construct_UFunction_UUserStats_UpdateAvgRateStat, "UpdateAvgRateStat" }, // 2480488123
		{ &Z_Construct_UFunction_UUserStats_UploadLeaderboardScore, "UploadLeaderboardScore" }, // 3027984242
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UserStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementIconFetched_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementIconFetched = { "UserAchievementIconFetched", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserStats, UserAchievementIconFetched), Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementIconFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementIconFetched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementStored_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementStored = { "UserAchievementStored", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserStats, UserAchievementStored), Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementStored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsReceived = { "UserStatsReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserStats, UserStatsReceived), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsStored_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsStored = { "UserStatsStored", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserStats, UserStatsStored), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsStored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsUnloaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsUnloaded = { "UserStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserStats, UserStatsUnloaded), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsUnloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsUnloaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementIconFetched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementStored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsStored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsUnloaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserStats_Statics::ClassParams = {
		&UUserStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUserStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserStats, 2702860310);
	template<> STEAMCORE_API UClass* StaticClass<UUserStats>()
	{
		return UUserStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserStats(Z_Construct_UClass_UUserStats, &UUserStats::StaticClass, TEXT("/Script/SteamCore"), TEXT("UUserStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
