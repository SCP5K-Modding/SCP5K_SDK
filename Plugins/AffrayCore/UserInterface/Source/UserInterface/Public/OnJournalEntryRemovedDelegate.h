#pragma once
#include "CoreMinimal.h"
#include "Journal.h"
#include "OnJournalEntryRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJournalEntryRemoved, FJournal, JournalEntry);

