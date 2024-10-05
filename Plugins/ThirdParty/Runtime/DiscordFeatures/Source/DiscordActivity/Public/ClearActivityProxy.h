#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseActivityAsyncProxy.h"
#include "DiscordCallbackEventDelegate.h"
#include "ClearActivityProxy.generated.h"

class UClearActivityProxy;
class UDiscordActivityManager;

UCLASS(Blueprintable)
class UClearActivityProxy : public UBaseActivityAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordCallbackEvent OnActivityCleared;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordCallbackEvent OnError;
    
    UClearActivityProxy();

private:
    UFUNCTION(BlueprintCallable)
    void OnActivityClearedInternal(EDiscordResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UClearActivityProxy* ClearActivity(UDiscordActivityManager* ActivityManager);
    
};

