#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DiscordWebhookData.h"
#include "DiscordWebhookEventDelegate.h"
#include "ExecuteWebhookProxy.generated.h"

class UExecuteWebhookProxy;

UCLASS(Blueprintable)
class UExecuteWebhookProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookEvent OnWebhookExecuted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookEvent OnError;
    
    UExecuteWebhookProxy();

    UFUNCTION(BlueprintCallable)
    static UExecuteWebhookProxy* ExecuteWebhook(const int64 WebhookId, const FString& WebhookToken, const FDiscordWebhookData& WebhookData);
    
};

