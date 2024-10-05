#pragma once
#include "CoreMinimal.h"
#include "EGameplaySetting.generated.h"

UENUM(BlueprintType)
enum class EGameplaySetting : uint8 {
    ToggleCrouch,
    ToggleSprint,
    ToggleAim,
    ToggleLean,
    ToggleLowReady,
    TogglePointShooting,
    CenterViewOnADS,
    InvertHorizontalInput,
    InvertVerticalInput,
    InputSensitivity,
    AimingSensitivity,
    DeadzoneSensitivity,
    HeadBobIntensity,
};

