#include "SteamCoreSettings.h"

USteamCoreSettings::USteamCoreSettings() {
    this->DisabledSubsystems = 0;
    this->bDebugging = true;
    this->AsyncTaskTimeout = 15.00f;
    this->bEnabled = true;
    this->bRelaunchInSteam = false;
    this->bVACEnabled = false;
    this->bAllowP2PPacketRelay = true;
    this->P2PConnectionTimeout = 90;
    this->SteamAppId = 872670;
    this->SteamDevAppId = 872670;
    this->Port = 7777;
    this->GameServerQueryPort = 27015;
    this->GameVersion = TEXT("0.4.1.0");
}


