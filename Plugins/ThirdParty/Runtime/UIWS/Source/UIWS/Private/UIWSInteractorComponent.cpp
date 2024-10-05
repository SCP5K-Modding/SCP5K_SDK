#include "UIWSInteractorComponent.h"

UUIWSInteractorComponent::UUIWSInteractorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldInteract = true;
    this->bEnableInteractiveStateSwitching = true;
    this->MinInteractionVelocity = 50.00f;
}

void UUIWSInteractorComponent::UpdateComponentList() {
}


