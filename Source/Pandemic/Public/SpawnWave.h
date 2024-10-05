#pragma once
#include "CoreMinimal.h"
#include "WaveSpawn.h"
#include "SpawnWave.generated.h"

USTRUCT(BlueprintType)
struct FSpawnWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveSpawn> Spawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnFullWaveEvenIfOverLimit;
    
    PANDEMIC_API FSpawnWave();
};

