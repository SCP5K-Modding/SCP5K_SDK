#include "Horde.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "HordeController.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AHorde::AHorde(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = AHordeController::StaticClass();
    this->DefaultPartyClass = NULL;
    this->bActive = true;
    this->bAlert = false;
    this->MaxTargetDistance = 200.00f;
    this->MaxRadius = 1600.00f;
    this->Radius = 1600.00f;
    this->InitialAgents = 0;
    this->PartyMergeDistance = 300.00f;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
}

void AHorde::UpdateBounds_Implementation() {
}

AHordeAgent* AHorde::SpawnRandomAgent(FVector position, FRotator Rotation) {
    return NULL;
}

AParty* AHorde::SpawnParty(TArray<AHordeAgent*> Members) {
    return NULL;
}

AHordeAgent* AHorde::SpawnAgentInRadius() {
    return NULL;
}

AHordeAgent* AHorde::SpawnAgent(TSubclassOf<AHordeAgent> Class, FVector position, FRotator Rotation) {
    return NULL;
}

void AHorde::RemoveParty_Implementation(AParty* Party) {
}

void AHorde::RemoveAgent_Implementation(AHordeAgent* Agent) {
}

void AHorde::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

bool AHorde::MergeToHorde(AHorde* NewHorde) {
    return false;
}

void AHorde::MergeParties_Implementation() {
}

bool AHorde::IsAlert() const {
    return false;
}

bool AHorde::IsActive() const {
    return false;
}

float AHorde::GetRadius() const {
    return 0.0f;
}

TArray<AParty*> AHorde::GetParties() {
    return TArray<AParty*>();
}

float AHorde::GetMaxRadius() const {
    return 0.0f;
}

AHordeController* AHorde::GetHordeController() const {
    return NULL;
}

TArray<AHordeAgent*> AHorde::GetAgents() {
    return TArray<AHordeAgent*>();
}

void AHorde::EndAlert_Implementation() {
}

void AHorde::BeginAlert_Implementation(const TArray<APawn*>& Targets) {
}

void AHorde::AddParty_Implementation(AParty* Party) {
}

void AHorde::AddAgent_Implementation(AHordeAgent* Agent, AParty* Party) {
}

void AHorde::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHorde, bActive);
    DOREPLIFETIME(AHorde, bAlert);
    DOREPLIFETIME(AHorde, Agents);
    DOREPLIFETIME(AHorde, Parties);
    DOREPLIFETIME(AHorde, MaxTargetDistance);
    DOREPLIFETIME(AHorde, Radius);
}


