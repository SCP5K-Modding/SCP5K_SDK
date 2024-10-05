#pragma once
#include "CoreMinimal.h"
#include "SCP173NavmeshTarget.generated.h"

USTRUCT(BlueprintType)
struct FSCP173NavmeshTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneralSightLineCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectSightLineCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectSightLineDot;
    
    PANDEMIC_API FSCP173NavmeshTarget();
};

