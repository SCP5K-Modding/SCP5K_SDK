#pragma once
#include "CoreMinimal.h"
#include "EDiscordLobbySearchComparison.generated.h"

UENUM(BlueprintType)
enum class EDiscordLobbySearchComparison : uint8 {
    LessThanOrEqual,
    LessThan,
    Equal,
    GraterThan,
    GreaterOrEqualThan,
    NotEqual,
};

