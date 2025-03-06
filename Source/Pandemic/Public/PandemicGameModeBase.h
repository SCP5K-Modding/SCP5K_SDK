#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "ChatMessageContent.h"
#include "PlayerReport.h"
#include "Templates/SubclassOf.h"
#include "PandemicGameModeBase.generated.h"

class AAISpawnArea;
class APandemicGameStateBase;
class APandemicPlayerState;
class APawn;
class APlayerController;
class APlayerState;
class UActivatableWidget;
class UDataTable;
class UFPSItemData;
class UPrimitiveComponent;

UCLASS(Blueprintable, NonTransient)
class PANDEMIC_API APandemicGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRespawnWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RespawnWaveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameStartRespawnWaveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerRespawnWaveOnMajorObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSinglePlayerRespawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SinglePlayerRespawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GameModeDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GameModeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFactionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPlayerLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPlayerChangeTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AISpawnScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequirePlayerReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMapVote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayableStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APandemicGameStateBase* PandemicGameStateBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailOnNoPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForRestartOnEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartGameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UActivatableWidget>> PreGameUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UActivatableWidget>> PostGameUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChatMessageContent> MessageLog;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APlayerState*, APlayerController*> PlayerControllers;
    
public:
    APandemicGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryRemoveGlobalBan(const FString& PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryAddGlobalBan(const FString& PlayerID, const FString& Reason, int32 Days);
    
    UFUNCTION(BlueprintCallable)
    void StartRespawnWaveWithTime(int32 CustomRespawnWaveTime);
    
    UFUNCTION(BlueprintCallable)
    void StartRespawnWave();
    
    UFUNCTION(BlueprintCallable)
    void StartRespawnPlayer(APlayerController* Player, float InRespawnTime);
    
    UFUNCTION(BlueprintCallable)
    void SpectatePlayer(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnPlayerAtPlayerStart(APlayerController* Controller, TSubclassOf<APawn> Class);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnPlayer(APlayerController* Controller, TSubclassOf<APawn> Class, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldStartGame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldRestartGame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldEndGame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ServerTravel(const FString& URL, bool bAbsolute, bool bShouldSkipGameNotify);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveOwnerFromPlayerState(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveOwner(const FString& PlayerNameOrID);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBan(const FString& PlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAdminFromPlayerState(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAdmin(const FString& PlayerNameOrID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterPlayerReport(FPlayerReport Report);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReceivePreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePostSeamlessTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerDied(APandemicPlayerState* Player, bool bIsDeath);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerAlive(APandemicPlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    bool KickPlayerFromPlayerState(APlayerState* Player, const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    bool KickPlayer(const FString& PlayerNameOrID, const FString& Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerOwner(APlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerDev(APlayerController* Player, UDataTable* CreditsDataTable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerBanned(APlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerAdmin(APlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyPlayerReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyPlayerAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetPlayerSpawnMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APlayerController*> GetPlayerList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerID(const FString& PlayerName, FString& ID, APlayerState*& Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerControllerFromPlayerState(APlayerState* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerCanSeeSpawn(AAISpawnArea* Spawn, float Bias) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerCanSeeCollision(UPrimitiveComponent* Component, FVector Offset, float Bias) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerCanSee(FVector Location, float Bias) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerByName(const FString& PlayerName, APlayerState*& Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerByID(const FString& PlayerID, APlayerState*& Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayer(const FString& PlayerNameOrID, FString& ID, APlayerState*& Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinPlayerDistance(FVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxPlayerDistance(FVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAveragePlayerDistance(FVector Location) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftObjectPtr<UFPSItemData>> GetAvailableItemsInSlot(int32 SlotIndex, APandemicPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAlwaysJoin(FUniqueNetIdRepl NetID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersReady() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddOwnerFromPlayerState(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    bool AddOwner(const FString& PlayerNameOrID);
    
    UFUNCTION(BlueprintCallable)
    bool AddBanFromPlayerState(APlayerState* Player, const FString& Reason, int32 Days, APlayerState* Sender);
    
    UFUNCTION(BlueprintCallable)
    bool AddBan(const FString& PlayerNameOrID, const FString& Reason, int32 Days, APlayerState* Sender);
    
    UFUNCTION(BlueprintCallable)
    bool AddAdminFromPlayerState(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    bool AddAdmin(const FString& PlayerNameOrID);
    
};

