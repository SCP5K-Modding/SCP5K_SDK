#pragma once
#include "CoreMinimal.h"
#include "ETestingChamberTimingState.generated.h"

UENUM(BlueprintType)
enum class ETestingChamberTimingState : uint8 {
    BeforeChamberEntered,
    ChamberEntered,
    ChamberExited,
};

