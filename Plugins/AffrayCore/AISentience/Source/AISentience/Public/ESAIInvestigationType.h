#pragma once
#include "CoreMinimal.h"
#include "ESAIInvestigationType.generated.h"

UENUM(BlueprintType)
enum class ESAIInvestigationType : uint8 {
    Error,
    LostTarget,
    LostCombatTarget,
    Danger,
    ScriptLow,
    ScriptHigh,
    Alarm,
};

