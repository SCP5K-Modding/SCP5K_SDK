#include "DoorSquidAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Net/UnrealNetwork.h"

ADoorSquidAIController::ADoorSquidAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
    this->bHasSquidInitialized = false;
    this->Team = ESAITeam::SCP;
    this->PlayerRunningSoundStrengthCutoff = 0.00f;
    this->HearingStimulusFalloffCurve = NULL;
}

void ADoorSquidAIController::SetHasSquidInitialized(bool bInHasSquidInitialized) {
}

void ADoorSquidAIController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void ADoorSquidAIController::OnRep_HasSquidInitialized_Implementation() {
}

void ADoorSquidAIController::OnAISenseSuppression_Implementation(const AActor* Actor, const FAIStimulus Stimulus) {
}

void ADoorSquidAIController::OnAISenseHearing_Implementation(AActor* Actor, const FAIStimulus Stimulus) {
}

void ADoorSquidAIController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADoorSquidAIController, bHasSquidInitialized);
}


