#pragma once
#include "CoreMinimal.h"
#include "EDeathHitSizeRequirement.generated.h"

UENUM(BlueprintType)
enum class EDeathHitSizeRequirement : uint8 {
    None,
    Small,
    Large,
};

