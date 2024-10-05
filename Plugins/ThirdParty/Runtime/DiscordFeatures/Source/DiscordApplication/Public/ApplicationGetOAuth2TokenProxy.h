#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseApplicationAsyncProxy.h"
#include "DiscordOAuth2Token.h"
#include "DiscordOnOAuth2TokenReceivedDelegate.h"
#include "ApplicationGetOAuth2TokenProxy.generated.h"

class UApplicationGetOAuth2TokenProxy;
class UDiscordApplicationManager;

UCLASS(Blueprintable)
class UApplicationGetOAuth2TokenProxy : public UBaseApplicationAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnOAuth2TokenReceived OnOAuth2TokenReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnOAuth2TokenReceived OnError;
    
    UApplicationGetOAuth2TokenProxy();

private:
    UFUNCTION(BlueprintCallable)
    void OnOAuth2TokenReceivedInternal(EDiscordResult Result, const FDiscordOAuth2Token& Token);
    
public:
    UFUNCTION(BlueprintCallable)
    static UApplicationGetOAuth2TokenProxy* GetOAuth2Token(UDiscordApplicationManager* ApplicationManager);
    
};

