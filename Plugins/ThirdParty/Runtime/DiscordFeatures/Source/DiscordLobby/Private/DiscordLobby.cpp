#include "DiscordLobby.h"

FDiscordLobby::FDiscordLobby() {
    this->ID = 0;
    this->Type = EDiscordLobbyType::None;
    this->OwnerId = 0;
    this->Capacity = 0;
    this->bLocked = false;
}

