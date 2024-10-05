#include "PandemicDeveloperSettings.h"

UPandemicDeveloperSettings::UPandemicDeveloperSettings() {
    this->DeveloperMode = false;
    this->bForceCurrentLevelLoadedOnStart = false;
    this->SkipPreGameUI = false;
    this->Team = -1;
    this->UseCustomLoadout = false;
    this->bOverrideCheckpoint = false;
}


