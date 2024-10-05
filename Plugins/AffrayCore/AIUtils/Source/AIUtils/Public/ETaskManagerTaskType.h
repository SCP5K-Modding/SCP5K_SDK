#pragma once
#include "CoreMinimal.h"
#include "ETaskManagerTaskType.generated.h"

UENUM(BlueprintType)
enum class ETaskManagerTaskType : uint8 {
    ETMTT_HighPriority,
    ETMTT_General,
    ETMTT_Auto,
};

