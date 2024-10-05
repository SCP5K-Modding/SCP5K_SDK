#include "WebEconMarketService.h"

UWebEconMarketService::UWebEconMarketService() {
}

void UWebEconMarketService::GetPopular(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& Language, int32 rows, int32 Start, int32 filterAppID, int32 eCurrency) {
}

void UWebEconMarketService::GetMarketEligibility(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID) {
}

void UWebEconMarketService::GetAssetID(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& listingID) {
}

void UWebEconMarketService::CancelAppListingsForUser(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, bool bSynchronous) {
}


