#pragma once
#include "CoreMinimal.h"
#include "EObjectiveTriggerAction.generated.h"

UENUM(BlueprintType)
enum class EObjectiveTriggerAction : uint8 {
    None,
    Complete,
    Activate,
    Deactivate,
    Start,
    Reset,
};

