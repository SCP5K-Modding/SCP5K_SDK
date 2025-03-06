#include "SeasonalSkeletalMeshComponent.h"

USeasonalSkeletalMeshComponent::USeasonalSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDestroyWhenNotInEvents = false;
}

void USeasonalSkeletalMeshComponent::AssetOverrideLoaded(const TSoftObjectPtr<USkeletalMesh> Asset) {
}


