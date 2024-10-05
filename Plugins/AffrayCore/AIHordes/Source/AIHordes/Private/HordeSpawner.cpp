#include "HordeSpawner.h"
#include "Horde.h"
#include "Templates/SubclassOf.h"

AHordeSpawner::AHordeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnAttempts = 10;
    this->SpawnAmount = 50;
    this->HordeClass = AHorde::StaticClass();
}

bool AHordeSpawner::SpawnAgent_Implementation(AHorde* Horde) {
    return false;
}

void AHordeSpawner::Spawn_Implementation() {
}

void AHordeSpawner::Reset() {
}

TSubclassOf<AHordeAgent> AHordeSpawner::PickClass_Implementation() {
    return NULL;
}

FVector AHordeSpawner::FindSpawnLocation_Implementation(bool& FoundSpawn) {
    return FVector{};
}

bool AHordeSpawner::CanSpawn_Implementation(FVector Location) {
    return false;
}


