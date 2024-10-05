#pragma once
#include "CoreMinimal.h"
#include "ECoverFiringOptions.generated.h"

UENUM(BlueprintType)
enum class ECoverFiringOptions : uint8 {
    None,
    Over,
    Left,
    Right = 4,
};

