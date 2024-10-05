#pragma once
#include "CoreMinimal.h"
#include "EElectronicProperty.generated.h"

UENUM(BlueprintType)
enum class EElectronicProperty : uint8 {
    None,
    Enabled,
    Powered,
    Locked,
    Broken,
};

