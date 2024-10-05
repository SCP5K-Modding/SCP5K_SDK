#include "PandemicDifficulty.h"

UPandemicDifficulty::UPandemicDifficulty() {
    this->DifficultyLevel = 0;
    this->bForceUseRespawnWaves = false;
    this->bNoRespawns = false;
    this->bRespawnWithNothing = false;
    this->RespawnTimerMultiplier = 1.00f;
    this->AIAgressivenessMultiplier = 1.00f;
    this->AIAccuracyMultiplier = 1.00f;
    this->AISpawnMultiplier = 1.00f;
    this->SpecialAIHealthMultiplier = 1.00f;
    this->ItemSpawnMultiplier = 1.00f;
    this->AmmoSpawnMultiplier = 1.00f;
    this->HealthSpawnMultiplier = 1.00f;
    this->HealMultiplier = 1.00f;
    this->PlayerHealthMultiplier = 1.00f;
    this->bForceDisablePlayerIndicators = false;
    this->bForceDisableHealthHUD = false;
}


