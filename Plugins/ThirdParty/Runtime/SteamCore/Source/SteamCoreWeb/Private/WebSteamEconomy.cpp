#include "WebSteamEconomy.h"

UWebSteamEconomy::UWebSteamEconomy() {
}

void UWebSteamEconomy::StartTrade(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& steamID1, const FString& steamID2) {
}

void UWebSteamEconomy::StartAssetTransaction(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& AssetID, int32 assetQuantity, const FString& Currency, const FString& Language, const FString& ipaddress, const FString& referer, bool bClientAuth) {
}

void UWebSteamEconomy::GetMarketPrices(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID) {
}

void UWebSteamEconomy::GetExportedAssetsForUser(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& contextID) {
}

void UWebSteamEconomy::GetAssetPrices(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Currency, const FString& Language) {
}

void UWebSteamEconomy::GetAssetClassInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Language, int32 classCount, const FString& classID, const FString& InstanceId) {
}

void UWebSteamEconomy::FinalizeAssetTransaction(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& txnID, const FString& Language) {
}

void UWebSteamEconomy::CanTrade(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& TargetId) {
}


