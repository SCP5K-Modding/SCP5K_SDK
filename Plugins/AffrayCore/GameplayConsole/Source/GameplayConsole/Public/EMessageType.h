#pragma once
#include "CoreMinimal.h"
#include "EMessageType.generated.h"

UENUM(BlueprintType)
enum EMessageType {
    Message,
    Log,
    Warning,
    Error,
};

