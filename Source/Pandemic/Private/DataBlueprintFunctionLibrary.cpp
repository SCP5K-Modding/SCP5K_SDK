#include "DataBlueprintFunctionLibrary.h"

UDataBlueprintFunctionLibrary::UDataBlueprintFunctionLibrary() {
}

void UDataBlueprintFunctionLibrary::InsertIntoCreditsList(TArray<FCredit>& CreditsList, FCredit Credit) {
}

FText UDataBlueprintFunctionLibrary::FormatTextData(APlayerController* PlayerController, FText Text) {
    return FText::GetEmpty();
}

FString UDataBlueprintFunctionLibrary::FormatInput(const FString& Prefix, const FString& Text) {
    return TEXT("");
}

void UDataBlueprintFunctionLibrary::FormatDocumentTextTest(const FText Text, TArray<FText>& Pages, FText& Footer) {
}


