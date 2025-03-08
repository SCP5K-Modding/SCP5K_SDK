#include "HordeAgentController.h"
#include "Navigation/CrowdFollowingComponent.h"

AHordeAgentController::AHordeAgentController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->bEnableCrowdSeparation = true;
    this->bEnableCrowdObstacleAvoidance = true;
    this->bEnableCrowdAnticipateTurns = true;
    this->bEnableCrowdOptimizeVisibility = true;
    this->bEnableCrowdPathOffset = true;
    this->CrowdSeparationWeight = 1.00f;
}

void AHordeAgentController::OnVisibleTargetUpdated(AActor* SeenActor, FAIStimulus Stimulus) {
}

TArray<APawn*> AHordeAgentController::GetSeenTargets() {
    return TArray<APawn*>();
}

AHordeAgent* AHordeAgentController::GetHordeAgent() const {
    return NULL;
}


