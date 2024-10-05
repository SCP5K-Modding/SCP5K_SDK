#pragma once
#include "CoreMinimal.h"
#include "EJournalEntryCategory.generated.h"

UENUM(BlueprintType)
enum class EJournalEntryCategory : uint8 {
    Predefined,
    Custom,
};

