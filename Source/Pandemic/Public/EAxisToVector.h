#pragma once
#include "CoreMinimal.h"
#include "EAxisToVector.generated.h"

UENUM()
enum class EAxisToVector : int32 {
    None,
    X,
    Y,
    Z = 4,
};

