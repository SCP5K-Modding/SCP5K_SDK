#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AISpawn.h"
#include "SquadSpawner.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class AISENTIENCE_API ASquadSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnOnBeginplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAISpawn> AIClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRadiusOffset;
    
public:
    ASquadSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Spawn();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SpawnSetup(FAISpawn AIStruct, ACharacter* SpawnedCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_AfterSpawn(FAISpawn AIStruct, ACharacter* SpawnedCharacter);
    
};

