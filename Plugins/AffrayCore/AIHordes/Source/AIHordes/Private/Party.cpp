#include "Party.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
#include "Net/UnrealNetwork.h"
#include "PartyController.h"

AParty::AParty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = APartyController::StaticClass();
    this->CurrentHorde = NULL;
    this->MinPlayerLODDistance = 200.00f;
    this->MaxPlayerLODDistance = 10000.00f;
    this->MinTickInterval = 0.00f;
    this->MaxTickInterval = 0.10f;
    this->Radius = 800.00f;
    this->MaxRadius = 1600.00f;
    this->MinRadius = 200.00f;
    this->MaxAgents = 8;
}

void AParty::UpdateBounds_Implementation() {
}

void AParty::SetHorde_Implementation(AHorde* NewHorde) {
}

void AParty::RemoveParty() {
}

bool AParty::RemoveAgent(AHordeAgent* Agent) {
    return false;
}

void AParty::MergeToParty_Implementation(AParty* Party) {
}

float AParty::GetRadius() const {
    return 0.0f;
}

APartyController* AParty::GetPartyController() const {
    return NULL;
}

float AParty::GetMinTickInterval() const {
    return 0.0f;
}

float AParty::GetMinPlayerLODDistance() const {
    return 0.0f;
}

float AParty::GetMaxTickInterval() const {
    return 0.0f;
}

float AParty::GetMaxRadius() const {
    return 0.0f;
}

float AParty::GetMaxPlayerLODDistance() const {
    return 0.0f;
}

uint8 AParty::GetMaxAgents() const {
    return 0;
}

AHorde* AParty::GetCurrentHorde() const {
    return NULL;
}

TArray<AHordeAgent*> AParty::GetAgents() {
    return TArray<AHordeAgent*>();
}

bool AParty::CompareDistance(AParty* Other, float MaxDistance) {
    return false;
}

void AParty::CalculatePartyLOD(AActor* Reference) {
}

bool AParty::AddAgent(AHordeAgent* Agent) {
    return false;
}

void AParty::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AParty, CurrentHorde);
    DOREPLIFETIME(AParty, Agents);
    DOREPLIFETIME(AParty, Radius);
}


