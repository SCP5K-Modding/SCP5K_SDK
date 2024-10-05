#pragma once
#include "CoreMinimal.h"
#include "EPlayerActionReturn.generated.h"

UENUM(BlueprintType)
enum class EPlayerActionReturn : uint8 {
    Blocked,
    Unblocked,
    AlreadyBlocked,
    AlreadyUnblocked,
};

