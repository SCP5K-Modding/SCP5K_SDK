#pragma once
#include "CoreMinimal.h"
#include "EClimbingType.generated.h"

UENUM(BlueprintType)
enum class EClimbingType : uint8 {
    None,
    JumpUp,
    JumpDown,
    ClimbUp = 4,
    ClimbDown = 8,
    Ladder = 16,
};

