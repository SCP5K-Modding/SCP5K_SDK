#pragma once
#include "CoreMinimal.h"
#include "JournalEntryLoadedDelegate.generated.h"

class UJournalEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FJournalEntryLoaded, UJournalEntry*, JournalEntry);

