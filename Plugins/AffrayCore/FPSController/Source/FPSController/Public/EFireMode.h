#pragma once
#include "CoreMinimal.h"
#include "EFireMode.generated.h"

UENUM(BlueprintType)
enum class EFireMode : uint8 {
    FM_Automatic,
    FM_Burst,
    FM_SemiAutomatic,
    FM_SingleAction,
    FM_DoubleAction,
};

