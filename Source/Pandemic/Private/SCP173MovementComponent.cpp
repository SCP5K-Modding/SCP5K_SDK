#include "SCP173MovementComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENetworkSmoothingMode -FallbackName=ENetworkSmoothingMode
#include "Net/UnrealNetwork.h"

USCP173MovementComponent::USCP173MovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetworkSmoothingMode = ENetworkSmoothingMode::Disabled;
    this->bRequestedMoveUseAcceleration = false;
    this->MovementSoundThreshold = 10.00f;
    this->MovementSoundTimeout = 0.20f;
}

void USCP173MovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USCP173MovementComponent, PathFollowingTarget);
}


