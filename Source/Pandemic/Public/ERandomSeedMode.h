#pragma once
#include "CoreMinimal.h"
#include "ERandomSeedMode.generated.h"

UENUM(BlueprintType)
enum class ERandomSeedMode : uint8 {
    Constant,
    RandomizeAtStart,
    RandomizeAlways,
};

