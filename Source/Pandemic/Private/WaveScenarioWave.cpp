#include "WaveScenarioWave.h"

FWaveScenarioWave::FWaveScenarioWave() {
    this->PreWaveDelay = 0.00f;
    this->PostWaveDelay = 0.00f;
    this->bUseLoopingSpawnWave = false;
    this->DesiredSpawnCount = 0;
    this->LoopingSpawnInterval = 0;
    this->bUseDelayedSpawnWaves = false;
    this->bWaitForDelayedSpawnWaves = false;
    this->bOverrideSpawnAreas = false;
    this->bRequireObjectiveCompletion = false;
    this->bAutoEndAfterTimer = false;
    this->AutoEndTime = 0.00f;
    this->bRequireKillAllEnemies = false;
    this->bForceKillEnemiesOnWaveCompletion = false;
    this->WaveStartAction = NULL;
    this->WaveEndAction = NULL;
    this->bOverrideWaveSounds = false;
    this->OverrideWaveStartSound = NULL;
    this->OverrideWaveEndSound = NULL;
}

