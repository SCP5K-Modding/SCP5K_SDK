#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseLobbyAsyncProxy.h"
#include "DiscordLobbyResultEventDelegate.h"
#include "DisconnectVoiceProxy.generated.h"

class UDisconnectVoiceProxy;
class UDiscordLobbyManager;

UCLASS(Blueprintable)
class UDisconnectVoiceProxy : public UBaseLobbyAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnError;
    
    UDisconnectVoiceProxy();

private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UDisconnectVoiceProxy* DisconnectVoice(UDiscordLobbyManager* LobbyManager, const int64 LobbyId);
    
};

