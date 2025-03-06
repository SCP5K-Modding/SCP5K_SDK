#include "WaveSpawn.h"

FWaveSpawn::FWaveSpawn() {
    this->Amount = 0;
    this->SpawnScaling = ESpawnScaling::None;
    this->bAllowPartialSpawn = false;
    this->MinimumSpawnScore = 0.00f;
    this->MinimumDistance = 0.00f;
    this->MaximumDistance = 0.00f;
}

