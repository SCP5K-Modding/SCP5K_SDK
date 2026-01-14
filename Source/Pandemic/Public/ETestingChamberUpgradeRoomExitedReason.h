#pragma once
#include "CoreMinimal.h"
#include "ETestingChamberUpgradeRoomExitedReason.generated.h"

UENUM(BlueprintType)
enum class ETestingChamberUpgradeRoomExitedReason : uint8 {
    None,
    PlayerExit,
    PlayerLeftGame,
    TimeElapsed,
};

