#include "AISpawnLocation.h"
#include "Components/SceneComponent.h"

AAISpawnLocation::AAISpawnLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bAllowSubclasses = true;
    this->bOverrideActivationRadius = false;
    this->ActivationRadius = 1000.00f;
}

bool AAISpawnLocation::SupportsClass(const TSoftClassPtr<APawn>& Class) const {
    return false;
}


