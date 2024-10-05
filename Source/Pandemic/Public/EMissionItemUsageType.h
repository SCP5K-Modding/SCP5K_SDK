#pragma once
#include "CoreMinimal.h"
#include "EMissionItemUsageType.generated.h"

UENUM(BlueprintType)
enum class EMissionItemUsageType : uint8 {
    MIU_Individual,
    MIU_Shared,
    MIU_PassOn,
};

