#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseLobbyAsyncProxy.h"
#include "DiscordLobby.h"
#include "DiscordLobbyTransaction.h"
#include "LobbyEventDelegate.h"
#include "CreateLobbyProxy.generated.h"

class UCreateLobbyProxy;
class UDiscordLobbyManager;

UCLASS(Blueprintable)
class UCreateLobbyProxy : public UBaseLobbyAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyEvent OnLobbyCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyEvent OnError;
    
    UCreateLobbyProxy();

private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result, FDiscordLobby& Lobby);
    
public:
    UFUNCTION(BlueprintCallable)
    static UCreateLobbyProxy* CreateLobby(UDiscordLobbyManager* LobbyManager, const FDiscordLobbyTransaction& Transaction);
    
};

