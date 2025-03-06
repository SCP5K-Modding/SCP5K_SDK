#pragma once
#include "CoreMinimal.h"
#include "EAttackTarget.generated.h"

UENUM(BlueprintType)
enum class EAttackTarget : uint8 {
    Location,
    Actor,
    LastSensedLocation,
    LastSeenLocation,
    OwnerRotation,
    OwnerControlRotation,
};

