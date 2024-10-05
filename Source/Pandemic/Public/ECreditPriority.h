#pragma once
#include "CoreMinimal.h"
#include "ECreditPriority.generated.h"

UENUM(BlueprintType)
enum class ECreditPriority : uint8 {
    Highest,
    Executive,
    Lead,
    Senior,
    Normal,
    Junior,
    Intern,
    Lowest,
};

