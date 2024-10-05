#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseLobbyAsyncProxy.h"
#include "DiscordLobbyMemberTransaction.h"
#include "DiscordLobbyResultEventDelegate.h"
#include "UpdateMemberLobbyProxy.generated.h"

class UDiscordLobbyManager;
class UUpdateMemberLobbyProxy;

UCLASS(Blueprintable)
class UUpdateMemberLobbyProxy : public UBaseLobbyAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnError;
    
    UUpdateMemberLobbyProxy();

    UFUNCTION(BlueprintCallable)
    static UUpdateMemberLobbyProxy* UpdateMember(UDiscordLobbyManager* LobbyManager, const int64 LobbyId, const int64 UserId, const FDiscordLobbyMemberTransaction& Transaction);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result);
    
};

