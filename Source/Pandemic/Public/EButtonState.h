#pragma once
#include "CoreMinimal.h"
#include "EButtonState.generated.h"

UENUM(BlueprintType)
enum class EButtonState : uint8 {
    E_Normal,
    E_Hovered,
    E_Selected,
    E_Disabled,
};

