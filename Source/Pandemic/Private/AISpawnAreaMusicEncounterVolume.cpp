#include "AISpawnAreaMusicEncounterVolume.h"

AAISpawnAreaMusicEncounterVolume::AAISpawnAreaMusicEncounterVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MusicTrack = NULL;
}

void AAISpawnAreaMusicEncounterVolume::OnPlayerUnpossessed(APawn* Pawn) {
}

void AAISpawnAreaMusicEncounterVolume::OnPlayerPossessed(APawn* Pawn) {
}

void AAISpawnAreaMusicEncounterVolume::OnEnemySpawned(const TArray<APawn*>& Pawns) {
}

void AAISpawnAreaMusicEncounterVolume::OnEnemyDied(APawn* Pawn, int32 TotalCount) {
}


