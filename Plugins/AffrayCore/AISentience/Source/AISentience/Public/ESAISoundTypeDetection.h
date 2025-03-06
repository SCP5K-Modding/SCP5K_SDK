#pragma once
#include "CoreMinimal.h"
#include "ESAISoundTypeDetection.generated.h"

UENUM(BlueprintType)
enum class ESAISoundTypeDetection : uint8 {
    None,
    CanLookAt,
    CanInvestigate,
    CanTriggerDetection = 4,
    CanMaintainDetection = 8,
};

