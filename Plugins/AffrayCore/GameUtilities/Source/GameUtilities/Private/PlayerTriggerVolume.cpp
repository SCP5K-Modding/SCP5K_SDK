#include "PlayerTriggerVolume.h"

APlayerTriggerVolume::APlayerTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bTriggerOnlyOnServer = false;
    this->bOnlyLocalPlayer = false;
    this->bIgnoreBots = true;
    this->bOneUse = false;
    this->bPerPlayer = false;
    this->bStartEnabled = true;
    this->TriggerChance = 1.00f;
}

void APlayerTriggerVolume::TriggerLeft_Implementation(APawn* Pawn) {
}

void APlayerTriggerVolume::TriggerEntered_Implementation(APawn* Pawn) {
}

bool APlayerTriggerVolume::CanTrigger(AActor* OtherActor) const {
    return false;
}


