#pragma once
#include "CoreMinimal.h"
#include "EStaggerDirection.generated.h"

UENUM(BlueprintType)
enum class EStaggerDirection : uint8 {
    None,
    Left,
    Right,
    Back,
    Front,
};

