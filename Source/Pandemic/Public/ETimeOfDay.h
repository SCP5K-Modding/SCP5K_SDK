#pragma once
#include "CoreMinimal.h"
#include "ETimeOfDay.generated.h"

UENUM(BlueprintType)
enum class ETimeOfDay : uint8 {
    Dawn,
    Noon,
    Dusk,
    Night,
};

