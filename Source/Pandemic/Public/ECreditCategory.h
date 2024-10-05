#pragma once
#include "CoreMinimal.h"
#include "ECreditCategory.generated.h"

UENUM(BlueprintType)
enum class ECreditCategory : uint8 {
    Studio,
    ProjectManagement,
    Design,
    Programming,
    Art,
    LevelDesign,
    Animation,
    ConceptArt,
    Audio,
    Writing,
    UI,
    VoiceActing,
    Localization,
    Consulting,
    Thanks,
    QA,
};

