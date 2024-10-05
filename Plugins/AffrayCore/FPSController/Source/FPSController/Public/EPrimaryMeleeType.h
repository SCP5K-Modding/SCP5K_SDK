#pragma once
#include "CoreMinimal.h"
#include "EPrimaryMeleeType.generated.h"

UENUM(BlueprintType)
enum class EPrimaryMeleeType : uint8 {
    Blunt,
    Sharp,
    Special,
};

