#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseActivityAsyncProxy.h"
#include "DiscordCallbackEventDelegate.h"
#include "AcceptInvite.generated.h"

class UAcceptInvite;
class UDiscordActivityManager;

UCLASS(Blueprintable)
class UAcceptInvite : public UBaseActivityAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordCallbackEvent OnInviteAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordCallbackEvent OnError;
    
    UAcceptInvite();

private:
    UFUNCTION(BlueprintCallable)
    void OnInviteAcceptedInternal(EDiscordResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAcceptInvite* AcceptInvite(UDiscordActivityManager* ActivityManager, const int64& UserId);
    
};

