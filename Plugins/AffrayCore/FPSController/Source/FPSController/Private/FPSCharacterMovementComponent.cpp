#include "FPSCharacterMovementComponent.h"

UFPSCharacterMovementComponent::UFPSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSweepWhileNavWalking = false;
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
    this->bPrevWantsClimb = false;
    this->ItemIndex = 0;
    this->bFullySimulateMovement = true;
    this->bUpdatesFloorWhenNotInFullSimulation = false;
    this->bUpdatesFloorWhenNotInFullSimulationOnlyOnNetUpdate = true;
    this->bIsSimulatedFloorCheckRequiredIfRendered = true;
    this->bClientCanEverCheckEncroachmentOnNetUpdate = true;
    this->FramesUntilAnimFloorUpdate = 0;
    this->bFloorUpdateRequestedForAnimation = false;
    this->MinTickInterval = 0.00f;
    this->MaxTickInterval = 0.05f;
    this->NavWalkingMaxSignificance = 0.30f;
    this->FullSimulationMinSignificance = 0.80f;
}

float UFPSCharacterMovementComponent::TransitionToPoint(FTransform Target, UAnimMontage* Montage, bool bUseFlyMovement) {
    return 0.0f;
}

void UFPSCharacterMovementComponent::StopSprinting() {
}

void UFPSCharacterMovementComponent::StartSprinting() {
}

void UFPSCharacterMovementComponent::StartClimbing(UClimbableComponent* NewClimbable) {
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


