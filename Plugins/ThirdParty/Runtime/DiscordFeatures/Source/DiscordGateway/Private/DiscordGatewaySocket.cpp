#include "DiscordGatewaySocket.h"

UDiscordGatewaySocket::UDiscordGatewaySocket() {
}

void UDiscordGatewaySocket::SendRaw(const FString& Data) {
}

void UDiscordGatewaySocket::SendIdentifyCommand(const FString& Token, const FDiscordGatewayIdentifyProperties& Properties, const FDiscordGatewayShard& Shard, const FDiscordGatewayStatusUpdate& Presence, const TArray<EDiscordGatewayIntents>& Intents, const int32 LargeThreshold, const bool bGuildSubscriptions) {
}

void UDiscordGatewaySocket::SendCommand(const int32 Op, const FString& Data) {
}

bool UDiscordGatewaySocket::IsConnected() const {
    return false;
}

void UDiscordGatewaySocket::CloseConnection() {
}


