#pragma once
#include "CoreMinimal.h"
#include "EFPSCustomMovementMode.generated.h"

UENUM(BlueprintType)
enum EFPSCustomMovementMode {
    FPSMOVE_None,
    FPSMOVE_Sliding,
    FPSMOVE_Prone,
    FPSMOVE_Climbing,
};

