#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DiscordWebhookEventDelegate.h"
#include "DeleteWebhookProxy.generated.h"

class UDeleteWebhookProxy;

UCLASS(Blueprintable)
class UDeleteWebhookProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookEvent OnWebhookDeleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookEvent OnError;
    
    UDeleteWebhookProxy();

    UFUNCTION(BlueprintCallable)
    static UDeleteWebhookProxy* DeleteWebhook(const int64 WebhookId);
    
};

