#pragma once
#include "CoreMinimal.h"
#include "EVoteKickState.generated.h"

UENUM(BlueprintType)
enum class EVoteKickState : uint8 {
    Disabled,
    Voting,
    Kicking,
};

