#pragma once
#include "CoreMinimal.h"
#include "EStoryletOperationType.generated.h"

UENUM(BlueprintType)
enum class EStoryletOperationType : uint8 {
    Add,
    Clear,
    ClearChildren,
    Increment,
    Decrement,
    SetValue,
};

