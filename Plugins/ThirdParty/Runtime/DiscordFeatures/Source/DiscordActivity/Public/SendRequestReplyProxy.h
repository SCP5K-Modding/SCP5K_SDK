#pragma once
#include "CoreMinimal.h"
#include "EDiscordActivityJoinRequestReply.h"
#include "EDiscordResult.h"
#include "BaseActivityAsyncProxy.h"
#include "DiscordCallbackEventDelegate.h"
#include "SendRequestReplyProxy.generated.h"

class UDiscordActivityManager;
class USendRequestReplyProxy;

UCLASS(Blueprintable)
class USendRequestReplyProxy : public UBaseActivityAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordCallbackEvent OnRequestReply;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordCallbackEvent OnError;
    
    USendRequestReplyProxy();

    UFUNCTION(BlueprintCallable)
    static USendRequestReplyProxy* SendRequestReply(UDiscordActivityManager* ActivityManager, const int64 UserId, const EDiscordActivityJoinRequestReply Reply);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRequestReplyInternal(EDiscordResult Result);
    
};

