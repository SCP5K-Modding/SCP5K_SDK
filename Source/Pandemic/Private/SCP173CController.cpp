#include "SCP173CController.h"

ASCP173CController::ASCP173CController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviourTree = NULL;
    this->BehaviourDelayTime = 3.00f;
    this->ActivationRadius = 1300.00f;
    this->MaximumDistanceTolerance = 8000.00f;
}

AActor* ASCP173CController::GetCurrentTarget() const {
    return NULL;
}


