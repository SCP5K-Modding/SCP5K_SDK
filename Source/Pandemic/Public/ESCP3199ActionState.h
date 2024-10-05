#pragma once
#include "CoreMinimal.h"
#include "ESCP3199ActionState.generated.h"

UENUM(BlueprintType)
enum class ESCP3199ActionState : uint8 {
    CalmIdle,
    Stalking,
    RunAway,
    Attacking,
    Charging,
    Crashing,
    Panicking,
    Investigating,
    AlertIdle,
};

