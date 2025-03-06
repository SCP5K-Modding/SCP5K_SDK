#pragma once
#include "CoreMinimal.h"
#include "EMoraleLevelType.generated.h"

UENUM(BlueprintType)
enum class EMoraleLevelType : uint8 {
    MLT_None,
    MLT_Low,
    MLT_High,
};

