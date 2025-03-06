#include "FastCharacterMovementComponent.h"

UFastCharacterMovementComponent::UFastCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysCheckFloor = false;
    this->bFullySimulateMovement = true;
    this->bUpdatesFloorWhenNotInFullSimulation = false;
    this->bUpdatesFloorWhenNotInFullSimulationOnlyOnNetUpdate = true;
    this->bIsSimulatedFloorCheckRequiredIfRendered = true;
    this->bClientCanEverCheckEncroachmentOnNetUpdate = true;
    this->bDisableOverlapsOnSimulatedProxy = true;
    this->MinTickInterval = 0.00f;
    this->MaxTickInterval = 0.05f;
    this->NavWalkingMaxSignificance = 0.30f;
    this->FullSimulationMinSignificance = 0.85f;
    this->FramesUntilAnimFloorUpdate = 0;
    this->bFloorUpdateRequestedForAnimation = false;
}


