#pragma once
#include "CoreMinimal.h"
#include "ERiskClass.generated.h"

UENUM(BlueprintType)
enum class ERiskClass : uint8 {
    None,
    Notice,
    Caution,
    Warning,
    Danger,
    Critical,
};

