#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordGatewayIdentifyProperties.h"
#include "DiscordGatewayShard.h"
#include "DiscordGatewayStatusUpdate.h"
#include "EDiscordGatewayIntents.h"
#include "DiscordGatewaySocket.generated.h"

UCLASS(Blueprintable)
class DISCORDGATEWAY_API UDiscordGatewaySocket : public UObject {
    GENERATED_BODY()
public:
    UDiscordGatewaySocket();

    UFUNCTION(BlueprintCallable)
    void SendRaw(const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    void SendIdentifyCommand(const FString& Token, const FDiscordGatewayIdentifyProperties& Properties, const FDiscordGatewayShard& Shard, const FDiscordGatewayStatusUpdate& Presence, const TArray<EDiscordGatewayIntents>& Intents, const int32 LargeThreshold, const bool bGuildSubscriptions);
    
    UFUNCTION(BlueprintCallable)
    void SendCommand(const int32 Op, const FString& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseConnection();
    
};

