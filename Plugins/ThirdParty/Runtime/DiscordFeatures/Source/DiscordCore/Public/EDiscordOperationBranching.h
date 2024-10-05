#pragma once
#include "CoreMinimal.h"
#include "EDiscordOperationBranching.generated.h"

UENUM(BlueprintType)
enum class EDiscordOperationBranching : uint8 {
    Success,
    Error,
};

