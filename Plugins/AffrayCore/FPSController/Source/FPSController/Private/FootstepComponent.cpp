#include "FootstepComponent.h"

UFootstepComponent::UFootstepComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OcclusionCollisionChannel = ECC_Visibility;
    this->BaseFootstepSound = NULL;
    this->MaxSpeed = 400.00f;
    this->TraceLength = 10.00f;
}

bool UFootstepComponent::TryFootstep(FVector position) {
    return false;
}


