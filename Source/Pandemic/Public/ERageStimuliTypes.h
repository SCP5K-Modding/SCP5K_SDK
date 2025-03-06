#pragma once
#include "CoreMinimal.h"
#include "ERageStimuliTypes.generated.h"

UENUM(BlueprintType)
enum class ERageStimuliTypes : uint8 {
    Error,
    Damage,
    Sight,
    Suppression,
    Sound_Game,
    Sound_Investigate,
    Sound_Alarm,
    Sound_Door,
    Sound_Footstep,
    Sound_Sprinting,
    Sound_Gunshot,
    Sound_Melee,
};

