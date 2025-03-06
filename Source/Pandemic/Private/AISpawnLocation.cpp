#include "AISpawnLocation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AAISpawnLocation::AAISpawnLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bAllowSubclasses = true;
    this->bOverrideActivationRadius = false;
    this->ActivationRadius = 1000.00f;
}

bool AAISpawnLocation::SupportsClass(const TSoftClassPtr<APawn>& Class) const {
    return false;
}


