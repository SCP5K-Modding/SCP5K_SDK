#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
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

