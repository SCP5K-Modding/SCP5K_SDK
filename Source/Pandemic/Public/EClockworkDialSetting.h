#pragma once
#include "CoreMinimal.h"
#include "EClockworkDialSetting.generated.h"

UENUM(BlueprintType)
enum class EClockworkDialSetting : uint8 {
    DS_Rough,
    DS_Coarse,
    DS_1To1,
    DS_Fine,
    DS_VeryFine,
};

