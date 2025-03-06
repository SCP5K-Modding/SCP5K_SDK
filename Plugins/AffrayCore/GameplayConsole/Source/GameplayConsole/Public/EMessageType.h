#pragma once
#include "CoreMinimal.h"
#include "EMessageType.generated.h"

UENUM(BlueprintType)
enum class EMessageType : uint8 {
    Message,
    Log,
    Warning,
    Error,
};

