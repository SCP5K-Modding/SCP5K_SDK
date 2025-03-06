#pragma once
#include "CoreMinimal.h"
#include "EGameUIBehavior.generated.h"

UENUM(BlueprintType)
enum class EGameUIBehavior : uint8 {
    None,
    Immediate,
    WaitForCinematic,
};

