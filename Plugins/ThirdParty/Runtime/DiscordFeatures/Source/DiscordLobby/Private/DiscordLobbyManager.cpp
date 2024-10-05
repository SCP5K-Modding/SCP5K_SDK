#include "DiscordLobbyManager.h"

UDiscordLobbyManager::UDiscordLobbyManager() {
}

void UDiscordLobbyManager::SendNetworkMessage(const int64 LobbyId, const int64 UserId, const uint8 ChannelId, TArray<uint8>& Data) {
}

void UDiscordLobbyManager::OpenNetworkChannel(const int64 LobbyId, const uint8 ChannelId, const bool bReliable) {
}

int32 UDiscordLobbyManager::MemberMetadataCount(const int64 LobbyId, const int64 UserId) {
    return 0;
}

int32 UDiscordLobbyManager::MemberCount(const int64 LobbyId) {
    return 0;
}

int32 UDiscordLobbyManager::LobbyMetadataCount(const int64 LobbyId) {
    return 0;
}

int32 UDiscordLobbyManager::LobbyCount() {
    return 0;
}

FDiscordLobbySearchQuery UDiscordLobbyManager::GetSearchQuery() {
    return FDiscordLobbySearchQuery{};
}

int64 UDiscordLobbyManager::GetMemberUserId(const int64 LobbyId, const int32 Index) {
    return 0;
}

FDiscordUser UDiscordLobbyManager::GetMemberUser(const int64 LobbyId, const int64 UserId) {
    return FDiscordUser{};
}

FDiscordLobbyMemberTransaction UDiscordLobbyManager::GetMemberUpdateTransaction(const int64 LobbyId, const int64 MemberId) {
    return FDiscordLobbyMemberTransaction{};
}

FString UDiscordLobbyManager::GetMemberMetadataValue(const int64 LobbyId, const int64 UserId, const FString& Key) {
    return TEXT("");
}

FString UDiscordLobbyManager::GetMemberMetadataKey(const int64 LobbyId, const int64 UserId, const int32 Index) {
    return TEXT("");
}

FDiscordLobbyTransaction UDiscordLobbyManager::GetLobbyUpdateTransaction(const int64 LobbyId) {
    return FDiscordLobbyTransaction{};
}

FString UDiscordLobbyManager::GetLobbyMetadataValue(const int64 LobbyId, const FString& Key) {
    return TEXT("");
}

FString UDiscordLobbyManager::GetLobbyMetadataKey(const int64 LobbyId, const int32 Index) {
    return TEXT("");
}

UDiscordLobbyManager* UDiscordLobbyManager::GetLobbyManager(UDiscordCore* DiscordCore) {
    return NULL;
}

int64 UDiscordLobbyManager::GetLobbyId(const int32 Index) {
    return 0;
}

FDiscordLobbyTransaction UDiscordLobbyManager::GetLobbyCreateTransaction() {
    return FDiscordLobbyTransaction{};
}

FString UDiscordLobbyManager::GetLobbyActivitySecret(const int64 LobbyId) {
    return TEXT("");
}

FDiscordLobby UDiscordLobbyManager::GetLobby(const int64 LobbyId) {
    return FDiscordLobby{};
}

void UDiscordLobbyManager::FlushNetwork() {
}

void UDiscordLobbyManager::DisconnectNetwork(const int64 LobbyId) {
}

void UDiscordLobbyManager::ConnectNetwork(const int64 LobbyId) {
}


