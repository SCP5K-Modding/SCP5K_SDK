#include "WebApps.h"

UWebApps::UWebApps() {
}

void UWebApps::UpToDateCheck(const FOnSteamCoreWebCallback& Callback, int32 AppID, int32 Version) {
}

void UWebApps::SetAppBuildLive(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 buildID, const FString& betaKey, const FString& Description) {
}

void UWebApps::GetServersAtAddress(const FOnSteamCoreWebCallback& Callback, const FString& addr) {
}

void UWebApps::GetServerList(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& Filter, int32 Limit) {
}

void UWebApps::GetPlayersBanned(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID) {
}

void UWebApps::GetCheatingReports(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 timeBegin, int32 timeEnd, bool bIncludeReports, bool bIncludeBans, int32 reportidMin) {
}

void UWebApps::GetAppList(const FOnSteamCoreWebCallback& Callback, const FString& Key) {
}

void UWebApps::GetAppDepotVersions(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID) {
}

void UWebApps::GetAppBuilds(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 Count) {
}

void UWebApps::GetAppBetas(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID) {
}


