#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseLobbyAsyncProxy.h"
#include "DiscordLobbyResultEventDelegate.h"
#include "DiscordLobbyTransaction.h"
#include "UpdateLobbyProxy.generated.h"

class UDiscordLobbyManager;
class UUpdateLobbyProxy;

UCLASS(Blueprintable)
class UUpdateLobbyProxy : public UBaseLobbyAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnError;
    
    UUpdateLobbyProxy();

    UFUNCTION(BlueprintCallable)
    static UUpdateLobbyProxy* UpdateLobby(UDiscordLobbyManager* LobbyManager, const int64 LobbyId, const FDiscordLobbyTransaction& Transaction);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result);
    
};

