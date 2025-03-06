#include "ObjectiveTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EActorUpdateOverlapsMethod -FallbackName=EActorUpdateOverlapsMethod

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


