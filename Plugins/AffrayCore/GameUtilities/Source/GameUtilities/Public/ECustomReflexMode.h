#pragma once
#include "CoreMinimal.h"
#include "ECustomReflexMode.generated.h"

UENUM(BlueprintType)
enum class ECustomReflexMode : uint8 {
    Disabled,
    Enabled,
    EnabledPlusBoost = 3,
};

