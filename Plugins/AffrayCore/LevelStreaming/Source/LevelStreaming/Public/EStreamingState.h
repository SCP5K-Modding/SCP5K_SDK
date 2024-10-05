#pragma once
#include "CoreMinimal.h"
#include "EStreamingState.generated.h"

UENUM(BlueprintType)
enum class EStreamingState : uint8 {
    Visible,
    Loaded,
    Unloaded,
};

