#pragma once
#include "CoreMinimal.h"
#include "ESAITargetTestMode.generated.h"

UENUM(BlueprintType)
enum class ESAITargetTestMode : uint8 {
    Detection,
    Attitude,
};

