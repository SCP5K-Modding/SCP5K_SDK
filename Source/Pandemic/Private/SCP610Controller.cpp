#include "SCP610Controller.h"
#include "SAIBlindStimuliProcessingComponent.h"

ASCP610Controller::ASCP610Controller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USAIBlindStimuliProcessingComponent>(TEXT("StimuliProcessingComponent"))) {
    this->bAttachToPawn = true;
    this->bAllowStrafe = true;
    this->RageLevelKeyName = TEXT("RageLevel");
    this->AttackRateMultiplierKeyName = TEXT("AttackRateMultiplier");
    this->SCP610Character = NULL;
    this->BehaviorTree = NULL;
    this->RageMovementSpeedMultiplier = 1.00f;
    this->RandomMoveSpeedVariance = 1.00f;
    this->OriginalMaxWalkSpeed = 0.00f;
}

void ASCP610Controller::UpdateMoveSpeed() {
}

void ASCP610Controller::OnRageLevelUpdated(const FRageLevel& CurrentRageLevel) {
}

void ASCP610Controller::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void ASCP610Controller::On610Damaged(UHealthComponent* UpdatedHealthComponent, FSimpleHitData HitData) {
}


