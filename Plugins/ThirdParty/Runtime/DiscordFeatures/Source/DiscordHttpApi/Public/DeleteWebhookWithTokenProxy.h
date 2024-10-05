#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DiscordWebhookEventDelegate.h"
#include "DeleteWebhookWithTokenProxy.generated.h"

class UDeleteWebhookWithTokenProxy;

UCLASS(Blueprintable)
class UDeleteWebhookWithTokenProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookEvent OnWebhookDeleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookEvent OnError;
    
    UDeleteWebhookWithTokenProxy();

    UFUNCTION(BlueprintCallable)
    static UDeleteWebhookWithTokenProxy* DeleteWebhookWithToken(const int64 WebhookId, const FString& Token);
    
};

