#include "WebSteamUser.h"

UWebSteamUser::UWebSteamUser() {
}

void UWebSteamUser::ResolveVanityURL(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& vanityURL, EVanityUrlType urlType) {
}

void UWebSteamUser::GrantPackage(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 packageID, const FString& ipaddress, const FString& thirdPartyKey, int32 thirdPartyAppID) {
}

void UWebSteamUser::GetUserGroupList(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID) {
}

void UWebSteamUser::GetPublisherAppOwnershipChanges(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& packageRowVersion, const FString& cdkeyRowVersion) {
}

void UWebSteamUser::GetPublisherAppOwnership(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID) {
}

void UWebSteamUser::GetPlayerSummaries(const FOnSteamCoreWebCallback& Callback, const FString& Key, TArray<FString> SteamIDs) {
}

void UWebSteamUser::GetPlayerBans(const FOnSteamCoreWebCallback& Callback, const FString& Key, TArray<FString> SteamIDs) {
}

void UWebSteamUser::GetFriendList(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& Relationship) {
}

void UWebSteamUser::GetAppPriceInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, TArray<int32> AppIDs) {
}

void UWebSteamUser::CheckAppOwnership(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID) {
}


