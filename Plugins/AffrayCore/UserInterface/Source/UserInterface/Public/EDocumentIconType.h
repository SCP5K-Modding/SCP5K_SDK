#pragma once
#include "CoreMinimal.h"
#include "EDocumentIconType.generated.h"

UENUM(BlueprintType)
enum class EDocumentIconType : uint8 {
    DIT_Containment,
    DIT_Disruption,
    DIT_Risk,
    DIT_Clearance,
    DIT_SecondaryClass,
};

