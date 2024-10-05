#pragma once
#include "CoreMinimal.h"
#include "EReloadType.generated.h"

UENUM(BlueprintType)
enum class EReloadType : uint8 {
    RT_Magazine,
    RT_Individual,
    RT_Clip,
};

