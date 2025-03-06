#pragma once
#include "CoreMinimal.h"
#include "ESAIDirectionResult.generated.h"

UENUM(BlueprintType)
enum class ESAIDirectionResult : uint8 {
    Error,
    Failed,
    Succeeded,
    InProgress,
};

