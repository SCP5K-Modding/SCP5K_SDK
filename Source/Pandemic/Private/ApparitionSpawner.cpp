#include "ApparitionSpawner.h"
#include "Components/BoxComponent.h"

AApparitionSpawner::AApparitionSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->SpawnCount = 5;
    this->SpawnClass = NULL;
    this->SpawnQueryFilter = NULL;
}

void AApparitionSpawner::Spawn() {
}

FRotator AApparitionSpawner::GetSpawnRotation() {
    return FRotator{};
}

FVector AApparitionSpawner::GetSpawnLocation() {
    return FVector{};
}


