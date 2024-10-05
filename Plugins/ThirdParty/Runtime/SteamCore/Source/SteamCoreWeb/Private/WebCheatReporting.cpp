#include "WebCheatReporting.h"

UWebCheatReporting::UWebCheatReporting() {
}

void UWebCheatReporting::StartSecureMultiplayerSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID) {
}

void UWebCheatReporting::RequestVacStatusForUser(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& SessionID) {
}

void UWebCheatReporting::RequestPlayerGameBan(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& reportID, const FString& cheatDescription, int32 Duration, bool bDelayBan) {
}

void UWebCheatReporting::ReportPlayerCheating(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& steamIDReporter, const FString& appData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 suspicionStartTime, int32 Severity) {
}

void UWebCheatReporting::ReportCheatData(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& pathAndFileName, const FString& webCheatURL, const FString& timeNow, const FString& timeStarted, const FString& timeStopped, const FString& cheatName, int32 gameProcessID, int32 cheatProcessID, const FString& cheatParam1, const FString& cheatParam2) {
}

void UWebCheatReporting::RemovePlayerGameBan(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID) {
}

void UWebCheatReporting::GetCheatingReports(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 timeEnd, int32 timeBegin, const FString& reportidMin, bool bIncludeReports, bool bIncludeBans, const FString& SteamID) {
}

void UWebCheatReporting::EndSecureMultiplayerSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& SessionID) {
}


