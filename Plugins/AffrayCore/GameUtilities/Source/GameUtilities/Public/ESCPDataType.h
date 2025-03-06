#pragma once
#include "CoreMinimal.h"
#include "ESCPDataType.generated.h"

UENUM(BlueprintType)
enum class ESCPDataType : uint8 {
    Containment,
    Clearance,
    Disruption,
    Risk,
    SecondaryClass,
};

