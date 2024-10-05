#pragma once
#include "CoreMinimal.h"
#include "EMapUnlockCondition.generated.h"

UENUM(BlueprintType)
enum class EMapUnlockCondition : uint8 {
    None,
    OnPreviousMapCompletion,
    OnMapCompletion,
};

