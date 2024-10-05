#pragma once
#include "CoreMinimal.h"
#include "EDiscordLogLevel.generated.h"

UENUM(BlueprintType)
enum class EDiscordLogLevel : uint8 {
    None,
    Error,
    Warn,
    Info,
    Debug,
};

