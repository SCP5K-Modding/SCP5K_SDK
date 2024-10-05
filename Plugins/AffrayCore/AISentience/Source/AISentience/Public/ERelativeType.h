#pragma once
#include "CoreMinimal.h"
#include "ERelativeType.generated.h"

UENUM(BlueprintType)
enum class ERelativeType : uint8 {
    Error,
    Beyond,
    Between,
    AwayFrom,
};

