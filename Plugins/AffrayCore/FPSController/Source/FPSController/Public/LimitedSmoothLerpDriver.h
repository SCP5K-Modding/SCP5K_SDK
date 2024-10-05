#pragma once
#include "CoreMinimal.h"
#include "LimitedSmoothLerpDriver.generated.h"

USTRUCT(BlueprintType)
struct FLimitedSmoothLerpDriver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Current;
    
    FPSCONTROLLER_API FLimitedSmoothLerpDriver();
};

