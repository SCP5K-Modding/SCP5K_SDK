#pragma once
#include "CoreMinimal.h"
#include "ECameraModifierDisplayTimeType.generated.h"

UENUM(BlueprintType)
enum class ECameraModifierDisplayTimeType : uint8 {
    Exact,
    WithVariation,
    RandomInRange,
};

