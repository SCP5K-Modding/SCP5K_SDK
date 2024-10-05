#include "DynamicModularAsset.h"
#include "Components/StaticMeshComponent.h"

ADynamicModularAsset::ADynamicModularAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->AssetType = Door;
    this->PrimaryLength = 0;
    this->SecondaryLength = 0;
    this->bEnableSnapping = true;
    this->PositionSnapping = 5;
    this->RotationSnapping = 5;
    this->bUseCustomMesh = false;
    this->CurrentMesh = NULL;
}


