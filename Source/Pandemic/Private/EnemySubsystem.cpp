#include "EnemySubsystem.h"
#include "Templates/SubclassOf.h"

UEnemySubsystem::UEnemySubsystem() {
    this->bPreserveOrder = false;
    this->bCheckUnique = true;
}

void UEnemySubsystem::ValidateEnemyArray() {
}

void UEnemySubsystem::UpdateEnemies() {
}

void UEnemySubsystem::UnRegisterSpawnArea(AAISpawnArea* SpawnArea) {
}

void UEnemySubsystem::StopLoopingSpawn() {
}

void UEnemySubsystem::StartLoopingSpawn(const FSpawnWave Wave, const int32 TargetEnemyCount, const int32 SpawnInterval, const bool bConsiderOtherEnemiesInTarget, const bool bIncludeCurrentlyAlive, const bool bImmediatelySpawnFirstWave, FName SpawnGroup, const FName SpawnerTag) {
}

int32 UEnemySubsystem::SpawnWave(FSpawnWave Wave, FName SpawnGroup, FName SpawnerTag) {
    return 0;
}

int32 UEnemySubsystem::SpawnDefault(int32 SpawnerCount, FName SpawnGroup, FName SpawnerTag) {
    return 0;
}

bool UEnemySubsystem::RemoveKillCounter(FName CounterName) {
    return false;
}

void UEnemySubsystem::RegisterSpawnArea(AAISpawnArea* SpawnArea) {
}

void UEnemySubsystem::OnWorldBeginPlay() {
}

void UEnemySubsystem::InvestigateAll(FVector Location, float Radius, AActor* Instigator) {
}

float UEnemySubsystem::GetSpawnScore(UObject* WorldContextObject, AAISpawnArea* Spawn, float DistanceWeight, float MinDistance, float VisibilityWeight, float RandomWeight, float TargetDistance, FName Tag) {
    return 0.0f;
}

TArray<APawn*> UEnemySubsystem::GetSpawnGroupEnemies(FName SpawnGroup) {
    return TArray<APawn*>();
}

FSpawnGroup UEnemySubsystem::GetSpawnGroup(FName SpawnGroup) {
    return FSpawnGroup{};
}

bool UEnemySubsystem::GetKillCounter(FName CounterName, FKillCounter& Counter) {
    return false;
}

int32 UEnemySubsystem::GetEnemyCount() const {
    return 0;
}

TArray<APawn*> UEnemySubsystem::GetEnemiesInRadius(FVector Location, float Radius, TSubclassOf<APawn> ClassFilter, FName SpawnGroup) const {
    return TArray<APawn*>();
}

void UEnemySubsystem::EnemySpawned(APawn* Enemy, FName SpawnGroup) {
}

void UEnemySubsystem::EnemyDied(APawn* Enemy) {
}

void UEnemySubsystem::CreateKillCounter(int32 Target, TArray<TSoftClassPtr<APawn>> ClassFilter, FEnemyCounterUpdatedSingleDelegate OnCounterUpdated, FName CounterName) {
}

void UEnemySubsystem::AddToSpawnGroup(APawn* Enemy, FName SpawnGroup) {
}


