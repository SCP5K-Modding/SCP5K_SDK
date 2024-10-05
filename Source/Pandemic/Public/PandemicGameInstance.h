#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FPSGameplayConfig.h"
#include "SimpleObjectiveData.h"
#include "LoadingScreenGameInstance.h"
#include "PlayerBan.h"
#include "PlayerReport.h"
#include "SelectedMap.h"
#include "PandemicGameInstance.generated.h"

class UMapData;

UCLASS(Blueprintable, ConfigDoNotCheckDefaults, NonTransient, Config=ServerConfig)
class PANDEMIC_API UPandemicGameInstance : public ULoadingScreenGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> LocalWhitelistIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> LocalOwnerIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> LocalAdminIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPlayerBan> LocalBannedIDs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestartServerEachGame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSeamlessTravel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnyoneUseAdminCam;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamAPIKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseServerPassword;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerPassword;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxGameBans;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxVACBans;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDaysSinceLastBan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDenyVACBan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDenyGameBan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDenyCommunityBan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWhitelist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFriendsOnly;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLAN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Messages;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmptyServerRestartTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AFKTimer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAdvertise;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdminsAlwaysJoin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDevsAlwaysJoin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTreatDevsAsAdmin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString EncryptedPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSavedThisGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasModifiedAdmins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasModifiedWhitelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasModifiedConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasKickedFromServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText LastKickReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReturnedToMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText LastReturnToMainMenuReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsJoiningServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString JoinedServerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLostConnectionToServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText LastServerConnectionFailureReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastServerConnectionFailureString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ConnectionFailureReasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SteamAppId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ServerMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSelectedMap> IndividualMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MapCollectionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSelectedMap> FullMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSelectedMap> CurrentMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMapCollectionIndex;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeamDamageEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeamDamageReflection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFPSGameplayConfig GameplayConfig;
    
public:
    UPandemicGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WantsStandbyMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseSeamlessTravel() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateSession();
    
    UFUNCTION(BlueprintCallable)
    void SetUseServerPassword(bool bNewUseServerPasword, bool bUpdateSession);
    
    UFUNCTION(BlueprintCallable)
    void SetUseLan(bool bNewUseLAN);
    
    UFUNCTION(BlueprintCallable)
    void SetServerPassword(const FString& NewPassword);
    
    UFUNCTION(BlueprintCallable)
    void SetServerName(const FString& NewServerName, bool bUpdateSession);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxPlayerCount(int32 NewMaxPlayers, bool bUpdateSession);
    
    UFUNCTION(BlueprintCallable)
    void SetMapCollection(FName CollectionName);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFriendsOnly(bool bNewFriendsOnly, bool bUpdateSession);
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerReport(FPlayerReport Report);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveConfigs(bool bForceSave);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePlayerFromWhitelist(const FString& PlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveOwnerWithNetID(FUniqueNetIdRepl PlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveOwner(const FString& PlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBan(const FString& PlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAdminWithNetID(FUniqueNetIdRepl PlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAdmin(const FString& PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveNetworkFailure(ENetworkFailure::Type FailureType, const FString& ErrorString, bool bIsServer);
    
    UFUNCTION(BlueprintCallable)
    void ParseMapRotation();
    
    UFUNCTION(BlueprintCallable)
    void MapCollectionsLoaded();
    
    UFUNCTION(BlueprintCallable)
    void LoadServerMapData();
    
    UFUNCTION(BlueprintCallable)
    void LoadServerConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadConfigs();
    
    UFUNCTION(BlueprintCallable)
    void LoadBansSoft();
    
    UFUNCTION(BlueprintCallable)
    void LoadBans();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingMapCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamDamageEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectedMapInAnyCollection(FName Map, int32& CollectionIndex, bool bLinearOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerOwner(const FString& PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerOnWhitelist(const FString& PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerDev(const FString& PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerBanned(const FString& PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerAdmin(const FString& PlayerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapInCollection(FName Map, int32 CollectionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoiningServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFriendsOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWasKickedFromServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseWhitelist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseServerPassword() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseLAN() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeamDamageReflection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSteamAppID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSteamAPIKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldAdvertise() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetServerPassword() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetServerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRestartServerEachGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxVACBans() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPlayerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxGameBans() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetMapDataName(FPrimaryAssetId MapDataAssetID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLostConnectionToServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FString> GetLocalWhitelistIDs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FString> GetLocalOwnerIDs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FPlayerBan> GetLocalBannedIDs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FString> GetLocalAdminIDs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLevelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLastServerConnectionFailureReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLastKickReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetJoinedServerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasSavedThisGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasModifiedWhitelist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasModifiedConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasModifiedAdmins() const;
    
    UFUNCTION(BlueprintCallable)
    void GetGameState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFPSGameplayConfig GetGameplayConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEncryptedPassword() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEmptyServerRestartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDevsAlwaysJoin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDenyVACBan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDenyGameBan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TSoftObjectPtr<UMapData>> GetCustomMapList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetConfigFileName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCollectionName(FPrimaryAssetId MapCollectionAssetID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnyoneUseAdminCam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAFKTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdminsAlwaysJoin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSimpleObjectiveData> GetActiveObjectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitStandby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterStandby(bool bUseStandbyMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EncryptString(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    void CreateSession();
    
    UFUNCTION(BlueprintCallable)
    void ClearActiveObjectives();
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerToWhitelist(const FString& PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void AddOwnerWithNetID(FUniqueNetIdRepl PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void AddOwner(const FString& PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void AddBan(const FString& PlayerID, FPlayerBan Ban);
    
    UFUNCTION(BlueprintCallable)
    void AddAdminWithNetID(FUniqueNetIdRepl PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void AddAdmin(const FString& PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void AddActiveObjective(const FSimpleObjectiveData& Data);
    
};

