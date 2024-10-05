#include "HordeAgent.h"
#include "Engine/EngineTypes.h"
#include "HordeAgentController.h"
#include "Net/UnrealNetwork.h"

AHordeAgent::AHordeAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = AHordeAgentController::StaticClass();
    this->CurrentHorde = NULL;
    this->CurrentParty = NULL;
    this->TickInterval = 0.05f;
    this->SpeedVariation = 0.40f;
    this->WanderingSpeed = 300.00f;
    this->WalkingSpeed = 400.00f;
    this->CrawlingSpeed = 200.00f;
    this->RunningSpeed = 600.00f;
    this->CurrentMovementMode = EHordeAgentMovementMode::Wandering;
}

void AHordeAgent::SetTickInterval(float Interval) {
}

void AHordeAgent::SetParty(AParty* Party) {
}

void AHordeAgent::SetMovementMode_Implementation(EHordeAgentMovementMode MovementMode) {
}

void AHordeAgent::SetHorde(AHorde* Horde) {
}

float AHordeAgent::GetWanderingSpeed() {
    return 0.0f;
}

float AHordeAgent::GetWalkingSpeed() {
    return 0.0f;
}

float AHordeAgent::GetTickInterval() const {
    return 0.0f;
}

float AHordeAgent::GetRunningSpeed() {
    return 0.0f;
}

AParty* AHordeAgent::GetParty() const {
    return NULL;
}

AHordeAgentController* AHordeAgent::GetHordeAgentController() const {
    return NULL;
}

AHorde* AHordeAgent::GetHorde() const {
    return NULL;
}

EHordeAgentMovementMode AHordeAgent::GetCurrentMovementMode() {
    return EHordeAgentMovementMode::Wandering;
}

float AHordeAgent::GetCrawlingSpeed() {
    return 0.0f;
}

void AHordeAgent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHordeAgent, CurrentHorde);
    DOREPLIFETIME(AHordeAgent, CurrentParty);
}


