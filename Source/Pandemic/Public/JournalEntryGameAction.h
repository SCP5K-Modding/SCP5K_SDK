#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "JournalEntryGameAction.generated.h"

class UJournalDataEntry;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API UJournalEntryGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomJournalEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPublic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJournalDataEntry* JournalEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJournalDataEntry* CustomJournalEntry;
    
    UJournalEntryGameAction();

};

