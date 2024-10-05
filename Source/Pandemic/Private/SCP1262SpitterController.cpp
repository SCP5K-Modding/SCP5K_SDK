#include "SCP1262SpitterController.h"

ASCP1262SpitterController::ASCP1262SpitterController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LookAheadFactor = 1.00f;
    this->LookAheadProjectileVelocity = 5000.00f;
}


