#include "CreateLobbyProxy.h"

UCreateLobbyProxy::UCreateLobbyProxy() {
}

void UCreateLobbyProxy::OnResult(EDiscordResult Result, FDiscordLobby& Lobby) {
}

UCreateLobbyProxy* UCreateLobbyProxy::CreateLobby(UDiscordLobbyManager* LobbyManager, const FDiscordLobbyTransaction& Transaction) {
    return NULL;
}


