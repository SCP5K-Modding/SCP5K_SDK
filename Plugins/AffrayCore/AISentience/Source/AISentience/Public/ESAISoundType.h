#pragma once
#include "CoreMinimal.h"
#include "ESAISoundType.generated.h"

UENUM(BlueprintType)
enum class ESAISoundType : uint8 {
    Game,
    Alarm,
    Explosion,
    Attack,
    FriendlyAttack,
    Door,
    Other,
    Footstep,
};

