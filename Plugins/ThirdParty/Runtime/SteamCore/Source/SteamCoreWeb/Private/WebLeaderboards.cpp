#include "WebLeaderboards.h"

UWebLeaderboards::UWebLeaderboards() {
}

void UWebLeaderboards::SetLeaderboardScore(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 leaderbordID, const FString& SteamID, int32 Score, TArray<uint8> Details, const FString& scoreMethod) {
}

void UWebLeaderboards::ResetLeaderboard(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 leaderbordID) {
}

void UWebLeaderboards::GetLeaderboardsForGame(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID) {
}

void UWebLeaderboards::GetLeaderboardEntries(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 leaderboardID, int32 DataRequest, const FString& SteamID) {
}

void UWebLeaderboards::FindOrCreateLeaderboard(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Name, const FString& SortMethod, const FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads) {
}

void UWebLeaderboards::DeleteLeaderboard(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Name) {
}


