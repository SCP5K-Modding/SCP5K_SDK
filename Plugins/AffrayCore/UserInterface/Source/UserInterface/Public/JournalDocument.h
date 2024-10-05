#pragma once
#include "CoreMinimal.h"
#include "EClearanceLevel.h"
#include "EContainmentClass.h"
#include "EDisruptionClass.h"
#include "ERiskClass.h"
#include "ESecondaryClass.h"
#include "JournalEntry.h"
#include "JournalDocument.generated.h"

UCLASS(Blueprintable)
class USERINTERFACE_API UJournalDocument : public UJournalEntry {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> AdditionalData;
    
    UJournalDocument();

};

