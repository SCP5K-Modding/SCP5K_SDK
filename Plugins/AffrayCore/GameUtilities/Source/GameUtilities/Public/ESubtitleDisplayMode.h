#pragma once
#include "CoreMinimal.h"
#include "ESubtitleDisplayMode.generated.h"

UENUM(BlueprintType)
enum class ESubtitleDisplayMode : uint8 {
    None,
    Story,
    Dialogue,
    All,
};

