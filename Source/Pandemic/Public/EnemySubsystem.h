#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EnemyCounterUpdatedSingleDelegateDelegate.h"
#include "EnemyUpdatedDelegateDelegate.h"
#include "KillCounter.h"
#include "SpawnWave.h"
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
    void UnRegisterSpawnArea(AAISpawnArea* SpawnArea);
    
    UFUNCTION(BlueprintCallable)
    void StopLoopingSpawn();
    
    UFUNCTION(BlueprintCallable)
    void StartLoopingSpawn(FSpawnWave Wave, int32 TargetEnemyCount, int32 SpawnInterval, bool bIncludeCurrentlyAlive, FName SpawnerTag);
    
    UFUNCTION(BlueprintCallable)
    void SpawnWave(FSpawnWave Wave, FName SpawnerTag);
    
    UFUNCTION(BlueprintCallable)
    void SpawnDefault(int32 SpawnerCount, FName SpawnerTag);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpawnArea(AAISpawnArea* SpawnArea);
    
    UFUNCTION(BlueprintCallable)
    void InvestigateAll(FVector Location, float Radius, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSpawnScore(UObject* WorldContextObject, AAISpawnArea* Spawn, float DistanceWeight, float MinDistance, float VisibilityWeight, float RandomWeight, float TargetDistance, FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKillCounter(FName CounterName, FKillCounter& Counter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyCount() const;
    
    UFUNCTION(BlueprintCallable)
    void EnemySpawned(APawn* Enemy);
    
    UFUNCTION(BlueprintCallable)
    void EnemyDied(APawn* Enemy);
    
    UFUNCTION(BlueprintCallable)
    void CreateKillCounter(int32 Target, TArray<TSoftClassPtr<APawn>> ClassFilter, FEnemyCounterUpdatedSingleDelegate OnCounterUpdated, FName CounterName);
    
};

