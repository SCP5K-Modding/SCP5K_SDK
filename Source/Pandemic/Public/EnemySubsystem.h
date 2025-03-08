#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EnemyCounterUpdatedSingleDelegateDelegate.h"
#include "EnemyUpdatedDelegateDelegate.h"
#include "KillCounter.h"
#include "SpawnGroup.h"
#include "SpawnWave.h"
#include "Templates/SubclassOf.h"
#include "EnemySubsystem.generated.h"

class AAISpawnArea;
class AActor;
class APawn;
class UObject;

UCLASS(Blueprintable)
class PANDEMIC_API UEnemySubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreserveOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckUnique;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APawn>> Enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSpawnGroup> SpawnGroups;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyUpdatedDelegate OnEnemyDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyUpdatedDelegate OnEnemySpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyUpdatedDelegate OnAllEnemiesDied;
    
    UEnemySubsystem();

    UFUNCTION(BlueprintCallable)
    void ValidateEnemyArray();
    
    UFUNCTION(BlueprintCallable)
    void UpdateEnemies();
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterSpawnArea(AAISpawnArea* SpawnArea);
    
    UFUNCTION(BlueprintCallable)
    void StopLoopingSpawn();
    
    UFUNCTION(BlueprintCallable)
    void StartLoopingSpawn(const FSpawnWave Wave, const int32 TargetEnemyCount, const int32 SpawnInterval, const bool bConsiderOtherEnemiesInTarget, const bool bIncludeCurrentlyAlive, const bool bImmediatelySpawnFirstWave, FName SpawnGroup, const FName SpawnerTag);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnWave(FSpawnWave Wave, FName SpawnGroup, FName SpawnerTag);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnDefault(int32 SpawnerCount, FName SpawnGroup, FName SpawnerTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RemoveKillCounter(FName CounterName);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpawnArea(AAISpawnArea* SpawnArea);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
    UFUNCTION(BlueprintCallable)
    void InvestigateAll(FVector Location, float Radius, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSpawnScore(UObject* WorldContextObject, AAISpawnArea* Spawn, float DistanceWeight, float MinDistance, float VisibilityWeight, float RandomWeight, float TargetDistance, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    TArray<APawn*> GetSpawnGroupEnemies(FName SpawnGroup);
    
    UFUNCTION(BlueprintCallable)
    FSpawnGroup GetSpawnGroup(FName SpawnGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKillCounter(FName CounterName, FKillCounter& Counter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetEnemiesInRadius(FVector Location, float Radius, TSubclassOf<APawn> ClassFilter, FName SpawnGroup) const;
    
    UFUNCTION(BlueprintCallable)
    void EnemySpawned(APawn* Enemy, FName SpawnGroup);
    
    UFUNCTION(BlueprintCallable)
    void EnemyDied(APawn* Enemy);
    
    UFUNCTION(BlueprintCallable)
    void CreateKillCounter(int32 Target, TArray<TSoftClassPtr<APawn>> ClassFilter, FEnemyCounterUpdatedSingleDelegate OnCounterUpdated, FName CounterName);
    
    UFUNCTION(BlueprintCallable)
    void AddToSpawnGroup(APawn* Enemy, FName SpawnGroup);
    
};

