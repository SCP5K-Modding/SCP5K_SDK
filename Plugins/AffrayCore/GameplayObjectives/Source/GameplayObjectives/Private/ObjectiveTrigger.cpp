#include "ObjectiveTrigger.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"

AObjectiveTrigger::AObjectiveTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->UpdateOverlapsMethodDuringLevelStreaming = EActorUpdateOverlapsMethod::AlwaysUpdate;
    this->Action = EObjectiveTriggerAction::Complete;
    this->bDestroyOnEnter = true;
    this->bDestroyOnObjectiveActivate = false;
    this->bDestroyOnObjectiveDeactivate = false;
    this->bSucceed = true;
    this->bEvenIfNotActive = false;
    this->bStart = false;
    this->bDisplayOnUI = true;
    this->bReset = false;
    this->ObjectiveManager = NULL;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
}

void AObjectiveTrigger::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AObjectiveTrigger::Init(AObjectiveManager* InObjectiveManager) {
}

void AObjectiveTrigger::Disable(UObjective* InObjective) {
}

bool AObjectiveTrigger::AffectObjective(UObjective* InObjective) {
    return false;
}


