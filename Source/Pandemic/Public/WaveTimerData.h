#pragma once
#include "CoreMinimal.h"
#include "WaveTimerData.generated.h"

USTRUCT(BlueprintType)
struct FWaveTimerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalDuration;
    
    PANDEMIC_API FWaveTimerData();
};

