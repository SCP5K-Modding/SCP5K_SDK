#pragma once
#include "CoreMinimal.h"
#include "EClimbableExitType.generated.h"

UENUM(BlueprintType)
enum class EClimbableExitType : uint8 {
    None,
    TopFront,
    TopBack,
    MiddleLeft,
    MiddleRight,
    MiddleBack,
    BottomLeft,
    BottomRight,
    BottomBack,
};

