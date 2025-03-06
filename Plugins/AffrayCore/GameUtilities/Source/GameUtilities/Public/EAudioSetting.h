#pragma once
#include "CoreMinimal.h"
#include "EAudioSetting.generated.h"

UENUM(BlueprintType)
enum class EAudioSetting : uint8 {
    Master,
    Music,
    SFX,
    Voice,
    UI,
    Subtitle,
};

