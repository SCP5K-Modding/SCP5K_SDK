#pragma once
#include "CoreMinimal.h"
#include "DiscordActivity.h"
#include "EDiscordResult.h"
#include "BaseActivityAsyncProxy.h"
#include "DiscordCallbackEventDelegate.h"
#include "UpdateActivityProxy.generated.h"

class UDiscordActivityManager;
class UUpdateActivityProxy;

UCLASS(Blueprintable)
class UUpdateActivityProxy : public UBaseActivityAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordCallbackEvent OnActivityUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordCallbackEvent OnError;
    
    UUpdateActivityProxy();

    UFUNCTION(BlueprintCallable)
    static UUpdateActivityProxy* UpdateActivity(UDiscordActivityManager* ActivityManager, const FDiscordActivity& Activity);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActivityUpdatedInternal(EDiscordResult Result);
    
};

