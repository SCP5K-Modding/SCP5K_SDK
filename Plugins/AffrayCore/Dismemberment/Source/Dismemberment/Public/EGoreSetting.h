#pragma once
#include "CoreMinimal.h"
#include "EGoreSetting.generated.h"

UENUM(BlueprintType)
enum class EGoreSetting : uint8 {
    None,
    Minimal,
    Reduced,
    All,
};

