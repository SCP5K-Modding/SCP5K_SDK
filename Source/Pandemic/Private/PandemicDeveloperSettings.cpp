#include "PandemicDeveloperSettings.h"

UPandemicDeveloperSettings::UPandemicDeveloperSettings() {
    this->DeveloperMode = false;
    this->bForceCurrentLevelLoadedOnStart = false;
    this->SkipPreGameUI = false;
    this->SkipCinematics = false;
    this->Team = -1;
    this->AllowNonAdminsToRunServerCommands = false;
    this->UseCustomLoadout = false;
    this->bDisableEndGameMusic = false;
    this->bOverrideCheckpoint = false;
    this->InvestigationDebug = false;
    this->bOverrideDLCOwnership = false;
}

bool UPandemicDeveloperSettings::DeveloperSettingsEnabled() {
    return false;
}


