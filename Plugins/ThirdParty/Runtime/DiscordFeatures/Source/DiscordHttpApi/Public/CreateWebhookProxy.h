#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnWebhookCreatedDelegate.h"
#include "CreateWebhookProxy.generated.h"

class UCreateWebhookProxy;

UCLASS(Blueprintable)
class UCreateWebhookProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWebhookCreated OnWebhookCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWebhookCreated OnError;
    
    UCreateWebhookProxy();

    UFUNCTION(BlueprintCallable)
    static UCreateWebhookProxy* CreateWebhook(const FString& Name, const FString& ImageData, const int64 ChannelId);
    
};

