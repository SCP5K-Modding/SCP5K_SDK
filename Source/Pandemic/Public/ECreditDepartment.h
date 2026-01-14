#pragma once
#include "CoreMinimal.h"
#include "ECreditDepartment.generated.h"

UENUM(BlueprintType)
enum class ECreditDepartment : uint8 {
    Studio,
    Production,
    GameDesign,
    LevelDesign,
    Programming,
    Writing,
    Art,
    Animation,
    Audio,
    VoiceTalent,
    QualityAssurance,
    Localization,
    Marketing,
    Contributors,
    Thanks,
};

