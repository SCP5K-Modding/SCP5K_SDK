#pragma once
#include "CoreMinimal.h"
#include "EUISetting.generated.h"

UENUM(BlueprintType)
enum class EUISetting : uint8 {
    Language,
    TextSize,
    RedColor,
    GreenColor,
    UIScale,
    DisplayTimeScale,
    HUDVisibility,
};

