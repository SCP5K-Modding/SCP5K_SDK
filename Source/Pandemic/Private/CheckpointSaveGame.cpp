#include "CheckpointSaveGame.h"

UCheckpointSaveGame::UCheckpointSaveGame() {
    this->LastSavedProjectVersion = TEXT("0.16.0.72");
}

void UCheckpointSaveGame::UnlockCheckpoint(FName MapName, FName CheckpointName, FFPSLoadout Loadout) {
}

void UCheckpointSaveGame::RemoveCheckpoint(FName MapName, FName CheckpointName) {
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

FFPSLoadout UCheckpointSaveGame::GetLoadoutForCheckpoint(FName MapName, FName CheckpointName) {
    return FFPSLoadout{};
}


