#pragma once
#include "CoreMinimal.h"
#include "DiscordManager.h"
#include "DiscordUser.h"
#include "DiscordLobby.h"
#include "DiscordLobbyDeleteEventDelegate.h"
#include "DiscordLobbyMemberEventDelegate.h"
#include "DiscordLobbyMemberTransaction.h"
#include "DiscordLobbyMessageEventDelegate.h"
#include "DiscordLobbyNetworkMessageEventDelegate.h"
#include "DiscordLobbySearchQuery.h"
#include "DiscordLobbySpeakingEventDelegate.h"
#include "DiscordLobbyTransaction.h"
#include "DiscordLobbyUpdateEventDelegate.h"
#include "DiscordLobbyManager.generated.h"

class UDiscordCore;
class UDiscordLobbyManager;

UCLASS(Blueprintable)
class DISCORDLOBBY_API UDiscordLobbyManager : public UDiscordManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyUpdateEvent OnLobbyUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyDeleteEvent OnLobbyDelete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyMemberEvent OnMemberConnect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyMemberEvent OnMemberUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyMemberEvent OnMemberDisconnect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyMessageEvent OnLobbyMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbySpeakingEvent OnSpeaking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyNetworkMessageEvent OnNetworkMessage;
    
    UDiscordLobbyManager();

    UFUNCTION(BlueprintCallable)
    void SendNetworkMessage(const int64 LobbyId, const int64 UserId, const uint8 ChannelId, UPARAM(Ref) TArray<uint8>& Data);
    
    UFUNCTION(BlueprintCallable)
    void OpenNetworkChannel(const int64 LobbyId, const uint8 ChannelId, const bool bReliable);
    
    UFUNCTION(BlueprintPure)
    int32 MemberMetadataCount(const int64 LobbyId, const int64 UserId);
    
    UFUNCTION(BlueprintPure)
    int32 MemberCount(const int64 LobbyId);
    
    UFUNCTION(BlueprintPure)
    int32 LobbyMetadataCount(const int64 LobbyId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 LobbyCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordLobbySearchQuery GetSearchQuery();
    
    UFUNCTION(BlueprintPure)
    int64 GetMemberUserId(const int64 LobbyId, const int32 Index);
    
    UFUNCTION(BlueprintPure)
    FDiscordUser GetMemberUser(const int64 LobbyId, const int64 UserId);
    
    UFUNCTION(BlueprintPure)
    FDiscordLobbyMemberTransaction GetMemberUpdateTransaction(const int64 LobbyId, const int64 MemberId);
    
    UFUNCTION(BlueprintPure)
    FString GetMemberMetadataValue(const int64 LobbyId, const int64 UserId, const FString& Key);
    
    UFUNCTION(BlueprintPure)
    FString GetMemberMetadataKey(const int64 LobbyId, const int64 UserId, const int32 Index);
    
    UFUNCTION(BlueprintPure)
    FDiscordLobbyTransaction GetLobbyUpdateTransaction(const int64 LobbyId);
    
    UFUNCTION(BlueprintPure)
    FString GetLobbyMetadataValue(const int64 LobbyId, const FString& Key);
    
    UFUNCTION(BlueprintPure)
    FString GetLobbyMetadataKey(const int64 LobbyId, const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordLobbyManager* GetLobbyManager(UDiscordCore* DiscordCore);
    
    UFUNCTION(BlueprintPure)
    int64 GetLobbyId(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordLobbyTransaction GetLobbyCreateTransaction();
    
    UFUNCTION(BlueprintPure)
    FString GetLobbyActivitySecret(const int64 LobbyId);
    
    UFUNCTION(BlueprintPure)
    FDiscordLobby GetLobby(const int64 LobbyId);
    
    UFUNCTION(BlueprintCallable)
    void FlushNetwork();
    
    UFUNCTION(BlueprintCallable)
    void DisconnectNetwork(const int64 LobbyId);
    
    UFUNCTION(BlueprintCallable)
    void ConnectNetwork(const int64 LobbyId);
    
};

