#pragma once
#include "CoreMinimal.h"
#include "ESAITargetDetectionState.generated.h"

UENUM(BlueprintType)
enum class ESAITargetDetectionState : uint8 {
    Error,
    NotDetected,
    Acquiring,
    Decaying,
    Detected,
    Losing,
};

