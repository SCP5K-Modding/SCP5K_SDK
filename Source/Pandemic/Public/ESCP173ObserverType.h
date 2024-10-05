#pragma once
#include "CoreMinimal.h"
#include "ESCP173ObserverType.generated.h"

UENUM(BlueprintType)
enum class ESCP173ObserverType : uint8 {
    ESCP173OT_Player,
    ESCP173OT_AI,
};

