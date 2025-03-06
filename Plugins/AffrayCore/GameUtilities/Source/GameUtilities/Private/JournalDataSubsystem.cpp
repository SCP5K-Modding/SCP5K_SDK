#include "JournalDataSubsystem.h"

UJournalDataSubsystem::UJournalDataSubsystem() {
    this->JournalSaveGame = NULL;
}

void UJournalDataSubsystem::SetCustomJournalList(TArray<UJournalDataEntry*> JournalList) {
}

void UJournalDataSubsystem::SaveMasterJournalListToFile() {
}

void UJournalDataSubsystem::RemoveCustomJournalEntry(UJournalDataEntry* JournalEntry) {
}

void UJournalDataSubsystem::LoadMasterJournalListFromFile() {
}

bool UJournalDataSubsystem::IsMasterJournalLoadedFromFile() {
    return false;
}

TArray<FPrimaryAssetId> UJournalDataSubsystem::GetMasterJournalList() {
    return TArray<FPrimaryAssetId>();
}

FName UJournalDataSubsystem::GetJournalID(FPrimaryAssetId PrimaryAsset) {
    return NAME_None;
}

bool UJournalDataSubsystem::GetJournalCategory(FPrimaryAssetId PrimaryAsset, FGameplayTag& Category) {
    return false;
}

TArray<UJournalDataEntry*> UJournalDataSubsystem::GetCustomJournalList() {
    return TArray<UJournalDataEntry*>();
}

void UJournalDataSubsystem::GetCombinedJournalLists(TArray<UJournalDataEntry*>& CustomJournalEntries, TArray<FPrimaryAssetId>& MasterJournalEntries) {
}

void UJournalDataSubsystem::ClearCustomJournalList() {
}

void UJournalDataSubsystem::AddMasterJournalEntry(const FPrimaryAssetId JournalEntry) {
}

void UJournalDataSubsystem::AddCustomJournalEntry(UJournalDataEntry* JournalEntry) {
}


