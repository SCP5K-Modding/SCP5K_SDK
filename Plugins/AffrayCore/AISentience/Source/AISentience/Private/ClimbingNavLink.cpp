#include "ClimbingNavLink.h"

AClimbingNavLink::AClimbingNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSmartLinkIsRelevant = true;
    this->Type = EClimbingType::None;
}

void AClimbingNavLink::SmartLinkReached(AActor* PathOwner, const FVector& DestinationPoint) {
}


