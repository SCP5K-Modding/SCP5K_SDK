#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SpawnAIAsyncOutputPinDelegate.h"
#include "WaveSpawn.h"
#include "SpawnAIAsyncAction.generated.h"

class AAISpawnArea;
class APawn;
class USpawnAIAsyncAction;

UCLASS(Blueprintable)
class PANDEMIC_API USpawnAIAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnAIAsyncOutputPin SpawnedAI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnAIAsyncOutputPin FinishedSpawningAI;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> Spawned;
    
public:
    USpawnAIAsyncAction();

    UFUNCTION(BlueprintCallable)
    static USpawnAIAsyncAction* SpawnAIDefault(AAISpawnArea* InSpawnArea, FName SpawnGroup);
    
    UFUNCTION(BlueprintCallable)
    static USpawnAIAsyncAction* SpawnAI(AAISpawnArea* InSpawnArea, FWaveSpawn InSpawnWave, FName SpawnGroup);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAISpawned(const TArray<APawn*>& InSpawnedAI, AAISpawnArea* InSpawnArea, int32 NumFailures);
    
};

