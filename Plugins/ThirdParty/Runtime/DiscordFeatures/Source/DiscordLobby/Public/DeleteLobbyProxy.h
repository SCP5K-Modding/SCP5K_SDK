#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseLobbyAsyncProxy.h"
#include "DiscordLobbyResultEventDelegate.h"
#include "DeleteLobbyProxy.generated.h"

class UDeleteLobbyProxy;
class UDiscordLobbyManager;

UCLASS(Blueprintable)
class UDeleteLobbyProxy : public UBaseLobbyAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnError;
    
    UDeleteLobbyProxy();

private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UDeleteLobbyProxy* DeleteLobby(UDiscordLobbyManager* LobbyManager, const int64 LobbyId);
    
};

