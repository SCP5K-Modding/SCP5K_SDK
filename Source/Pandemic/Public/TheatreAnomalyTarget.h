#pragma once
#include "CoreMinimal.h"
#include "TheatreAnomalyTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTheatreAnomalyTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float SmoothDetectionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentlyVisible;
    
    PANDEMIC_API FTheatreAnomalyTarget();
};

