#include "FootstepComponent.h"

UFootstepComponent::UFootstepComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OcclusionCollisionChannel = ECC_Visibility;
    this->BaseFootstepSound = NULL;
    this->CameraShakeClass = NULL;
    this->CameraShakeInnerRadius = 100.00f;
    this->CameraShakeOuterRadius = 300.00f;
    this->MaxWalkSpeed = 400.00f;
    this->MaxFallSpeed = 1000.00f;
    this->TraceLength = 10.00f;
}

bool UFootstepComponent::TryFootstep(FVector position, EFootstepContext FootstepContext) {
    return false;
}


