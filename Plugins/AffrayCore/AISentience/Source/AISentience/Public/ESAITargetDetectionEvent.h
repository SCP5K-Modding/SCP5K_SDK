#pragma once
#include "CoreMinimal.h"
#include "ESAITargetDetectionEvent.generated.h"

UENUM(BlueprintType)
enum class ESAITargetDetectionEvent : uint8 {
    Unchanged,
    Detected,
    Lost,
};

