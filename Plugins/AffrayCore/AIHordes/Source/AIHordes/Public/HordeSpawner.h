#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "HordeAgentClass.h"
#include "Templates/SubclassOf.h"
#include "HordeSpawner.generated.h"

class AHorde;
class AHordeAgent;

UCLASS(Blueprintable)
class AIHORDES_API AHordeSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHorde> HordeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHordeAgentClass> AgentClasses;
    
public:
    AHordeSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SpawnAgent(AHorde* Horde);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Spawn();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<AHordeAgent> PickClass();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector FindSpawnLocation(bool& FoundSpawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSpawn(FVector Location);
    
};

