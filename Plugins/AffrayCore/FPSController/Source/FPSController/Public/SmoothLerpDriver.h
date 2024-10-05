#pragma once
#include "CoreMinimal.h"
#include "SmoothLerpDriver.generated.h"

USTRUCT(BlueprintType)
struct FSmoothLerpDriver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Current;
    
    FPSCONTROLLER_API FSmoothLerpDriver();
};

