#pragma once
#include "CoreMinimal.h"
#include "EDiscordActivityActionType.h"
#include "EDiscordResult.h"
#include "BaseActivityAsyncProxy.h"
#include "DiscordCallbackEventDelegate.h"
#include "SendInviteProxy.generated.h"

class UDiscordActivityManager;
class USendInviteProxy;

UCLASS(Blueprintable)
class USendInviteProxy : public UBaseActivityAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordCallbackEvent OnInviteSent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordCallbackEvent OnError;
    
    USendInviteProxy();

    UFUNCTION(BlueprintCallable)
    static USendInviteProxy* SendInvite(UDiscordActivityManager* ActivityManager, const int64& UserId, const EDiscordActivityActionType Action, const FString& Content);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInviteSentInternal(EDiscordResult Result);
    
};

