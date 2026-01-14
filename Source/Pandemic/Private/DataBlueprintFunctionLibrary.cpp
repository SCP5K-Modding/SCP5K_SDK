#include "DataBlueprintFunctionLibrary.h"

UDataBlueprintFunctionLibrary::UDataBlueprintFunctionLibrary() {
}

void UDataBlueprintFunctionLibrary::SortCreditsList(TArray<FCredit>& CreditsList) {
}

void UDataBlueprintFunctionLibrary::InsertIntoCreditsList(TArray<FCredit>& CreditsList, FCredit& Credit) {
}

FString UDataBlueprintFunctionLibrary::GetCreditName(FCredit& Credit) {
    return TEXT("");
}

FText UDataBlueprintFunctionLibrary::FormatTextData(APlayerController* PlayerController, FText Text) {
    return FText::GetEmpty();
}

FString UDataBlueprintFunctionLibrary::FormatInput(const FString& Prefix, const FString& Text) {
    return TEXT("");
}

void UDataBlueprintFunctionLibrary::FormatDocumentTextTest(const FText Text, TArray<FText>& Pages, FText& Footer) {
}

FCreditedPerson UDataBlueprintFunctionLibrary::CreateCreditedPersonFromEntry(FCreditsEntry& CreditsEntry) {
    return FCreditedPerson{};
}


