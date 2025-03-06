#pragma once
#include "CoreMinimal.h"
#include "EClearanceLevel.h"
#include "EDisruptionClass.h"
#include "JournalDataDocument.h"
#include "JournalDataTerminusProcedure.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GAMEUTILITIES_API UJournalDataTerminusProcedure : public UJournalDataDocument {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClearanceLevel ClearanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisruptionClass DisruptionClass;
    
    UJournalDataTerminusProcedure();

};

