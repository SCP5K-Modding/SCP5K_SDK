#pragma once
#include "CoreMinimal.h"
#include "ESAISoundTypes.generated.h"

UENUM(BlueprintType)
enum class ESAISoundTypes : uint8 {
    Error,
    Game,
    Investigate,
    Alarm,
    Door,
    Footstep,
    Sprinting,
    Gunshot,
    Melee,
};

