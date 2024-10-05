#pragma once
#include "CoreMinimal.h"
#include "EJournalEmailImportance.generated.h"

UENUM(BlueprintType)
enum class EJournalEmailImportance : uint8 {
    None,
    Low,
    Medium,
    High,
};

