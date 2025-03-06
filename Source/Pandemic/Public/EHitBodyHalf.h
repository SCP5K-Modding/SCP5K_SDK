#pragma once
#include "CoreMinimal.h"
#include "EHitBodyHalf.generated.h"

UENUM(BlueprintType)
enum class EHitBodyHalf : uint8 {
    None,
    Top,
    Bottom,
};

