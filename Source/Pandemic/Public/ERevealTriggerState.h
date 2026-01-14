#pragma once
#include "CoreMinimal.h"
#include "ERevealTriggerState.generated.h"

UENUM(BlueprintType)
enum class ERevealTriggerState : uint8 {
    Error,
    Uninitialized,
    NeedOverlap,
    NeedPerception,
    Triggered,
};

