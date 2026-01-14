#pragma once
#include "CoreMinimal.h"
#include "EInWaveState.generated.h"

UENUM(BlueprintType)
enum class EInWaveState : uint8 {
    BeforeWaveSpawn,
    WithinWave,
    OutsideWave,
};

