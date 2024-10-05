#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DiscordGatewaySocketEventDelegate.h"
#include "ConnectToDiscordGatewayProxy.generated.h"

class UConnectToDiscordGatewayProxy;
class UDiscordGatewaySocket;

UCLASS(Blueprintable)
class UConnectToDiscordGatewayProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordGatewaySocketEvent SocketReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordGatewaySocketEvent ConnectionError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordGatewaySocketEvent ConnectionClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordGatewaySocketEvent InvalidSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordGatewaySocketEvent OnMessage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordGatewaySocket* Socket;
    
public:
    UConnectToDiscordGatewayProxy();

    UFUNCTION(BlueprintCallable)
    static UConnectToDiscordGatewayProxy* ConnectToDiscordGateway(const int32 GatewayVersion);
    
};

