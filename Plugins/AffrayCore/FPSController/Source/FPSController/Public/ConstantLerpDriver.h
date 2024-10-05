#pragma once
#include "CoreMinimal.h"
#include "ConstantLerpDriver.generated.h"

USTRUCT(BlueprintType)
struct FConstantLerpDriver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Current;
    
    FPSCONTROLLER_API FConstantLerpDriver();
};

