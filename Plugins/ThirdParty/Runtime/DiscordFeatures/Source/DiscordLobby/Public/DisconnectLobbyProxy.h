#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseLobbyAsyncProxy.h"
#include "DiscordLobbyResultEventDelegate.h"
#include "DisconnectLobbyProxy.generated.h"

class UDisconnectLobbyProxy;
class UDiscordLobbyManager;

UCLASS(Blueprintable)
class UDisconnectLobbyProxy : public UBaseLobbyAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnError;
    
    UDisconnectLobbyProxy();

private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UDisconnectLobbyProxy* DisconnectLobby(UDiscordLobbyManager* LobbyManager, const int64 LobbyId);
    
};

