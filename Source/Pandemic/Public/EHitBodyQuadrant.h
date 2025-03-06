#pragma once
#include "CoreMinimal.h"
#include "EHitBodyQuadrant.generated.h"

UENUM(BlueprintType)
enum class EHitBodyQuadrant : uint8 {
    None,
    Front,
    Left,
    Back = 4,
    Right = 8,
};

