#include "SCP3199AnimationInstance.h"

USCP3199AnimationInstance::USCP3199AnimationInstance() {
    this->RotationDelta = 0.00f;
    this->CurrentActionState = ESCP3199ActionState::CalmIdle;
    this->bIsPanicking = false;
    this->bIsCharging = false;
    this->bIsCrashing = false;
    this->bIsTurning = false;
}

void USCP3199AnimationInstance::OnUpdatedActionState(ESCP3199ActionState NewActionState) {
}

void USCP3199AnimationInstance::OnChargeCrashed() {
}


