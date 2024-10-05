#include "DiscordNetworkManager.h"

UDiscordNetworkManager::UDiscordNetworkManager() {
}

UDiscordNetworkManager* UDiscordNetworkManager::GetNetworkManager(const UDiscordCore* DiscordCore) {
    return NULL;
}

EDiscordResult UDiscordNetworkManager::Blueprint_UpdatePeer(const FUint64 PeerId, const FString& Route, EDiscordOperationBranching& Exec) const {
    return EDiscordResult::Ok;
}

EDiscordResult UDiscordNetworkManager::Blueprint_SendMessage(const FUint64 PeerId, const uint8 ChannelId, TArray<uint8> Data, EDiscordOperationBranching& Exec) {
    return EDiscordResult::Ok;
}

EDiscordResult UDiscordNetworkManager::Blueprint_OpenPeer(const FUint64 PeerId, const FString& Route, EDiscordOperationBranching& Exec) const {
    return EDiscordResult::Ok;
}

EDiscordResult UDiscordNetworkManager::Blueprint_OpenChannel(const FUint64 PeerId, const uint8 ChannelId, const bool bReliable, EDiscordOperationBranching& Exec) const {
    return EDiscordResult::Ok;
}

FUint64 UDiscordNetworkManager::Blueprint_GetPeerId() const {
    return FUint64{};
}

EDiscordResult UDiscordNetworkManager::Blueprint_ClosePeer(const FUint64 PeerId, EDiscordOperationBranching& Exec) {
    return EDiscordResult::Ok;
}

EDiscordResult UDiscordNetworkManager::Blueprint_CloseChannel(const FUint64 PeerId, const uint8 ChannelId, EDiscordOperationBranching& Exec) {
    return EDiscordResult::Ok;
}


