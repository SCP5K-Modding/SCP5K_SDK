#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "BaseApplicationAsyncProxy.h"
#include "DiscordOnTickerReceivedDelegate.h"
#include "ApplicationGetTicketProxy.generated.h"

class UApplicationGetTicketProxy;
class UDiscordApplicationManager;

UCLASS(Blueprintable)
class UApplicationGetTicketProxy : public UBaseApplicationAsyncProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnTickerReceived OnTicketReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnTickerReceived OnError;
    
    UApplicationGetTicketProxy();

private:
    UFUNCTION(BlueprintCallable)
    void OnResultInternal(EDiscordResult Result, const FString& Ticket);
    
public:
    UFUNCTION(BlueprintCallable)
    static UApplicationGetTicketProxy* GetTicket(UDiscordApplicationManager* ApplicationManager);
    
};

