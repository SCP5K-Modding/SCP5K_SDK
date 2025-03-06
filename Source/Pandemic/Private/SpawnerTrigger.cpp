#include "SpawnerTrigger.h"

ASpawnerTrigger::ASpawnerTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTriggerOnlyOnServer = true;
    this->bOneUse = true;
    this->TriggerMode = ESpawnTriggerMode::Random;
    this->NumberToTrigger = 0;
    this->RandomWeight = 0.30f;
    this->TargetDistance = 2500.00f;
    this->MinDistance = 1000.00f;
    this->bAllowVisibleSpawns = false;
    this->VisualizerComponent = NULL;
    this->bInvestigate = false;
    this->InvestigateDelayDuration = 0.00f;
    this->InvestigationRange = 15000.00f;
}


