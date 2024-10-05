#pragma once
#include "CoreMinimal.h"
#include "ECharacterClearanceLevel.generated.h"

UENUM(BlueprintType)
enum class ECharacterClearanceLevel : uint8 {
    None,
    Level1,
    Level2,
    Level3,
    Level4,
    Level5,
    Level6,
    Level7,
};

