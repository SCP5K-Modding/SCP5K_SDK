#include "SpawnAIAsyncAction.h"

USpawnAIAsyncAction::USpawnAIAsyncAction() {
}

USpawnAIAsyncAction* USpawnAIAsyncAction::SpawnAIDefault(AAISpawnArea* InSpawnArea, FName SpawnGroup) {
    return NULL;
}

USpawnAIAsyncAction* USpawnAIAsyncAction::SpawnAI(AAISpawnArea* InSpawnArea, FWaveSpawn InSpawnWave, FName SpawnGroup) {
    return NULL;
}

void USpawnAIAsyncAction::OnAISpawned(const TArray<APawn*>& InSpawnedAI, AAISpawnArea* InSpawnArea, int32 NumFailures) {
}


