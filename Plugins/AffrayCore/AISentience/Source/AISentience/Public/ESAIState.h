#pragma once
#include "CoreMinimal.h"
#include "ESAIState.generated.h"

UENUM(BlueprintType)
enum class ESAIState : uint8 {
    None,
    Idle,
    Investigating,
    Alert,
    Combat,
    Dead,
};

