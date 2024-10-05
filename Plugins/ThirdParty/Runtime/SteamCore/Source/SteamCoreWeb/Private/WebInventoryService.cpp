#include "WebInventoryService.h"

UWebInventoryService::UWebInventoryService() {
}

void UWebInventoryService::ModifyItems(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& inputJson, const FString& SteamID, int32 Timestamp, const FString& updates) {
}

void UWebInventoryService::GetQuantity(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> itemdefIDs, bool bForce) {
}

void UWebInventoryService::GetPriceSheet(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 Currency) {
}

void UWebInventoryService::GetItemDefs(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& modifiedSince, TArray<int32> itemdefIDs, TArray<int32> workshopIDs, int32 cacheMaxAgeSeconds) {
}

void UWebInventoryService::GetInventory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID) {
}

void UWebInventoryService::ExchangeItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> materialsItemID, TArray<int32> materialsQuantity, const FString& outputItemdefID) {
}

void UWebInventoryService::ConsumeItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& ItemId, const FString& Quantity, const FString& SteamID, const FString& RequestID) {
}

void UWebInventoryService::Consolidate(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> itemdefIDs, bool bForce) {
}

void UWebInventoryService::AddPromoItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 itemdefID, const FString& itemPropsJson, const FString& SteamID, bool bNotify, const FString& RequestID) {
}

void UWebInventoryService::AddItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, TArray<int32> itemdefID, const FString& itemPropsJson, const FString& SteamID, bool bNotify, const FString& RequestID, bool bTradeRestriction) {
}


