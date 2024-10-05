#pragma once
#include "CoreMinimal.h"
#include "ESpawnScaling.generated.h"

UENUM(BlueprintType)
enum class ESpawnScaling : uint8 {
    None,
    Linear,
    Gamemode,
    Global,
};

