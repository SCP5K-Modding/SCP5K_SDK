#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "JournalEntryGeneral.h"
#include "Tracking.h"
#include "JournalEntry.generated.h"

UCLASS(Blueprintable)
class USERINTERFACE_API UJournalEntry : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJournalEntryGeneral General;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTracking Tracking;
    
    UJournalEntry();

};

