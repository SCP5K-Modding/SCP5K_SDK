#pragma once
#include "CoreMinimal.h"
#include "EButtonType.generated.h"

UENUM(BlueprintType)
enum class EButtonType : uint8 {
    E_Normal,
    E_Toggle,
    E_Radio,
};

