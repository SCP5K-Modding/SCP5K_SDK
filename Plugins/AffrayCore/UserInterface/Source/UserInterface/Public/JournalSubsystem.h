#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EJournalPersistenceType.h"
#include "ESharingType.h"
#include "Journal.h"
#include "JournalEntryLoadedDelegate.h"
#include "OnJournalEntryAddedDelegate.h"
#include "JournalSubsystem.generated.h"

class UJournalEntry;
class UObject;

UCLASS(Blueprintable)
class USERINTERFACE_API UJournalSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnJournalUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJournalEntryLoaded OnJournalEntryLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJournalUpdated OnJournalUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJournalEntryAdded OnJournalEntryAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJournalEntryAdded OnJournalEntryRemoved;
    
    UJournalSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateJournalList(ESharingType Sharable, TArray<FJournal> UpdatedList);
    
    UFUNCTION(BlueprintCallable)
    void LoadJournalEntry(TSoftObjectPtr<UJournalEntry> JournalEntry);
    
    UFUNCTION(BlueprintCallable)
    void JournalEntryLoaded(TSoftObjectPtr<UJournalEntry> Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FJournal> GetJournalList(EJournalPersistenceType Persistence);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UJournalEntry> GetJournalEntrySoftObject(TSoftObjectPtr<UObject> Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FJournal> GetAllJournalLists();
    
};

