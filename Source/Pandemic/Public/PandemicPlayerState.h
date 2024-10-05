#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "FPSLoadout.h"
#include "Journal.h"
#include "DLCOwnership.h"
#include "EMissionItemType.h"
#include "EPlayerStatus.h"
#include "PlayerID.h"
#include "TeamDefinition.h"
#include "PandemicPlayerState.generated.h"

class AController;
class APandemicPlayerState;
class APawn;
class APlayerController;
class UMissionItem;
class UMissionItemSlot;

UCLASS(Blueprintable)
class PANDEMIC_API APandemicPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerUpdatedDelegate, APandemicPlayerState*, Player);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerStatusUpdatedDelegate, APandemicPlayerState*, Player, EPlayerStatus, Status);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerStatsUpdatedDelegate, APandemicPlayerState*, Player, int32, Stat);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPlayerPVPKillStatsUpdatedDelegate, APandemicPlayerState*, Player, int32, Stat, APlayerState*, Target);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerNameUpdatedDelegate, APandemicPlayerState*, Player, const FString&, Name);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerLoadoutUpdatedDelegate, APandemicPlayerState*, Player, FFPSLoadout, Loadout);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPlayerKillStatsUpdatedDelegate, APandemicPlayerState*, Player, int32, Stat, APawn*, Target);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerFlagUpdatedDelegate, APandemicPlayerState*, Player, bool, Flag);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Status, meta=(AllowPrivateAccess=true))
    EPlayerStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Team, meta=(AllowPrivateAccess=true))
    int32 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TotalKills, meta=(AllowPrivateAccess=true))
    int32 TotalKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerKills, meta=(AllowPrivateAccess=true))
    int32 PlayerKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamKills, meta=(AllowPrivateAccess=true))
    int32 TeamKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TotalDeaths, meta=(AllowPrivateAccess=true))
    int32 TotalDeaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 Headshots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Level, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 GlobalKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 GlobalPlayerKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 GlobalDeaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 GlobalHeadshots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 GlobalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsOwner, meta=(AllowPrivateAccess=true))
    bool bIsOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsAdmin, meta=(AllowPrivateAccess=true))
    bool bIsAdmin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDev, meta=(AllowPrivateAccess=true))
    bool bIsDev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSupporter, meta=(AllowPrivateAccess=true))
    bool bIsSupporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSpeaking, meta=(AllowPrivateAccess=true))
    bool bIsSpeaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsServerMuted, meta=(AllowPrivateAccess=true))
    bool bIsServerMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocallyMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bRespawning;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int64 RespawnTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeadshotScoreAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillScoreAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeathScoreAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerKillScoreAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamKillScoreAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionInventory, meta=(AllowPrivateAccess=true))
    TArray<UMissionItemSlot*> MissionInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FDLCOwnership> CachedDLCOwnership;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDLCOwnership> LocalCachedDLCOwnership;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedFaction, meta=(AllowPrivateAccess=true))
    uint8 SelectedFaction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RandomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentLoadout, meta=(AllowPrivateAccess=true))
    FFPSLoadout CurrentLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsReady, meta=(AllowPrivateAccess=true))
    bool bIsReady;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatsUpdatedDelegate OnTeamUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerKillStatsUpdatedDelegate OnTotalKillsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPVPKillStatsUpdatedDelegate OnPlayerKillsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPVPKillStatsUpdatedDelegate OnTeamKillsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatsUpdatedDelegate OnTotalDeathsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatsUpdatedDelegate OnPlayerIdUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatsUpdatedDelegate OnPlayerScoreUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatsUpdatedDelegate OnPlayerFactionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerNameUpdatedDelegate OnPlayerNameUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerFlagUpdatedDelegate OnPlayerReadyUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatusUpdatedDelegate OnPlayerStatusUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatsUpdatedDelegate OnLevelUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerUpdatedDelegate OnPlayerTagsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLoadoutUpdatedDelegate OnPlayerLoadoutUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatsUpdatedDelegate OnPlayerDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerUpdatedDelegate OnPlayerMissionInventoryUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrivateJournalEntry, meta=(AllowPrivateAccess=true))
    TArray<FJournal> PrivateJournalEntry;
    
public:
    APandemicPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UseMissionItem(TSoftObjectPtr<UMissionItem> Item);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLevel();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TryRemoveMissionItem(TSoftObjectPtr<UMissionItem> Item);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartGrantMissionItem(TSoftObjectPtr<UMissionItem> Item);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStatus(EPlayerStatus NewStatus, bool bForceUpdate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetServerMuted(bool bNewMuted);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetReady(bool bNewReady);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetMuted(bool bNewMuted);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLoadout(FFPSLoadout Loadout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestUnBanPlayer(const FPlayerID& Player);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestRemoveOwner(const FPlayerID& Player);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestRemoveAdmin(const FPlayerID& Player);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestMutePlayer(const FPlayerID& Player, bool bNewMuted);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestKickPlayer(const FPlayerID& Player, const FString& Reason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestBanPlayer(const FPlayerID& Player, const FString& Reason, int32 Days);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestAddOwner(const FPlayerID& Player);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestAddAdmin(const FPlayerID& Player);
    
    UFUNCTION(BlueprintCallable)
    void RemovePrivateJournalEntry(FJournal JournalEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveClientInitialize(AController* C);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_TotalKills();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_TotalDeaths();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_TeamKills();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Team();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Status();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_SelectedFaction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_PrivateJournalEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_PlayerKills();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_MissionInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Level();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsSupporter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsSpeaking();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsServerMuted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsDev();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsAdmin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentLoadout();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasSecurityAccess(int32 SecurityLevel, EMissionItemType ItemType, FName ID, bool UseIfFound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalKills() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalDeaths() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTeamDefinition(FTeamDefinition& TeamDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomValue(int32 Max) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerKills() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPingMS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeadshots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyKills() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetDoesOwnDLC(int32 DLCID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFPSLoadout GetCurrentLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetController() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishGrantMissionItem(TSoftObjectPtr<UMissionItem> Item);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientApplyOfflineScore();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AddAchievement(const FString& AchievementName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTeam(int32 NewTeam);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool CanPickupMissionItem(TSoftObjectPtr<UMissionItem> Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMutePlayer(const FPlayerID& Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanKickPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanKickPlayer(const FPlayerID& Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEditOwners() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEditMutes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEditBans() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEditAdmins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBanPlayer(const FPlayerID& Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateRandomValue(int32 Seed, int32 Max) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddScore(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void AddPrivateJournalEntry(FJournal JournalEntry);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddKill(bool IsHeadshot, bool IsPlayer, APawn* Killed, APlayerState* PlayerState, float ScoreModifier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddDeath();
    
};

