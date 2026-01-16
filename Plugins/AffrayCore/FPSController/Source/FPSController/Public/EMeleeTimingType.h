#pragma once
#include "CoreMinimal.h"
#include "EMeleeTimingType.generated.h"

UENUM(BlueprintType)
enum class EMeleeTimingType : uint8 {
    None,
    NextAttackRegion,
    Damage,
    Telegraph,
    Blockable,
};

