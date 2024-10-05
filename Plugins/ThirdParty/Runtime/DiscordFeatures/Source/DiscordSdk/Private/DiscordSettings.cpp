#include "DiscordSettings.h"

UDiscordSettings::UDiscordSettings() {
    this->DiscordSdkVersion = 2;
    this->DiscordApplicationManagerVersion = 1;
    this->DiscordUserManagerVersion = 1;
    this->DiscordImageManagerVersion = 1;
    this->DiscordActivityManagerVersion = 1;
    this->DiscordRelationShipManagerVersion = 1;
    this->DiscordLobbyManagerVersion = 1;
    this->DiscordNetworkManagerVersion = 1;
    this->DiscordOverlayManagerVersion = 2;
    this->DiscordStorageManagerVersion = 1;
    this->DiscordStoreManagerVersion = 1;
    this->DiscordVoiceManagerVersion = 1;
    this->DiscordAchievementManagerVersion = 1;
}

FString UDiscordSettings::ToString(int64 Value) {
    return TEXT("");
}


