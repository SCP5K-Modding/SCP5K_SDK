#include "CrowdFollowingAIController.h"
#include "Navigation/CrowdFollowingComponent.h"

ACrowdFollowingAIController::ACrowdFollowingAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->bEnableCrowdSeparation = true;
    this->bEnableCrowdObstacleAvoidance = true;
    this->bEnableCrowdAnticipateTurns = true;
    this->bEnableCrowdOptimizeVisibility = true;
    this->bEnableCrowdPathOffset = true;
    this->CrowdSeparationWeight = 1.00f;
    this->bUseFocus = true;
    this->Team = 255;
}

FVector ACrowdFollowingAIController::GetNextPathPoint() {
    return FVector{};
}

FVector ACrowdFollowingAIController::GetNextPathDir() {
    return FVector{};
}


