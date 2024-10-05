#pragma once
#include "CoreMinimal.h"
#include "EJournalNoteCategory.generated.h"

UENUM(BlueprintType)
enum class EJournalNoteCategory : uint8 {
    None,
    Cure,
    Omnicide,
    Atmospheric = 4,
    Character = 8,
    Explanatory = 16,
    Humour = 32,
    Email = 64,
    Plot = 128,
};

