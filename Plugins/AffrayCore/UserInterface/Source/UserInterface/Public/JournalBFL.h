#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Journal.h"
#include "JournalBFL.generated.h"

UCLASS(Blueprintable)
class USERINTERFACE_API UJournalBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UJournalBFL();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_JournalJournal(const FJournal& Arg1, const FJournal& Arg2);
    
};

