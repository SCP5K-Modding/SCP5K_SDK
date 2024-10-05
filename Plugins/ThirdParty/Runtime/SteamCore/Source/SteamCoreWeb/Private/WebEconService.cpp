#include "WebEconService.h"

UWebEconService::UWebEconService() {
}

void UWebEconService::GetTradeOffersSummary(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 timeLastVisit) {
}

void UWebEconService::GetTradeOffers(const FOnSteamCoreWebCallback& Callback, const FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32 timeHistoricalCutoff) {
}

void UWebEconService::GetTradeOffer(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& tradeOfferID, const FString& Language) {
}

void UWebEconService::GetTradeHistory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 maxTrades, int32 startAfterTime, const FString& startAfterTradeID, bool bNavigatingBack, bool bGetDescriptions, const FString& Language, bool bIncludeFailed, bool bIncludeTotal) {
}

void UWebEconService::FlushInventoryCache(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& contextID) {
}

void UWebEconService::FlushContextCache(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID) {
}

void UWebEconService::FlushAssetAppearanceCache(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID) {
}

void UWebEconService::DeclineTradeOffer(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& tradeOfferID) {
}

void UWebEconService::CancelTradeOffer(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& tradeOfferID) {
}


