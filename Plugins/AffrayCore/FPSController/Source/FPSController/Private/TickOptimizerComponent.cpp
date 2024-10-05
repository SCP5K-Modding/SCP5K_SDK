#include "TickOptimizerComponent.h"

UTickOptimizerComponent::UTickOptimizerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->CurrentInterval = 0.00f;
    this->bSetMeshInterval = false;
    this->NotRecentlyRenderedMultiplier = 2.00f;
    this->DedicatedServerTickTime = 0.10f;
    this->MaxCharacterTickDistance = 10000.00f;
    this->MaxTickTime = 0.05f;
    this->MinCharacterTickDistance = 1500.00f;
}


