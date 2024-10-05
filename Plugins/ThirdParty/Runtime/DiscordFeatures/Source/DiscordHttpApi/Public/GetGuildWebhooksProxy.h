#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnGetWebhooksDelegate.h"
#include "GetGuildWebhooksProxy.generated.h"

class UGetGuildWebhooksProxy;

UCLASS(Blueprintable)
class UGetGuildWebhooksProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetWebhooks OnWebhooksReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetWebhooks OnError;
    
    UGetGuildWebhooksProxy();

    UFUNCTION(BlueprintCallable)
    static UGetGuildWebhooksProxy* GetGuildWebhooks(const int64 GuildId);
    
};

