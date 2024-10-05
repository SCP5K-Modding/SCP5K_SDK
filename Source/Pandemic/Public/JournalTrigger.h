#pragma once
#include "CoreMinimal.h"
#include "PlayerTriggerVolume.h"
#include "Journal.h"
#include "JournalTrigger.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API AJournalTrigger : public APlayerTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddJournalEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJournal JournalEntry;
    
    AJournalTrigger(const FObjectInitializer& ObjectInitializer);

};

