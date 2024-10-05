#include "CrowdFollowingAIControllerBase.h"
#include "CrowdFollowingNavQueryFilter.h"

ACrowdFollowingAIControllerBase::ACrowdFollowingAIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultNavigationFilterClass = UCrowdFollowingNavQueryFilter::StaticClass();
    this->NavQueryCostVariance = 1.00f;
    this->NavQueryCostMultiplier = 1.50f;
}

void ACrowdFollowingAIControllerBase::SetNavQueryCostVariance(float NewVariance) {
}

void ACrowdFollowingAIControllerBase::SetNavQueryCostMultiplier(float NewMultiplier) {
}


