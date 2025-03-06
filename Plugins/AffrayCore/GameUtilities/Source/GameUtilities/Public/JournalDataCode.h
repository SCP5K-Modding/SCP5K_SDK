#pragma once
#include "CoreMinimal.h"
#include "JournalDataEntry.h"
#include "JournalDataCode.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GAMEUTILITIES_API UJournalDataCode : public UJournalDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    UJournalDataCode();

};

