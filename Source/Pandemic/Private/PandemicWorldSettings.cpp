#include "PandemicWorldSettings.h"

APandemicWorldSettings::APandemicWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnCamera = NULL;
    this->PostGameCamera = NULL;
    this->LightManager = NULL;
    this->PreGameManager = NULL;
    this->bIsGameplay = true;
    this->bCanHost = true;
}

bool APandemicWorldSettings::GetCheckpoint(FName CheckpointID, FCheckpoint& Checkpoint) {
    return false;
}


