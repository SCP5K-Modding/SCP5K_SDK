#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseLobbyAsyncProxy.h"
#include "DiscordLobbyResultEventDelegate.h"
#include "ConnectVoiceProxy.generated.h"

class UConnectVoiceProxy;
class UDiscordLobbyManager;

UCLASS(Blueprintable)
class UConnectVoiceProxy : public UBaseLobbyAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnError;
    
    UConnectVoiceProxy();

private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UConnectVoiceProxy* ConnectVoice(UDiscordLobbyManager* LobbyManager, const int64 LobbyId);
    
};

