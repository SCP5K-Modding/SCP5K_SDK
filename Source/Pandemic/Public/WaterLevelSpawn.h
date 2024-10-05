#pragma once
#include "CoreMinimal.h"
#include "WaterLevelSpawn.generated.h"

USTRUCT(BlueprintType)
struct FWaterLevelSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnName;
    
    PANDEMIC_API FWaterLevelSpawn();
};

