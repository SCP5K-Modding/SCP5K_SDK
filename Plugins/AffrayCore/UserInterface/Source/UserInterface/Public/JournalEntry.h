#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
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

