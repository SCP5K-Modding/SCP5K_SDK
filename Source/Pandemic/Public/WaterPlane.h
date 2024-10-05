#pragma once
#include "CoreMinimal.h"
#include "WaterPlane.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWaterPlane {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WaterPlaneActor;
    
    PANDEMIC_API FWaterPlane();
};

