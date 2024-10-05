#pragma once
#include "CoreMinimal.h"
#include "EDubugType.generated.h"

UENUM(BlueprintType)
enum class EDubugType : uint8 {
    E_Disabled,
    E_Full,
    E_SelectUnSelect,
    E_HoveredUnhovered,
    E_CreatedDestroyed,
};

