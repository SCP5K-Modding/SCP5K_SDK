#pragma once
#include "CoreMinimal.h"
#include "EUpscalerQuality.generated.h"

UENUM(BlueprintType)
enum class EUpscalerQuality : uint8 {
    UltraQuality,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};

