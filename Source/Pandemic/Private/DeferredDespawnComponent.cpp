#include "DeferredDespawnComponent.h"

UDeferredDespawnComponent::UDeferredDespawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UDeferredDespawnComponent::Server_DeferredDespawn_Implementation(float Delay) {
}

void UDeferredDespawnComponent::Multicast_Despawn_Implementation() {
}


