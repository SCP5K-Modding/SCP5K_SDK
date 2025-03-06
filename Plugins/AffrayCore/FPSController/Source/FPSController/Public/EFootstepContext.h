#pragma once
#include "CoreMinimal.h"
#include "EFootstepContext.generated.h"

UENUM(BlueprintType)
enum class EFootstepContext : uint8 {
    Step,
    Jump,
    Land,
};

