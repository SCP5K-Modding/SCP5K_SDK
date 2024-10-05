#pragma once
#include "CoreMinimal.h"
#include "EJournalEntryCategory.h"
#include "EJournalPersistenceType.h"
#include "ESharingType.h"
#include "JournalEntryGeneral.h"
#include "Journal.generated.h"

class UJournalEntry;

USTRUCT(BlueprintType)
struct FJournal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJournalEntryCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESharingType Sharable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJournalPersistenceType Persistence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UJournalEntry> JournalDataID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJournalEntryGeneral General;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomData;
    
    USERINTERFACE_API FJournal();
};

