#pragma once
#include "CoreMinimal.h"
#include "EItemWeight.generated.h"

UENUM(BlueprintType)
enum class EItemWeight : uint8 {
    Light,
    Medium,
    Heavy,
};

