#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnGetWebhookDelegate.h"
#include "GetWebhookProxy.generated.h"

class UGetWebhookProxy;

UCLASS(Blueprintable)
class UGetWebhookProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetWebhook OnWebhookReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetWebhook OnError;
    
    UGetWebhookProxy();

    UFUNCTION(BlueprintCallable)
    static UGetWebhookProxy* GetWebhook(const int64 WebhookId);
    
};

