#include "SCP173BController.h"

ASCP173BController::ASCP173BController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Difficulty = ESCP173BDifficulty::ESCP173BDMedium;
    this->PlayerChances = NULL;
    this->IdleTime = NULL;
    this->SadismWeight = 1.00f;
    this->DistanceWeight = 0.50f;
    this->PrejudiceWeight = 1.50f;
}

void ASCP173BController::RemoveChances(AActor* TargetActor, int32 NumChances) {
}

bool ASCP173BController::IsIdle() const {
    return false;
}

void ASCP173BController::Idle() {
}

AActor* ASCP173BController::GetCurrentTarget() const {
    return NULL;
}

int32 ASCP173BController::GetChances(AActor* QueryActor) const {
    return 0;
}


