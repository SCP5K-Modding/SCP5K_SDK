#include "JournalTrigger.h"

AJournalTrigger::AJournalTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTriggerOnlyOnServer = true;
    this->bOneUse = true;
    this->bPerPlayer = true;
    this->AddJournalEntry = true;
}


