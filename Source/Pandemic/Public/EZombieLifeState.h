#pragma once
#include "CoreMinimal.h"
#include "EZombieLifeState.generated.h"

UENUM(BlueprintType)
enum class EZombieLifeState : uint8 {
    Alive,
    Dead,
    FakingDeath,
    Reanimating,
    FakedDeath,
    Dormant,
};

