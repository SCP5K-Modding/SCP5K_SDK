#pragma once
#include "CoreMinimal.h"
#include "SeenTarget.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FSeenTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* SeenCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectedAmount;
    
    AISENTIENCE_API FSeenTarget();
};

