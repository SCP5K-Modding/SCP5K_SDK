#pragma once
#include "CoreMinimal.h"
#include "JournalEntry.h"
#include "JournalCode.generated.h"

UCLASS(Blueprintable)
class USERINTERFACE_API UJournalCode : public UJournalEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    UJournalCode();

};

