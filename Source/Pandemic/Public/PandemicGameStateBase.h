#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameStateBase.h"
#include "Journal.h"
#include "AlivePlayersUpdatedDelegateDelegate.h"
#include "CharacterCountUpdatedDelegateDelegate.h"
#include "Checkpoint.h"
#include "CheckpointUpdatedDelegateDelegate.h"
#include "EGameStatus.h"
#include "GameStatusDelegateDelegate.h"
#include "MapListUpdatedDelegateDelegate.h"
#include "PlayerUpdatedDelegateDelegate.h"
#include "SelectedMap.h"
#include "Templates/SubclassOf.h"
#include "PandemicGameStateBase.generated.h"

class APandemicPlayerState;
class APlayerState;
class UActivatableWidget;
class UMissionItem;
class UMissionItemSlot;
class UObjective;
class UPandemicDifficulty;

UCLASS(Blueprintable)
class PANDEMIC_API APandemicGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseRespawnWaves;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int64 RespawnWaveTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RespawnWaveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Difficulty, meta=(AllowPrivateAccess=true))
    UPandemicDifficulty* Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionInventory, meta=(AllowPrivateAccess=true))
    TArray<UMissionItemSlot*> MissionInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IndividualMapList, meta=(AllowPrivateAccess=true))
    TArray<FSelectedMap> IndividualMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MapCollectionList, meta=(AllowPrivateAccess=true))
    TArray<FName> MapCollectionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FullMapList, meta=(AllowPrivateAccess=true))
    TArray<FSelectedMap> FullMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentMapList, meta=(AllowPrivateAccess=true))
    TArray<FSelectedMap> CurrentMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MapCollectionIndex, meta=(AllowPrivateAccess=true))
    int32 CurrentMapCollectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AlivePlayers, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> AlivePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameUIList, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UActivatableWidget>> GameUIList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnLocations, meta=(AllowPrivateAccess=true))
    TArray<FString> SpawnLocations;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EndGameTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RestartGameTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 StartGameTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentSinglePlayerRespawns, meta=(AllowPrivateAccess=true))
    int32 CurrentSinglePlayerRespawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAllowSinglePlayerRespawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastCheckpoint, meta=(AllowPrivateAccess=true))
    FName LastCheckpointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameStatus, meta=(AllowPrivateAccess=true))
    EGameStatus GameStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerUpdatedDelegate OnPlayerAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerUpdatedDelegate OnPlayerRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStatusDelegate OnStatusUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterCountUpdatedDelegate OnMaxCharactersUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapListUpdatedDelegate OnMapListUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlivePlayersUpdatedDelegate OnAlivePlayersUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlivePlayersUpdatedDelegate OnPlayerDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckpointUpdatedDelegate OnLastCheckpointUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PublicJournalEntry, meta=(AllowPrivateAccess=true))
    TArray<FJournal> PublicJournalEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsUsingMapCollection;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateCharacterCount, meta=(AllowPrivateAccess=true))
    int32 MaxCharacterCount;
    
    APandemicGameStateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TryPassOnMissionItemsFromPlayer(APandemicPlayerState* Player, bool bForcePassOn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetUnlockedCheckpoint(FName CheckpointName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStatus(EGameStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxCharacterCount(int32 MaxCharacters);
    
    UFUNCTION(BlueprintCallable)
    void SetMapCollectionList(TArray<FName> Maps);
    
    UFUNCTION(BlueprintCallable)
    void SetIndividualMapList(TArray<FSelectedMap> Maps);
    
    UFUNCTION(BlueprintCallable)
    void SetFullMapList(TArray<FSelectedMap> Maps);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentSinglePlayerRespawns(int32 NewSinglePlayerRespawns);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMapList(TArray<FSelectedMap> Maps);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMapCollectionIndex(int32 Index);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAllowSinglePlayerRespawns(bool bNewAllowSinglePlayerRespawns);
    
    UFUNCTION(BlueprintCallable)
    void RemovePublicJournalEntry(FJournal JournalEntry);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PushGameUI(const TArray<TSubclassOf<UActivatableWidget>>& UIList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerDied(APandemicPlayerState* Player, bool bIsDeath);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerAlive(APandemicPlayerState* Player);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PassOnMissionItemFromPlayer(APandemicPlayerState* Player, UMissionItemSlot* Slot, bool bForcePassOn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_UpdateCharacterCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_SpawnLocations();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_PublicJournalEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_MissionInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_MapCollectionList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_MapCollectionIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_LastCheckpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IndividualMapList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_GameUIList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_GameStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_FullMapList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Difficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentSinglePlayerRespawns();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentMapList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_AlivePlayers();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObjectiveCompleted(UObjective* Objective, bool bSucceeded);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendMessageToAll(const FString& Name, const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingMapCollection(FName& CollectionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionBegun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyPlayerReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyPlayerAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNextMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCheckpoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetRandomPlayerLocation(APlayerState*& Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAlivePlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNextMapName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSelectedMap GetNextMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLowestPlayerHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLastCheckpointID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCheckpoint GetLastCheckpoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSinglePlayerRespawns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentMapCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowSinglePlayerRespawns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersReady() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddSharedMissionItem(UMissionItem* MissionItem);
    
    UFUNCTION(BlueprintCallable)
    void AddPublicJournalEntry(FJournal JournalEntry);
    
};

