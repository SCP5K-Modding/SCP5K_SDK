#include "JournalPickup.h"

AJournalPickup::AJournalPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseCustomJournalEntry = false;
    this->bIsPublic = false;
    this->JournalEntry = NULL;
    this->CustomJournalEntry = NULL;
}

UJournalDataEntry* AJournalPickup::GetJournalEntry() {
    return NULL;
}


