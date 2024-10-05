#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnGetWebhookDelegate.h"
#include "ModifyWebhookWithTokenProxy.generated.h"

class UModifyWebhookWithTokenProxy;

UCLASS(Blueprintable)
class UModifyWebhookWithTokenProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetWebhook OnWebhooksModified;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetWebhook OnError;
    
    UModifyWebhookWithTokenProxy();

    UFUNCTION(BlueprintCallable)
    static UModifyWebhookWithTokenProxy* ModifyWebhookWithToken(const int64 WebhookId, const FString& Token, const FString& NewName, const FString& NewAvatar, const int64 NewChannelId);
    
};

