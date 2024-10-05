#include "EnemySubsystem.h"

UEnemySubsystem::UEnemySubsystem() {
    this->bPreserveOrder = false;
    this->bCheckUnique = true;
}

void UEnemySubsystem::ValidateEnemyArray() {
}

void UEnemySubsystem::UnRegisterSpawnArea(AAISpawnArea* SpawnArea) {
}

void UEnemySubsystem::StopLoopingSpawn() {
}

void UEnemySubsystem::StartLoopingSpawn(FSpawnWave Wave, int32 TargetEnemyCount, int32 SpawnInterval, bool bIncludeCurrentlyAlive, FName SpawnerTag) {
}

void UEnemySubsystem::SpawnWave(FSpawnWave Wave, FName SpawnerTag) {
}

void UEnemySubsystem::SpawnDefault(int32 SpawnerCount, FName SpawnerTag) {
}

void UEnemySubsystem::RegisterSpawnArea(AAISpawnArea* SpawnArea) {
}

void UEnemySubsystem::InvestigateAll(FVector Location, float Radius, AActor* Instigator) {
}

float UEnemySubsystem::GetSpawnScore(UObject* WorldContextObject, AAISpawnArea* Spawn, float DistanceWeight, float MinDistance, float VisibilityWeight, float RandomWeight, float TargetDistance, FName Tag) {
    return 0.0f;
}

bool UEnemySubsystem::GetKillCounter(FName CounterName, FKillCounter& Counter) {
    return false;
}

int32 UEnemySubsystem::GetEnemyCount() const {
    return 0;
}

void UEnemySubsystem::EnemySpawned(APawn* Enemy) {
}

void UEnemySubsystem::EnemyDied(APawn* Enemy) {
}

void UEnemySubsystem::CreateKillCounter(int32 Target, TArray<TSoftClassPtr<APawn>> ClassFilter, FEnemyCounterUpdatedSingleDelegate OnCounterUpdated, FName CounterName) {
}


