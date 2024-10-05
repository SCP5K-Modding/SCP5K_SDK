#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseLobbyAsyncProxy.h"
#include "DiscordLobbyResultEventDelegate.h"
#include "DiscordLobbySearchQuery.h"
#include "SearchLobbyProxy.generated.h"

class UDiscordLobbyManager;
class USearchLobbyProxy;

UCLASS(Blueprintable)
class USearchLobbyProxy : public UBaseLobbyAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordLobbyResultEvent OnError;
    
    USearchLobbyProxy();

    UFUNCTION(BlueprintCallable)
    static USearchLobbyProxy* Search(UDiscordLobbyManager* LobbyManager, const FDiscordLobbySearchQuery& SearchQuery);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result);
    
};

