#pragma once
#include "CoreMinimal.h"
#include "ESAIOperationalConstraints.generated.h"

UENUM(BlueprintType)
enum class ESAIOperationalConstraints : uint8 {
    None,
    Wander,
    Investigate,
    TakeCover = 4,
};

