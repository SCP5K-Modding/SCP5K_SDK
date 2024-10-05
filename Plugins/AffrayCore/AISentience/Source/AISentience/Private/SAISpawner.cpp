#include "SAISpawner.h"
#include "Components/SceneComponent.h"

ASAISpawner::ASAISpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Point"));
    this->bSpawnedAsLeader = false;
    this->LeadersSpawner = NULL;
    this->SpawnPoint = (USceneComponent*)RootComponent;
    this->AIComponent = NULL;
    this->bDisabled = false;
    this->AIToSpawn = NULL;
    this->SpawnedAI = NULL;
    this->SpawnRange = 0.00f;
    this->SpawnedCalmBehavior = ESAIBehaviors_Calm::BE_Idle;
    this->SpawnedRoamRadius = 0.00f;
    this->SpawnedRoamWaitTime = 0.00f;
    this->SpawnedPatrolPointWaitTime = 0.00f;
    this->SpawnedMorale = 1.00f;
    this->SpawnedMoraleMultiplier = 1.00f;
}

void ASAISpawner::SpawnAI() {
}

bool ASAISpawner::IsSpawnedAsLeader() const {
    return false;
}

FName ASAISpawner::GetSpawnedPatrolKey() const {
    return NAME_None;
}

float ASAISpawner::GetSpawnedMoraleMultiplier() const {
    return 0.0f;
}

float ASAISpawner::GetSpawnedMorale() const {
    return 0.0f;
}

TEnumAsByte<ESAIBehaviors_Calm::Type> ASAISpawner::GetSpawnedCalmBehavior() const {
    return ESAIBehaviors_Calm::BE_Idle;
}

float ASAISpawner::GetRoamWaitTime() const {
    return 0.0f;
}

float ASAISpawner::GetRoamRadius() const {
    return 0.0f;
}

float ASAISpawner::GetPatrolPointWaitTime() const {
    return 0.0f;
}

bool ASAISpawner::bIsDisabled() const {
    return false;
}


