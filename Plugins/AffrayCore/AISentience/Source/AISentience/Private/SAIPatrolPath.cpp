#include "SAIPatrolPath.h"
#include "Components/SceneComponent.h"

ASAIPatrolPath::ASAIPatrolPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->PatrolPath = (USceneComponent*)RootComponent;
    this->PatrolKey = TEXT("InsertPatrolKeyHere");
    this->PatrolType = EPatrolType::PT_Casual;
    this->Priority = 0;
}

TEnumAsByte<EPatrolType::Type> ASAIPatrolPath::GetPatrolType() const {
    return EPatrolType::PT_Casual;
}

FName ASAIPatrolPath::GetPatrolKey() const {
    return NAME_None;
}


