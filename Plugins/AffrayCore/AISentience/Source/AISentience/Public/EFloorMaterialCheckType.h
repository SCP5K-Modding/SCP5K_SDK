#pragma once
#include "CoreMinimal.h"
#include "EFloorMaterialCheckType.generated.h"

UENUM(BlueprintType)
enum class EFloorMaterialCheckType : uint8 {
    Any,
    WhiteList,
    BlackList,
};

