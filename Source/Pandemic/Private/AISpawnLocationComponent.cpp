#include "AISpawnLocationComponent.h"

UAISpawnLocationComponent::UAISpawnLocationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bAllowSubclasses = true;
    this->bOverrideActivationRadius = false;
    this->ActivationRadius = 1000.00f;
    this->bOverrideRevealCondition = false;
    this->bOneUse = false;
}

bool UAISpawnLocationComponent::SupportsClass(const TSoftClassPtr<APawn>& Class) const {
    return false;
}

void UAISpawnLocationComponent::SpawnLocationUsed_Implementation(APawn* Pawn, URevealAnimationComponent* RevealAnimation) {
}

void UAISpawnLocationComponent::RevealAnimationFinished(bool bInterrupted) {
}


