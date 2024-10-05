#pragma once
#include "CoreMinimal.h"
#include "ESwitchResetMode.generated.h"

UENUM(BlueprintType)
enum ESwitchResetMode {
    ActivateTimerEachInput,
    ActivateTimerOnEnable,
    ActivateTimerOnFirstInput,
};

