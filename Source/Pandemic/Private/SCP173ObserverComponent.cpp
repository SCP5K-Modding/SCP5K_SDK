#include "SCP173ObserverComponent.h"

USCP173ObserverComponent::USCP173ObserverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Attentiveness = 0.00f;
    this->ChancesLeft = 0;
    this->LastUpdateTime = 0.00f;
    this->bIsPlayer = false;
}

bool USCP173ObserverComponent::IsPlayer() const {
    return false;
}

bool USCP173ObserverComponent::IsAI() const {
    return false;
}


