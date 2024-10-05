#pragma once
#include "CoreMinimal.h"
#include "EChatType.generated.h"

UENUM(BlueprintType)
enum class EChatType : uint8 {
    Everyone,
    Team,
    Player,
};

