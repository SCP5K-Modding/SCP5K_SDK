#pragma once
#include "CoreMinimal.h"
#include "ESAIAwarenessState.generated.h"

UENUM(BlueprintType)
enum class ESAIAwarenessState : uint8 {
    Error,
    Unaware,
    Danger,
    Combat,
};

