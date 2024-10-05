#pragma once
#include "CoreMinimal.h"
#include "Journal.h"
#include "OnJournalEntryAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJournalEntryAdded, FJournal, JournalEntry);

