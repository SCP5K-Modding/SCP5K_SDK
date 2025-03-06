#pragma once
#include "CoreMinimal.h"
#include "EMotionWarpingMode.generated.h"

UENUM(BlueprintType)
enum class EMotionWarpingMode : uint8 {
    None,
    Interpolate,
    Add,
    Scale,
};

