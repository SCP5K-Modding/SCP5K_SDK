#include "ResonatorController.h"

AResonatorController::AResonatorController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ResonatorCharacter = NULL;
    this->CurrentDistanceMovementValue = 0.00f;
    this->MovementSpeedThreatCap = 1000.00f;
    this->ThreatWeight = 0.00f;
    this->DistanceWeight = 0.00f;
    this->AlertnessWeight = 0.00f;
    this->IdleMultiplier = 0.00f;
    this->InvestigatingMultiplier = 0.00f;
    this->SearchingMultiplier = 0.00f;
    this->ChasingMultiplier = 0.00f;
    this->InitialMoveToPathLength = 0.00f;
}

void AResonatorController::SetInitialMoveToPathLength(float PathLength) {
}


