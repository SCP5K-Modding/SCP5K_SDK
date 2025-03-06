#pragma once
#include "CoreMinimal.h"
#include "JournalDataEntry.h"
#include "JournalDataNote.generated.h"

class UTexture2D;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GAMEUTILITIES_API UJournalDataNote : public UJournalDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoteText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NoteImage;
    
    UJournalDataNote();

};

