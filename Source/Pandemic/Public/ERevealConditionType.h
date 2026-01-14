#pragma once
#include "CoreMinimal.h"
#include "ERevealConditionType.generated.h"

UENUM(BlueprintType)
enum class ERevealConditionType : uint8 {
    Error,
    Override,
    Radius,
    RadiusAndPerception,
    RadiusLoSAndPerception,
    Timer,
    Immediate,
};

