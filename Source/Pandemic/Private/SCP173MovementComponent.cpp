#include "SCP173MovementComponent.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

USCP173MovementComponent::USCP173MovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetworkSmoothingMode = ENetworkSmoothingMode::Disabled;
    this->bRequestedMoveUseAcceleration = false;
}

void USCP173MovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USCP173MovementComponent, PathFollowingTarget);
}


