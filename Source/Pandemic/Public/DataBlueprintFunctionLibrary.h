#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Credit.h"
#include "DataBlueprintFunctionLibrary.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class PANDEMIC_API UDataBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDataBlueprintFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void InsertIntoCreditsList(UPARAM(Ref) TArray<FCredit>& CreditsList, FCredit Credit);
    
    UFUNCTION(BlueprintCallable)
    static FText FormatTextData(APlayerController* PlayerController, FText Text);
    
    UFUNCTION(BlueprintCallable)
    static FString FormatInput(const FString& Prefix, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void FormatDocumentTextTest(const FText Text, TArray<FText>& Pages, FText& Footer);
    
};

