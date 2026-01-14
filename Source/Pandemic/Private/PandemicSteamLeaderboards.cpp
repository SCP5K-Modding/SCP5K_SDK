#include "PandemicSteamLeaderboards.h"

UPandemicSteamLeaderboards::UPandemicSteamLeaderboards() {
}

bool UPandemicSteamLeaderboards::UploadEntry(int32 Score, const FLeaderboardDetails& Details) {
    return false;
}

FLeaderboardDetails UPandemicSteamLeaderboards::MakeLeaderboardDetailsFromArray(const TArray<int32>& DataArray) {
    return FLeaderboardDetails{};
}

FLeaderboardDetails UPandemicSteamLeaderboards::MakeLeaderboardDetails(int32 NumCompletedChambers, APandemicGameStateBase* GameState) {
    return FLeaderboardDetails{};
}

TArray<uint8> UPandemicSteamLeaderboards::IntToByteArray(const TArray<int32>& inArray) {
    return TArray<uint8>();
}

//FString UPandemicSteamLeaderboards::GetLeaderboardName(FSteamLeaderboard InLeaderboard) {
//    return TEXT("");
//}

// bool UPandemicSteamLeaderboards::GetLeaderboardEntries(TArray<FSteamLeaderboardEntry>& OutLeaderboardEntries) {
//     return false;
// }

TArray<FString> UPandemicSteamLeaderboards::GetLeaderboardDetailsPlayerIDs(const FLeaderboardDetails& InLeaderboardDetails) {
    return TArray<FString>();
}

TArray<int32> UPandemicSteamLeaderboards::GetLeaderboardDetailsDataArray(const FLeaderboardDetails& InLeaderboardDetails) {
    return TArray<int32>();
}

EPandemicLeaderboardSortMethod UPandemicSteamLeaderboards::GetCurrentLeaderboardSortMethod() {
    return EPandemicLeaderboardSortMethod::None;
}

int32 UPandemicSteamLeaderboards::GetCurrentLeaderboardEntryCount() {
    return 0;
}

EPandemicLeaderboardDisplayType UPandemicSteamLeaderboards::GetCurrentLeaderboardDisplayType() {
    return EPandemicLeaderboardDisplayType::None;
}

// bool UPandemicSteamLeaderboards::GetCurrentLeaderboard(FSteamLeaderboard& CurrentLeaderboard) {
//     return false;
// }

void UPandemicSteamLeaderboards::FindLeaderboard(const FString& LeaderboardName) {
}

// bool UPandemicSteamLeaderboards::DownloadEntriesForUsers(TArray<FSteamID> SteamIDs) {
//     return false;
// }

bool UPandemicSteamLeaderboards::DownloadEntries(EPandemicLeaderboardDataRequest DataRequestType, int32 RangeStart, int32 RangeEnd) {
    return false;
}


