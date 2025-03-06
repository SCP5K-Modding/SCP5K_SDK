#pragma once
#include "CoreMinimal.h"
#include "EClearanceLevel.generated.h"

UENUM(BlueprintType)
enum class EClearanceLevel : uint8 {
    None,
    Level1,
    Level2,
    Level3,
    Level4,
    Level5,
    Level6,
    Level7,
};

