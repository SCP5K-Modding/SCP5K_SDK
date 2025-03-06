#pragma once
#include "CoreMinimal.h"
#include "EDialogueType.generated.h"

UENUM(BlueprintType)
enum class EDialogueType : uint8 {
    DT_None,
    DT_Bark,
    DT_Reply,
};

