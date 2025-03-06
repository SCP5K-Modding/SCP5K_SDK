#include "NavProjectileMovementComponent.h"

UNavProjectileMovementComponent::UNavProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConstrainToPlane = true;
    this->GroundTraceLength = 300.00f;
    this->GroundTraceOffset = 50.00f;
}


