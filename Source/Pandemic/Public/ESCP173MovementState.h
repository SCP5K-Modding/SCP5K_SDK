#pragma once
#include "CoreMinimal.h"
#include "ESCP173MovementState.generated.h"

UENUM(BlueprintType)
enum class ESCP173MovementState : uint8 {
    ESCP173MSWalking,
    ESCP173MSRunning,
    ESCP173MSSprinting,
    ESCP173MSCrawling,
};

