#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameUtilities -ObjectName=PlayerTriggerVolume -FallbackName=PlayerTriggerVolume
#include "JournalTrigger.generated.h"

class UJournalDataEntry;

UCLASS(Blueprintable)
class PANDEMIC_API AJournalTrigger : public APlayerTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddJournalEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJournalDataEntry* JournalEntry;
    
    AJournalTrigger(const FObjectInitializer& ObjectInitializer);

};

