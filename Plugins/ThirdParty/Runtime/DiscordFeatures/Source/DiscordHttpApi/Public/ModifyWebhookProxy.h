#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnGetWebhookDelegate.h"
#include "ModifyWebhookProxy.generated.h"

class UModifyWebhookProxy;

UCLASS(Blueprintable)
class UModifyWebhookProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetWebhook OnWebhooksModified;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetWebhook OnError;
    
    UModifyWebhookProxy();

    UFUNCTION(BlueprintCallable)
    static UModifyWebhookProxy* ModifyWebhook(const int64 WebhookId, const FString& NewName, const FString& NewAvatar, const int64 NewChannelId);
    
};

