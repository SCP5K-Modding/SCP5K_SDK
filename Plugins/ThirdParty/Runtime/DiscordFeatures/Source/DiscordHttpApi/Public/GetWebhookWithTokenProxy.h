#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnGetWebhookDelegate.h"
#include "GetWebhookWithTokenProxy.generated.h"

class UGetWebhookWithTokenProxy;

UCLASS(Blueprintable)
class UGetWebhookWithTokenProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetWebhook OnWebhookReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetWebhook OnError;
    
    UGetWebhookWithTokenProxy();

    UFUNCTION(BlueprintCallable)
    static UGetWebhookWithTokenProxy* GetWebhookWithToken(const int64 WebhookId, const FString& Token);
    
};

