#pragma once
#include "CoreMinimal.h"
#include "EMissionItemType.generated.h"

UENUM(BlueprintType)
enum class EMissionItemType : uint8 {
    MI_Other,
    MI_Keycard,
    MI_Key,
};

