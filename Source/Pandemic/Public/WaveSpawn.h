#pragma once
#include "CoreMinimal.h"
#include "ESpawnScaling.h"
#include "SpawnClass.h"
#include "WaveSpawn.generated.h"

USTRUCT(BlueprintType)
struct FWaveSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnClass> Classes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnScaling SpawnScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPartialSpawn;
    
    PANDEMIC_API FWaveSpawn();
};

