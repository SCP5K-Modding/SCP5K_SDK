#include "SCP173BController.h"

ASCP173BController::ASCP173BController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Difficulty = ESCP173BDifficulty::ESCP173BDMedium;
    this->PlayerChances = NULL;
    this->IdleTime = NULL;
    this->SadismWeight = 1.00f;
    this->DistanceWeight = 0.50f;
    this->PrejudiceWeight = 1.50f;
    this->ReorganizeObserverGroupFrequency = 1.00f;
    this->MinimumObservationsBeforeAggressionReset = 1;
    this->MaximumObservationBeforeAggressionReset = 3;
    this->MinimumObservationsBeforeAggressionResetWeight = 2.00f;
    this->BloodthirstCheckFrequency = 1.00f;
    this->BloodthirstyTime = 60.00f;
    this->ObservedBloodthirstyMultiplier = 0.20f;
}

void ASCP173BController::ResetAggressionMeter() {
}

void ASCP173BController::RemoveObservers(const TArray<USCP173ObserverComponent*>& ObserversToRemove) {
}

void ASCP173BController::RemoveChances(AActor* TargetActor, int32 NumChances) {
}

bool ASCP173BController::IsIdle() const {
    return false;
}

bool ASCP173BController::IsBloodthirsty() const {
    return false;
}

void ASCP173BController::Idle() {
}

AActor* ASCP173BController::GetCurrentTarget() const {
    return NULL;
}

float ASCP173BController::GetCurrentAggression() const {
    return 0.0f;
}

int32 ASCP173BController::GetChances(AActor* QueryActor) const {
    return 0;
}

void ASCP173BController::ClearTarget() {
}

void ASCP173BController::AddObservers(const TArray<USCP173ObserverComponent*>& NewObservers) {
}


