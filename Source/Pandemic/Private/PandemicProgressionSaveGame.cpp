#include "PandemicProgressionSaveGame.h"

UPandemicProgressionSaveGame::UPandemicProgressionSaveGame() {
    this->TotalKills = 0;
    this->TotalDeaths = 0;
    this->PlayerKills = 0;
    this->Headshots = 0;
    this->XP = 0;
    this->Heals = 0;
    this->Level = 0;
    this->WorldsDestroyed = 0;
}

void UPandemicProgressionSaveGame::Setup(APandemicPlayerState* Player) {
}


