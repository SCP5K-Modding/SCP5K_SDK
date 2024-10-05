#include "SquadSpawner.h"
#include "Components/SceneComponent.h"

ASquadSpawner::ASquadSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Point"));
    this->bSpawnOnBeginplay = false;
    this->SpawnRadiusOffset = 50.00f;
}

void ASquadSpawner::Spawn() {
}




