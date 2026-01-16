#pragma once
#include "CoreMinimal.h"
#include "EMeleeHitDetectionMode.generated.h"

UENUM(BlueprintType)
enum class EMeleeHitDetectionMode : uint8 {
    ItemFirstPerson,
    ItemThirdPerson,
    Simple,
    ItemCameraFacing,
};

