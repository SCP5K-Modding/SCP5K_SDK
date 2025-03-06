#include "SquadSpawner.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ASquadSpawner::ASquadSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Point"));
    this->bSpawnOnBeginplay = false;
    this->SpawnRadiusOffset = 50.00f;
}

void ASquadSpawner::Spawn() {
}




