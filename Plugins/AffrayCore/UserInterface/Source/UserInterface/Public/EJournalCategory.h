#pragma once
#include "CoreMinimal.h"
#include "EJournalCategory.generated.h"

UENUM(BlueprintType)
enum class EJournalCategory : uint8 {
    Document,
    Code,
    Object,
    Note,
    Audio,
    Email,
};

