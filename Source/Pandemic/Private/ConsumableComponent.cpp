#include "ConsumableComponent.h"

UConsumableComponent::UConsumableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EConsumableType::Ammo;
    this->bUseFullAmmo = false;
}

void UConsumableComponent::SetType(EConsumableType InType) {
}


