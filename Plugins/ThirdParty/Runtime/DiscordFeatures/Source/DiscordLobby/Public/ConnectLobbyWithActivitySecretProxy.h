#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseLobbyAsyncProxy.h"
#include "DiscordLobby.h"
#include "LobbyEventDelegate.h"
#include "ConnectLobbyWithActivitySecretProxy.generated.h"

class UConnectLobbyWithActivitySecretProxy;
class UDiscordLobbyManager;

UCLASS(Blueprintable)
class UConnectLobbyWithActivitySecretProxy : public UBaseLobbyAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyEvent OnLobbyConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyEvent OnError;
    
    UConnectLobbyWithActivitySecretProxy();

private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result, FDiscordLobby& Lobby);
    
public:
    UFUNCTION(BlueprintCallable)
    static UConnectLobbyWithActivitySecretProxy* ConnectLobbyWithActivitySecret(UDiscordLobbyManager* LobbyManager, const FString& ActivitySecret);
    
};

