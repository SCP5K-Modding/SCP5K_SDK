#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseLobbyAsyncProxy.h"
#include "DiscordLobby.h"
#include "LobbyEventDelegate.h"
#include "ConnectLobbyProxy.generated.h"

class UConnectLobbyProxy;
class UDiscordLobbyManager;

UCLASS(Blueprintable)
class UConnectLobbyProxy : public UBaseLobbyAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyEvent OnLobbyConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyEvent OnError;
    
    UConnectLobbyProxy();

private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result, FDiscordLobby& Lobby);
    
public:
    UFUNCTION(BlueprintCallable)
    static UConnectLobbyProxy* ConnectLobby(UDiscordLobbyManager* LobbyManager, const int64 LobbyId, const FString& LobbySecret);
    
};

