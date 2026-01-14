#pragma once
#include "CoreMinimal.h"
#include "EWaveManagerTimingState.generated.h"

UENUM(BlueprintType)
enum class EWaveManagerTimingState : uint8 {
    BeforeFirstWave,
    WavesStarted,
    WaveSpawningEnded,
};

