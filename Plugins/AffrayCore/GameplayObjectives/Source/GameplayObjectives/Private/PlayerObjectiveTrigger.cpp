#include "PlayerObjectiveTrigger.h"
#include "EObjectiveTriggerAction.h"

APlayerObjectiveTrigger::APlayerObjectiveTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Action = EObjectiveTriggerAction::None;
    this->bDestroyOnEnter = false;
}

void APlayerObjectiveTrigger::OnObjectiveReset(UObjective* InObjective) {
}

void APlayerObjectiveTrigger::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


