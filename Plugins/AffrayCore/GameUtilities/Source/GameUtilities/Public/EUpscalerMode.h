#pragma once
#include "CoreMinimal.h"
#include "EUpscalerMode.generated.h"

UENUM(BlueprintType)
enum class EUpscalerMode : uint8 {
    None,
    DLSS2,
    DLSS3,
    NIS,
    FSR,
    FSR2,
    TAAU,
    DLAA,
};

