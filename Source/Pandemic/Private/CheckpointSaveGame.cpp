#include "CheckpointSaveGame.h"

UCheckpointSaveGame::UCheckpointSaveGame() {
    this->LastSavedProjectVersion = TEXT("0.17.1.61");
}

void UCheckpointSaveGame::UnlockCheckpoint(FName MapName, FName CheckpointName, FFPSLoadout Loadout) {
}

void UCheckpointSaveGame::UnlockChamber(const FPrimaryAssetId& PrimaryAssetId) {
}

void UCheckpointSaveGame::RemoveCheckpoint(FName MapName, FName CheckpointName) {
}

bool UCheckpointSaveGame::IsChamberUnlocked(const FPrimaryAssetId& PrimaryAssetId) const {
    return false;
}

bool UCheckpointSaveGame::HasUnlockedCheckpoint(FName MapName, FName CheckpointName) const {
    return false;
}

bool UCheckpointSaveGame::HasUnlockedAnyCheckpoints(FName MapName) const {
    return false;
}

TArray<FName> UCheckpointSaveGame::GetUnlockedCheckpointNames(FName MapName) const {
    return TArray<FName>();
}

TArray<FName> UCheckpointSaveGame::GetUnlockedChamberNames() const {
    return TArray<FName>();
}

TArray<FPrimaryAssetId> UCheckpointSaveGame::GetUnlockedChamberIDs() const {
    return TArray<FPrimaryAssetId>();
}

FFPSLoadout UCheckpointSaveGame::GetLoadoutForCheckpoint(FName MapName, FName CheckpointName) {
    return FFPSLoadout{};
}


