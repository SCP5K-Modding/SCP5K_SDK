#include "SCP3199AnimationInstance.h"

USCP3199AnimationInstance::USCP3199AnimationInstance() {
    this->RotationDelta = 0.00f;
    this->StoppingAnimAccelerationThreshold = 50.00f;
    this->StoppingAnimMaximumVelocity = 200.00f;
    this->CurrentMovementVelocityThreshold = 400.00f;
    this->MinimumMovementDistance = 300.00f;
    this->CurrentMovementMaxVelocity = 0.00f;
    this->bIsTurning = false;
    this->bShouldAbortMovement = false;
    this->bShouldBeginMovementAnims = false;
    this->bShouldBeginChargeAnims = false;
    this->bShouldEndChargeAnims = false;
    this->bIsStartingMovement = false;
    this->bIsStoppingMovement = false;
    this->bIsSkippingMovementAnims = false;
    this->bIsBelowMaxVelocity = false;
    this->bHasReachedVelocityThreshold = false;
    this->CurrentActionState = ESCP3199ActionState::CalmIdle;
    this->bIsPanicking = false;
    this->bIsCharging = false;
    this->bIsCrashing = false;
    this->bIsEating = false;
}

void USCP3199AnimationInstance::OnUpdatedActionState(ESCP3199ActionState NewActionState) {
}

void USCP3199AnimationInstance::OnChargeCrashed(bool bIsAICrashing) {
}

void USCP3199AnimationInstance::OnAITurning(bool bIsAITurning) {
}

void USCP3199AnimationInstance::OnAIPanicking(bool bIsAIPanicking) {
}

void USCP3199AnimationInstance::OnAIEating(bool bIsAIEating) {
}

void USCP3199AnimationInstance::AnimNotify_ResetMaxVelocity() {
}

void USCP3199AnimationInstance::AnimNotify_ExitMoving() {
}


