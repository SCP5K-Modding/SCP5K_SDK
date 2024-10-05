#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnGetWebhooksDelegate.h"
#include "GetChannelWebhooksProxy.generated.h"

class UGetChannelWebhooksProxy;

UCLASS(Blueprintable)
class UGetChannelWebhooksProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetWebhooks OnWebhooksReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetWebhooks OnError;
    
    UGetChannelWebhooksProxy();

    UFUNCTION(BlueprintCallable)
    static UGetChannelWebhooksProxy* GetChannelWebhooks(const int64 ChannelId);
    
};

