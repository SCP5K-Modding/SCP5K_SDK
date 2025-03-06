#include "SAIManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent

ASAIManager::ASAIManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Editor Icon"));
    this->bDynamicPatrols = false;
    this->bDynamicSquads = false;
    this->EditorIcon = (UBillboardComponent*)RootComponent;
}

void ASAIManager::RemovePointOfInterest(USAIPointOfInterest* Point) {
}

void ASAIManager::InitializeSquad(ACharacter* SquadLeader) {
}

void ASAIManager::InitializePatrol(ASAIPatrolPath* Patrol) {
}

void ASAIManager::InitializeAI(USAIComponent* SAI) {
}

AActor* ASAIManager::GetRelevantPointOfInterest(FVector Location, FVector Direction, float MaxRadius, float MinRadius, float MaxAngle, bool bUseFirst) {
    return NULL;
}

TArray<USAIPointOfInterest*> ASAIManager::GetInterestPoints() const {
    return TArray<USAIPointOfInterest*>();
}

void ASAIManager::AddPointOfInterest(USAIPointOfInterest* Point) {
}


