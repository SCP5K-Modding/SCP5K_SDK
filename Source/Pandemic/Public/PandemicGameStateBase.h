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
#include "EPlayerDeathReason.h"
#include "ERandomSeedMode.h"
#include "EVoteType.h"
#include "GameStatusDelegateDelegate.h"
#include "GameUIState.h"
#include "KickData.h"
#include "MapListUpdatedDelegateDelegate.h"
#include "PlayerUpdatedDelegateDelegate.h"
#include "ScoreCombo.h"
#include "SelectedMap.h"
#include "TeamData.h"
#include "TeamsPlayerCountUpdatedDelegateDelegate.h"
#include "Vote.h"
#include "VoteKickCanceledDelegateDelegate.h"
#include "VoteKickEndedDelegateDelegate.h"
#include "VoteKickPermissionUpdatedDelegateDelegate.h"
#include "VoteKickStartedDelegateDelegate.h"
#include "VoteKickSubmittedDelegateDelegate.h"
#include "VoteKickTallyUpdatedDelegateDelegate.h"
#include "PandemicGameStateBase.generated.h"

class ALevelSequenceActor;
class APandemicPlayerState;
class APlayerState;
class UAchievementManagerComponent;
class UActivatableWidget;
class UJournalDataEntry;
class UMissionItem;
class UMissionItemSlot;
class UObjective;
class UPandemicDifficulty;

UCLASS(Blueprintable, Config=Engine)
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Teams, meta=(AllowPrivateAccess=true))
    TArray<FTeamData> Teams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameUIList, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UActivatableWidget>> GameUIList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UActivatableWidget>> LateJoinUIList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnLocations, meta=(AllowPrivateAccess=true))
    TArray<FString> SpawnLocations;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteKickPermissionUpdatedDelegate OnVoteKickPermissionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteKickTallyUpdatedDelegate OnVoteKickTallyUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteKickStartedDelegate OnVoteKickStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteKickSubmittedDelegate OnVoteKickSubmitted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteKickEndedDelegate OnVoteKickEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteKickCanceledDelegate OnVoteKickCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamsPlayerCountUpdatedDelegate OnTeamsPlayerAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamsPlayerCountUpdatedDelegate OnTeamsPlayerRemoved;
    
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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAchievementManagerComponent* AchievementManager;
    
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
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERandomSeedMode RandomSeedMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> ScoreTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> ScoreModifiers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScoreCombo> ScoreCombos;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongshotDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsVoteKickAllowed, meta=(AllowPrivateAccess=true))
    bool bIsVoteKickAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveVoteKicks, meta=(AllowPrivateAccess=true))
    TArray<FKickData> ActiveVoteKicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVote> VotesInProgress;
    
protected:
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
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetVotesInProgress(const TArray<FVote>& NewVotes);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetUnlockedCheckpoint(FName CheckpointName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUIState(FGameUIState NewUIState);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTeams(const TArray<FTeamData>& NewTeams);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStatus(EGameStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxCharacterCount(int32 MaxCharacters);
    
    UFUNCTION(BlueprintCallable)
    void SetMapCollectionList(TArray<FName> Maps);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsVoteKickAllowed(bool bNewVoteKickAllowed);
    
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
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetActiveVoteKicks(const TArray<FKickData>& NewVoteKicks);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerSubmitVoteKick(int32 VoteResult, int32 CurrentVoteIndex, int32 CurrentKickIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerRemoveVoteKick(const APlayerState* VoteOwningPlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerEndVoteKick(int32 CurrentVoteIndex, int32 CurrentKickIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerCancelVoteKick(int32 CurrentVoteIndex, int32 CurrentKickIndex);
    
    UFUNCTION(BlueprintCallable)
    void ServerBeginVoteKick(const FVote& VoteToBegin, const FKickData& NewKickData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerAddVoteKick(const APlayerState* VotingPlayer, int32 NewVoteValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SavePlayerLoadouts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RetrieveVoteIndicesByType(int32 TeamIndex, EVoteType DesiredVoteType, TArray<int32>& OutVoteIndices) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RetrieveTeamVotesByType(int32 TeamIndex, EVoteType DesiredVoteType, TArray<FVote>& OutFoundVotes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RetrieveKickIndexByTeam(int32 TeamIndex, int32& OutKickIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RetrieveKickDataByTeam(int32 TeamIndex, FKickData& OutKickData) const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveCustomJournalEntryByID(FName JournalID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCustomJournalEntry(UJournalDataEntry* JournalList);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveActiveVoteKickData(int32 IndexToRemove);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReceivedMessage(const FString& Name, const FString& Message);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PushGameUI(const TArray<TSoftClassPtr<UActivatableWidget>>& UIList);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PushCachedPreGameUI();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PushCachedPostGameUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerReadyUpdated(APandemicPlayerState* Player, bool bIsReady);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerFinishedLoading(APandemicPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerDied(APandemicPlayerState* Player, EPlayerDeathReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerAlive(APandemicPlayerState* Player);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PassOnMissionItemFromPlayer(APandemicPlayerState* Player, UMissionItemSlot* Slot, bool bForcePassOn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTeamPlayerRemoved(const APandemicPlayerState* Player, int32 PreviousTeamIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTeamPlayerAdded(const APandemicPlayerState* Player, int32 NewTeamIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_UpdateCharacterCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_UIState(FGameUIState PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Teams(const TArray<FTeamData>& PreviousTeamsData);
    
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
    void OnRep_IsVoteKickAllowed();
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_ActiveVoteKicks(const TArray<FKickData>& PreviousVoteKicks);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCoOpPlayerRemoved(APlayerState* RemovedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnCoOpPlayerAdded(APlayerState* AddedPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObjectiveCompleted(UObjective* Objective, bool bSucceeded);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCosmeticEndVoteKick(int32 VoteKickTeamIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCosmeticCancelVoteKick(int32 VoteKickTeamIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendMessageToAll(const FString& Name, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void LoadAchievementData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoteKickInProgress(int32 TeamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingMapCollection(FName& CollectionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionBegun();
    
    UFUNCTION(BlueprintCallable)
    bool IsReadyForUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayersTeam(int32 TeamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer(APlayerState* Player) const;
    
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
    TArray<FVote> GetVotesInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreForTags(const FGameplayTagContainer& InTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomSeed() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetRandomPlayerLocation(APlayerState*& Player);
    
    UFUNCTION(BlueprintCallable)
    TArray<UJournalDataEntry*> GetPublicCustomJournalList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APandemicPlayerState*> GetPlayersPendingRespawn() const;
    
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
    bool GetIsVoteKickAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSinglePlayerRespawns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSelectedMap GetCurrentMapFromCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentMapCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowSinglePlayerRespawns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKickData> GetActiveVoteKicks() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EndCinematic(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CinematicStarted(FName Name, ALevelSequenceActor* LevelSequence, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CinematicEnded(FName Name, bool bWasSkipped);
    
    UFUNCTION(BlueprintCallable)
    void CheckAllPlayersLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersLoaded() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddSharedMissionItem(UMissionItem* MissionItem);
    
    UFUNCTION(BlueprintCallable)
    void AddCustomJournalEntry(UJournalDataEntry* JournalEntry);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 AddActiveVoteKickData(const FKickData& DataToAdd);
    
};

