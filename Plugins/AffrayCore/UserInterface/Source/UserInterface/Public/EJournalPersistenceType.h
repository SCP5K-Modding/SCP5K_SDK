#pragma once
#include "CoreMinimal.h"
#include "EJournalPersistenceType.generated.h"

UENUM(BlueprintType)
enum class EJournalPersistenceType : uint8 {
    Temporary,
    Session,
    Persistent,
};

