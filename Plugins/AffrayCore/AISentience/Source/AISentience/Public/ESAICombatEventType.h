#pragma once
#include "CoreMinimal.h"
#include "ESAICombatEventType.generated.h"

UENUM(BlueprintType)
enum class ESAICombatEventType : uint8 {
    Nonevent,
    GlipsedPotentialTarget,
    AcquiredTarget,
    ReacquiredTarget,
    LosingTarget,
    LostTarget,
    SensedInterest,
    SensedDanger,
    DamagedByTarget,
    SensedScriptLow,
    SensedScriptHigh,
};

