#pragma once
#include "CoreMinimal.h"
#include "EAttachmentSlotType.generated.h"

UENUM(BlueprintType)
enum class EAttachmentSlotType : uint8 {
    ST_Generic,
    ST_Sight,
    ST_Barrel,
    ST_Grip,
    ST_Special,
    ST_CantedSight,
};

