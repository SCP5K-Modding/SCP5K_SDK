#pragma once
#include "CoreMinimal.h"
#include "EConsumableType.generated.h"

UENUM(BlueprintType)
enum class EConsumableType : uint8 {
    Ammo,
    Health,
    Respawn,
};

