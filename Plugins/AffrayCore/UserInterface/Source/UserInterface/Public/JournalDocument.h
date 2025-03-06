#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameUtilities -ObjectName=EClearanceLevel -FallbackName=EClearanceLevel
//CROSS-MODULE INCLUDE V2: -ModuleName=GameUtilities -ObjectName=EContainmentClass -FallbackName=EContainmentClass
//CROSS-MODULE INCLUDE V2: -ModuleName=GameUtilities -ObjectName=EDisruptionClass -FallbackName=EDisruptionClass
//CROSS-MODULE INCLUDE V2: -ModuleName=GameUtilities -ObjectName=ERiskClass -FallbackName=ERiskClass
//CROSS-MODULE INCLUDE V2: -ModuleName=GameUtilities -ObjectName=ESecondaryClass -FallbackName=ESecondaryClass
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

