#pragma once
#include "CoreMinimal.h"
#include "ESpawnTriggerMode.generated.h"

UENUM(BlueprintType)
enum class ESpawnTriggerMode : uint8 {
    Random,
    Visibility,
};

