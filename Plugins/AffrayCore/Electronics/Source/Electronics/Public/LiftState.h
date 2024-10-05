#pragma once
#include "CoreMinimal.h"
#include "LiftState.generated.h"

USTRUCT(BlueprintType)
struct FLiftState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PreviousFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NextFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    ELECTRONICS_API FLiftState();
};

