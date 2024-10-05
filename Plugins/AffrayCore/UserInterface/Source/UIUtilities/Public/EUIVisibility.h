#pragma once
#include "CoreMinimal.h"
#include "EUIVisibility.generated.h"

UENUM(BlueprintType)
enum class EUIVisibility : uint8 {
    AlwaysVisible,
    VisibleWhenNeeded,
    NeverVisible,
};

