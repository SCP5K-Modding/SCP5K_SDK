#include "WebGameInventory.h"

UWebGameInventory::UWebGameInventory() {
}

void UWebGameInventory::UpdateItemDefs() {
}

void UWebGameInventory::SupportGetAssetHistory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& AssetID, const FString& contextID) {
}

void UWebGameInventory::HistoryExecuteCommands(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& contextID, int32 ActorId) {
}

void UWebGameInventory::GetUserHistory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& contextID, int32 StartTime, int32 EndTime) {
}

void UWebGameInventory::GetHistoryCommandDetails(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& Command, const FString& contextID, const FString& arguments) {
}


