#pragma once
#include "CoreMinimal.h"
#include "EBlueprintMessageSeverity.generated.h"

UENUM(BlueprintType)
enum class EBlueprintMessageSeverity : uint8 {
    CriticalError,
    Error,
    PerformanceWarning,
    Warning,
    Info,
};

