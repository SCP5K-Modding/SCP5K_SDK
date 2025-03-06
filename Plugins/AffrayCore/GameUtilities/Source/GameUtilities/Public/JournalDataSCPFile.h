#pragma once
#include "CoreMinimal.h"
#include "EClearanceLevel.h"
#include "EContainmentClass.h"
#include "EDisruptionClass.h"
#include "ERiskClass.h"
#include "ESecondaryClass.h"
#include "JournalDataDocument.h"
#include "JournalDataSCPFile.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GAMEUTILITIES_API UJournalDataSCPFile : public UJournalDataDocument {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContainmentClass ContainmentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClearanceLevel ClearanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisruptionClass DisruptionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERiskClass RiskClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESecondaryClass SecondaryClass;
    
    UJournalDataSCPFile();

};

