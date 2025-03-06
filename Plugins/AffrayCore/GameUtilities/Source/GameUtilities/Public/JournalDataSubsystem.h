#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnMasterJournalSavingCompleteDelegate.h"
#include "OnMasterJournalSavingStartedDelegate.h"
#include "JournalDataSubsystem.generated.h"

class UJournalDataEntry;
class UJournalSaveGame;

UCLASS(Blueprintable)
class GAMEUTILITIES_API UJournalDataSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UJournalDataEntry*> CustomJournalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJournalSaveGame* JournalSaveGame;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMasterJournalSavingStarted OnMasterJournalSavingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMasterJournalSavingComplete OnMasterJournalSavingCompleted;
    
    UJournalDataSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetCustomJournalList(TArray<UJournalDataEntry*> JournalList);
    
    UFUNCTION(BlueprintCallable)
    void SaveMasterJournalListToFile();
    
    UFUNCTION(BlueprintCallable)
    void RemoveCustomJournalEntry(UJournalDataEntry* JournalEntry);
    
    UFUNCTION(BlueprintCallable)
    void LoadMasterJournalListFromFile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMasterJournalLoadedFromFile();
    
    UFUNCTION(BlueprintCallable)
    TArray<FPrimaryAssetId> GetMasterJournalList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetJournalID(FPrimaryAssetId PrimaryAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetJournalCategory(FPrimaryAssetId PrimaryAsset, FGameplayTag& Category);
    
    UFUNCTION(BlueprintCallable)
    TArray<UJournalDataEntry*> GetCustomJournalList();
    
    UFUNCTION(BlueprintCallable)
    void GetCombinedJournalLists(TArray<UJournalDataEntry*>& CustomJournalEntries, TArray<FPrimaryAssetId>& MasterJournalEntries);
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomJournalList();
    
    UFUNCTION(BlueprintCallable)
    void AddMasterJournalEntry(const FPrimaryAssetId JournalEntry);
    
    UFUNCTION(BlueprintCallable)
    void AddCustomJournalEntry(UJournalDataEntry* JournalEntry);
    
};

