#include "SCP610AnimationInstance.h"

USCP610AnimationInstance::USCP610AnimationInstance() {
    this->bIsDead = false;
    this->bIsFakingDeath = false;
    this->bIsServer = false;
    this->CurrentLifeState = EZombieLifeState::Alive;
    this->bIsRagdolling = false;
    this->bIsReanimating = false;
   this->VelocityDirection = 0.00f;
    this->RelativeRotation = 0.00f;
    this->bIsMoving = false;
    this->AccellerationDirection = 0.00f;
    this->AccellerationAmount = 0.00f;
    this->bIsSprinting = false;
    this->bIsFalling = false;
    this->WalkingSpeedRatio = 0.00f;
    this->RunningSpeedRatio = 0.00f;
    this->SpeedRatioAmount = 0.50f;
    this->WalkingSpeed = 100.00f;
    this->RunningSpeed = 400.00f;
    this->RunningTransition = 0.30f;
    this->CurrentSpeedCurveValue = 0.00f;
    this->CurrentSpeed = 0.00f;    this->RandomIdleAnimation = NULL;
    this->RandomizedAnimStartPosition = 0.00f;
    this->RandomLocomotionAdditiveAnimation = NULL;
}

void USCP610AnimationInstance::SetSCPCharacter(ASCP610Character* DesiredCharacter) {
}

void USCP610AnimationInstance::SetCharacter(ACharacter* DesiredCharacter) {
}

void USCP610AnimationInstance::OnSyncPoseSnapshot(const FPoseSnapshot UpdatedPoseSnapshot, const bool bIsFaceUp) {
}

void USCP610AnimationInstance::On610UpdatedLifeState() {
}

void USCP610AnimationInstance::On610Died_Implementation(UHealthComponent* UpdatedHealthComponent) {
}

FPoseSnapshot USCP610AnimationInstance::GetSyncedRagdollSnapshot() const {
    return FPoseSnapshot{};
}

ASCP610Character* USCP610AnimationInstance::GetSCPCharacter() const {
    return NULL;
}

ACharacter* USCP610AnimationInstance::GetCharacter() const {
    return NULL;
}


