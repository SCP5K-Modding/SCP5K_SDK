#include "FPSCharacterMovementComponent.h"

UFPSCharacterMovementComponent::UFPSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxWalkSpeedSprinting = 500.00f;
    this->ClimbMovementSpeedUp = 100.00f;
    this->ClimbMovementSpeedDown = 100.00f;
    this->MaxClimbEnterVelocity = 400.00f;
    this->ClimbingFriction = 3.00f;
    this->ClimbingBrakingDeceleration = 8.00f;
    this->MaxMovementSpeedMultiplier = 1.00f;
    this->FPSCharacterOwner = NULL;
    this->bWantsSprint = false;
    this->bWantsProne = false;
    this->bWantsAiming = false;
    this->bWantsClimb = false;
    this->MovementSpeedMultiplier = 1.00f;
    this->ItemIndex = 0;
}

float UFPSCharacterMovementComponent::TransitionToPoint(FTransform Target, UAnimMontage* Montage) {
    return 0.0f;
}

void UFPSCharacterMovementComponent::StopSprinting() {
}

void UFPSCharacterMovementComponent::StartSprinting() {
}

bool UFPSCharacterMovementComponent::IsCustomMovementMode(TEnumAsByte<EFPSCustomMovementMode> InMovementMode) const {
    return false;
}

UClimbableComponent* UFPSCharacterMovementComponent::GetCurrentClimbable() {
    return NULL;
}

void UFPSCharacterMovementComponent::ExitClimb() {
}

void UFPSCharacterMovementComponent::EnterClimb(UClimbableComponent* NewClimbable) {
}


