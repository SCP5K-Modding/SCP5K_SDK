#pragma once
#include "CoreMinimal.h"
#include "ETurningStatus.generated.h"

UENUM(BlueprintType)
enum ETurningStatus {
    TT_NotTurning,
    TT_TurningRight,
    TT_TurningRightMedium,
    TT_TurningRightHard,
    TT_TurningLeft,
    TT_TurningLeftMedium,
    TT_TurningLeftHard,
};

