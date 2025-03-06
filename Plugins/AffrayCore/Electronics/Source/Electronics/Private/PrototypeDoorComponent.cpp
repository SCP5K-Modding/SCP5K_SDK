#include "PrototypeDoorComponent.h"

UPrototypeDoorComponent::UPrototypeDoorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Velocity = 0.00f;
    this->position = 0.00f;
    this->Friction = 0.10f;
    this->MinPosition = 0.00f;
    this->MaxPosition = 1.00f;
    this->bLatched = false;
}

void UPrototypeDoorComponent::RemoveInfluencingActor(AActor* Actor) {
}

void UPrototypeDoorComponent::AddInfluencingActor(AActor* Actor) {
}


