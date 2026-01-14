#pragma once
#include "CoreMinimal.h"
#include "ERevealConditionType.h"
#include "RevealConditions.generated.h"

USTRUCT(BlueprintType)
struct PANDEMIC_API FRevealConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERevealConditionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerTime;
    
    FRevealConditions();
};

