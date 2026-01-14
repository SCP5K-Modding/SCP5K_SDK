#include "CosmeticsSubsystem.h"

UCosmeticsSubsystem::UCosmeticsSubsystem() {
}

TArray<FPrimaryAssetId> UCosmeticsSubsystem::GetValidPatches(APandemicPlayerState* PlayerState) {
    return TArray<FPrimaryAssetId>();
}

TArray<FPrimaryAssetId> UCosmeticsSubsystem::GetValidNonAvailableItemSkins(APandemicPlayerState* PlayerState, UFPSItemData* ItemData) {
    return TArray<FPrimaryAssetId>();
}

TArray<FPrimaryAssetId> UCosmeticsSubsystem::GetValidNonAvailableCosmetics(APandemicPlayerState* PlayerState, FName PrimaryAssetType) {
    return TArray<FPrimaryAssetId>();
}

TArray<FPrimaryAssetId> UCosmeticsSubsystem::GetValidItemSkins(APandemicPlayerState* PlayerState, UFPSItemData* ItemData) {
    return TArray<FPrimaryAssetId>();
}

TArray<FPrimaryAssetId> UCosmeticsSubsystem::GetValidCharacterSkins(APandemicPlayerState* PlayerState) {
    return TArray<FPrimaryAssetId>();
}


