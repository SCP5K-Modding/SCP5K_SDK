#include "AISpawnLocation.h"
#include "Components/SceneComponent.h"

AAISpawnLocation::AAISpawnLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bAllowSubclasses = true;
    this->bOverrideActivationRadius = false;
    this->ActivationRadius = 1000.00f;
    this->bOneUse = false;
    this->SpawnLocationComponent = CreateDefaultSubobject<UAISpawnLocationComponent>(TEXT("SpawnLocationComponent"));
    this->SpawnLocationComponent->SetupAttachment(RootComponent);
}

void AAISpawnLocation::CopyPropertiesToComponent() {
}


