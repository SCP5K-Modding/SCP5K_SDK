#pragma once
#include "CoreMinimal.h"
#include "ERevealState.generated.h"

UENUM(BlueprintType)
enum class ERevealState : uint8 {
    Error,
    Uninitialized,
    Initialized,
    Idle,
    Revealing,
    Revealed,
};

