#include "ConsumableComponent.h"

UConsumableComponent::UConsumableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EConsumableType::Ammo;
    this->bUseFullAmmo = false;
    this->EventBusComponent = NULL;
}

void UConsumableComponent::SetType(EConsumableType InType) {
}

void UConsumableComponent::InvokeEventOnGameEventBusWithType(const APawn* InstigatedBy, FGameplayTagContainer Tag) const {
}

FGameplayTag UConsumableComponent::GetConsumableTypeGameplayTag() const {
    return FGameplayTag{};
}


