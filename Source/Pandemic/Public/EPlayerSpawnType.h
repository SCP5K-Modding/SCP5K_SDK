#pragma once
#include "CoreMinimal.h"
#include "EPlayerSpawnType.generated.h"

UENUM(BlueprintType)
enum class EPlayerSpawnType : uint8 {
    Default,
    Team,
    Random,
};

