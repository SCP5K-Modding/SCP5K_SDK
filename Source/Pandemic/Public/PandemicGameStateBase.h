#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameStateBase.h"
#include "AlivePlayersUpdatedDelegateDelegate.h"
#include "AllPlayersLoadedDelegateDelegate.h"
#include "CharacterCountUpdatedDelegateDelegate.h"
#include "Checkpoint.h"
#include "CheckpointUpdatedDelegateDelegate.h"
#include "CinematicEndedDelegateDelegate.h"
#include "CinematicStartedDelegateDelegate.h"
#include "CinematicState.h"
#include "EGameStatus.h"
#include "GameStatusDelegateDelegate.h"
#include "GameUIState.h"
#include "MapListUpdatedDelegateDelegate.h"
#include "PlayerUpdatedDelegateDelegate.h"
#include "SelectedMap.h"
#include "PandemicGameStateBase.generated.h"

class ALevelSequenceActor;
class APandemicPlayerState;
class APlayerState;
class UActivatableWidget;
class UJournalDataEntry;
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentCollectionMapList, meta=(AllowPrivateAccess=true))
    TArray<FSelectedMap> CurrentCollectionMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MapCollectionIndex, meta=(AllowPrivateAccess=true))
    int32 CurrentMapCollectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AlivePlayers, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> AlivePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameUIList, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UActivatableWidget>> GameUIList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnLocations, meta=(AllowPrivateAccess=true))
    TArray<FString> SpawnLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bForceHideHUD, meta=(AllowPrivateAccess=true))
    bool bForceHideHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UIState, meta=(AllowPrivateAccess=true))
    FGameUIState UIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CinematicState, meta=(AllowPrivateAccess=true))
    FCinematicState CinematicState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicStartedDelegate OnCinematicStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicEndedDelegate OnCinematicEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllPlayersLoadedDelegate OnAllPlayersLoaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EndGameTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RestartGameTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 StartGameTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bPendingStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EarlyStartDelay;
    
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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PublicCustomJournalList, meta=(AllowPrivateAccess=true))
    TArray<UJournalDataEntry*> PublicCustomJournalList;
    
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
    void StartCinematic(bool bSkippable, float Duration, FName Name, ALevelSequenceActor* SequenceActor);
    
    UFUNCTION(BlueprintCallable)
    void SkipCinematic(FName Name);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetUnlockedCheckpoint(FName CheckpointName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUIState(FGameUIState NewUIState);
    
public:
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
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetForceHideHUD(bool bShouldForceHideHUD);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentSinglePlayerRespawns(int32 NewSinglePlayerRespawns);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMapCollectionIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCollectionMapList(TArray<FSelectedMap> Maps);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCinematicState(FCinematicState NewCinematicState);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAllowSinglePlayerRespawns(bool bNewAllowSinglePlayerRespawns);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SavePlayerLoadouts();
    
    UFUNCTION(BlueprintCallable)
    void RemoveCustomJournalEntryByID(FName JournalID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCustomJournalEntry(UJournalDataEntry* JournalList);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PushGameUI(const TArray<TSoftClassPtr<UActivatableWidget>>& UIList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerReadyUpdated(APandemicPlayerState* Player, bool bIsReady);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerFinishedLoading(APandemicPlayerState* Player);
    
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
    void OnRep_UIState(FGameUIState PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_SpawnLocations();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_PublicCustomJournalList();
    
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
    void OnRep_CurrentCollectionMapList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CinematicState(FCinematicState PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_bForceHideHUD();
    
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
    
    UFUNCTION(BlueprintCallable)
    bool IsReadyForUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCinematic(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyPlayerReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyPlayerAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNextMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCinematicEnded(FName Name, float History);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCheckpoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetRandomPlayerLocation(APlayerState*& Player);
    
    UFUNCTION(BlueprintCallable)
    TArray<UJournalDataEntry*> GetPublicCustomJournalList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumReadyPlayers() const;
    
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
    FSelectedMap GetCurrentMapFromCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentMapCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowSinglePlayerRespawns() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EndCinematic(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CinematicStarted(FName Name, ALevelSequenceActor* LevelSequence, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CinematicEnded(FName Name, bool bWasSkipped);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersLoaded() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddSharedMissionItem(UMissionItem* MissionItem);
    
    UFUNCTION(BlueprintCallable)
    void AddCustomJournalEntry(UJournalDataEntry* JournalEntry);
    
};

