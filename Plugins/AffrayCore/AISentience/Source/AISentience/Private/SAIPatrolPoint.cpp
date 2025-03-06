#include "SAIPatrolPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ASAIPatrolPoint::ASAIPatrolPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->PatrolWaitTime = 5.00f;
    this->PatrolPoint = (USceneComponent*)RootComponent;
}

float ASAIPatrolPoint::GetPatrolWaitTime() const {
    return 0.0f;
}


