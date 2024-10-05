#pragma once
#include "CoreMinimal.h"
#include "EFadeInOut.generated.h"

UENUM(BlueprintType)
enum class EFadeInOut : uint8 {
    NoFade,
    FadeIn,
    FadeOut,
    FadeInAndOut,
};

