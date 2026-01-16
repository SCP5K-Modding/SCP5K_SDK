#pragma once
#include "CoreMinimal.h"
#include "EReloadMode.generated.h"

UENUM(BlueprintType)
enum class EReloadMode : uint8 {
    None,
    Single,
    Empty,
    Tactical,
};

