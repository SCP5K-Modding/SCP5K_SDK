#include "FPSProjectileMovementComponent.h"

UFPSProjectileMovementComponent::UFPSProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSweepCollision = false;
}


