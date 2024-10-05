#pragma once
#include "CoreMinimal.h"
#include "ESCP173HallucinationSeverity.generated.h"

UENUM(BlueprintType)
enum class ESCP173HallucinationSeverity : uint8 {
    None,
    Light,
    Mild,
    Moderate,
    Severe,
    Extreme,
};

