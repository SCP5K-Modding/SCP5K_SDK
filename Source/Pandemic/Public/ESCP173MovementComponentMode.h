#pragma once
#include "CoreMinimal.h"
#include "ESCP173MovementComponentMode.generated.h"

UENUM(BlueprintType)
enum class ESCP173MovementComponentMode : uint8 {
    ESCP173MCMFreeze,
    ESCP173MCMGreenLight,
};

