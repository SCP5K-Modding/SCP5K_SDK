#include "DoorComponent.h"

UDoorComponent::UDoorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Velocity = 0.00f;
    this->position = 0.00f;
    this->Friction = 0.10f;
    this->MinPosition = 0.00f;
    this->MaxPosition = 1.00f;
    this->bLatched = false;
}

void UDoorComponent::RemoveInfluencingActor(AActor* Actor) {
}

void UDoorComponent::AddInfluencingActor(AActor* Actor) {
}


