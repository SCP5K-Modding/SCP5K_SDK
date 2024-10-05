#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESAIBehaviors_Calm.h"
#include "Templates/SubclassOf.h"
#include "SAISpawner.generated.h"

class APawn;
class ASAISpawner;
class UActorComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API ASAISpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnedAsLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASAISpawner* LeadersSpawner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> AIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> AIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* SpawnedAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESAIBehaviors_Calm::Type> SpawnedCalmBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnedRoamRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnedRoamWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnedPatrolPointWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnedPatrolkey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnedMorale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnedMoraleMultiplier;
    
public:
    ASAISpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnAI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnedAsLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSpawnedPatrolKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnedMoraleMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnedMorale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ESAIBehaviors_Calm::Type> GetSpawnedCalmBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRoamWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRoamRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPatrolPointWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool bIsDisabled() const;
    
};

