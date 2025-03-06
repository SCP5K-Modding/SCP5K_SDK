#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SpawnAIAsyncOutputPinDelegate.h"
#include "SpawnWave.h"
#include "SpawnAIThroughSubsystemAsyncAction.generated.h"

class AAISpawnArea;
class APawn;
class UObject;
class USpawnAIThroughSubsystemAsyncAction;

UCLASS(Blueprintable)
class PANDEMIC_API USpawnAIThroughSubsystemAsyncAction : public UBlueprintAsyncActionBase {
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
    USpawnAIThroughSubsystemAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static USpawnAIThroughSubsystemAsyncAction* SpawnAIThroughSubsystem(UObject* InWorldContext, FSpawnWave InSpawnWave, FName SpawnGroup, FName InSpawnerTag);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAISpawned(const TArray<APawn*>& InSpawnedAI, AAISpawnArea* InSpawnArea, int32 NumFailures);
    
    UFUNCTION(BlueprintCallable)
    void OnAISpawnAreaPicked(AAISpawnArea* SpawnArea);
    
};

