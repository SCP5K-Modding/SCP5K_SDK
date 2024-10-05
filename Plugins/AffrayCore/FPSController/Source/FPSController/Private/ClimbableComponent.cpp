#include "ClimbableComponent.h"

UClimbableComponent::UClimbableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Height = 1000.00f;
    this->RungDistance = 20.00f;
    this->Width = 100.00f;
    this->bOneSided = false;
    this->ClimbDistance = 50.00f;
}

float UClimbableComponent::GetWidth() const {
    return 0.0f;
}

float UClimbableComponent::GetRungDistance() const {
    return 0.0f;
}

float UClimbableComponent::GetHeight() const {
    return 0.0f;
}


