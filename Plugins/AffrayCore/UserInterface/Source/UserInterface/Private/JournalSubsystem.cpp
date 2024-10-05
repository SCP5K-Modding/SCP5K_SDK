#include "JournalSubsystem.h"

UJournalSubsystem::UJournalSubsystem() {
}

void UJournalSubsystem::UpdateJournalList(ESharingType Sharable, TArray<FJournal> UpdatedList) {
}

void UJournalSubsystem::LoadJournalEntry(TSoftObjectPtr<UJournalEntry> JournalEntry) {
}

void UJournalSubsystem::JournalEntryLoaded(TSoftObjectPtr<UJournalEntry> Entry) {
}

TArray<FJournal> UJournalSubsystem::GetJournalList(EJournalPersistenceType Persistence) {
    return TArray<FJournal>();
}

TSoftObjectPtr<UJournalEntry> UJournalSubsystem::GetJournalEntrySoftObject(TSoftObjectPtr<UObject> Object) {
    return NULL;
}

TArray<FJournal> UJournalSubsystem::GetAllJournalLists() {
    return TArray<FJournal>();
}


