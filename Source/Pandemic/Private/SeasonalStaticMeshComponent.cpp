#include "SeasonalStaticMeshComponent.h"

USeasonalStaticMeshComponent::USeasonalStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDestroyWhenNotInEvents = false;
}

void USeasonalStaticMeshComponent::AssetOverrideLoaded(const TSoftObjectPtr<UStaticMesh> Asset) {
}


