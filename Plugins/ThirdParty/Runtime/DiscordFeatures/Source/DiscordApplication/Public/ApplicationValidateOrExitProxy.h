#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseApplicationAsyncProxy.h"
#include "DiscordOnValidateOrExitDelegate.h"
#include "ApplicationValidateOrExitProxy.generated.h"

class UApplicationValidateOrExitProxy;
class UDiscordApplicationManager;

UCLASS(Blueprintable)
class UApplicationValidateOrExitProxy : public UBaseApplicationAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnValidateOrExit OnValidated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnValidateOrExit OnExit;
    
    UApplicationValidateOrExitProxy();

    UFUNCTION(BlueprintCallable)
    static UApplicationValidateOrExitProxy* ValidateOrExit(UDiscordApplicationManager* ApplicationManager);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResultInternal(EDiscordResult Result);
    
};

