#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DiscordResultEventDelegate.h"
#include "BaseAchievementAsyncProxy.generated.h"

class UDiscordAchievementManager;

UCLASS(Abstract, Blueprintable)
class UBaseAchievementAsyncProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordResultEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordResultEvent OnError;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordAchievementManager* Manager;
    
public:
    UBaseAchievementAsyncProxy();

protected:
    UFUNCTION(BlueprintCallable)
    void OnResult(EDiscordResult Result);
    
};

