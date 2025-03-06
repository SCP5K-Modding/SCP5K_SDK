#pragma once
#include "CoreMinimal.h"
#include "EDialoguePriorityType.generated.h"

UENUM(BlueprintType)
enum class EDialoguePriorityType : uint8 {
    DPT_Wait,
    DPT_Interrupt,
    DPT_Ignore,
    DPT_Overlap,
};

