#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameActions -ObjectName=GameAction -FallbackName=GameAction
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

