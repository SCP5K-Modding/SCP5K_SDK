#include "ModularAsset.h"
#include "Components/SceneComponent.h"

AModularAsset::AModularAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->AggregateCollision = NULL;
    this->bUseLODs = false;
    this->bUseAsOccluder = true;
    this->bCastShadows = true;
    this->bUseSubtractorCaching = true;
    this->bAllowDistanceCull = true;
    this->bEnableCollisionAggregation = false;
    this->bOverridePhysicalMaterial = false;
    this->AggregatePhysicalMaterial = NULL;
    this->MaxAssetSize = 400.00f;
    this->PositionSnapping = 5;
    this->RotationSnapping = 5;
    this->bEnableSnapping = true;
    this->bEnableSubtractorSnapping = true;
}

void AModularAsset::RefreshComponents() {
}

void AModularAsset::RefreshAsset() {
}


