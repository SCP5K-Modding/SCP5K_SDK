#include "Journal.h"

FJournal::FJournal() {
    this->Category = EJournalEntryCategory::Predefined;
    this->Sharable = ESharingType::Private;
    this->Persistence = EJournalPersistenceType::Temporary;
}

