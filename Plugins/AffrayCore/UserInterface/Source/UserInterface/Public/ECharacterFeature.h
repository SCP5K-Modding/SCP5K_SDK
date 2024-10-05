#pragma once
#include "CoreMinimal.h"
#include "ECharacterFeature.generated.h"

UENUM(BlueprintType)
enum class ECharacterFeature : uint8 {
    None,
    HairColor,
    EyeColor,
    BodyBuild,
};

