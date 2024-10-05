#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseLobbyAsyncProxy.h"
#include "DiscordLobbyResultEventDelegate.h"
#include "SendLobbyMessageProxy.generated.h"

class UDiscordLobbyManager;
class USendLobbyMessageProxy;

UCLASS(Blueprintable)
class USendLobbyMessageProxy : public UBaseLobbyAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnError;
    
    USendLobbyMessageProxy();

    UFUNCTION(BlueprintCallable)
    static USendLobbyMessageProxy* SendLobbyMessage(UDiscordLobbyManager* LobbyManager, const int64 LobbyId, const TArray<uint8>& Data);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result);
    
};

