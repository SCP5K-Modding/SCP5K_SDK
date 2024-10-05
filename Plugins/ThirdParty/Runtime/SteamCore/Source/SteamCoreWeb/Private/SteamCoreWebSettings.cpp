#include "SteamCoreWebSettings.h"

USteamCoreWebSettings::USteamCoreWebSettings() {
    this->AsyncTaskTimeout = 15.00f;
    this->DisabledSubsystems = 0;
    this->bDebugging = true;
    this->bDevMode = false;
    this->AppID = 872670;
    this->DevSteamID = TEXT("872670");
    this->bSandboxMode = false;
}


