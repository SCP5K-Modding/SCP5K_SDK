#pragma once
#include "CoreMinimal.h"
#include "DiscordManager.h"
#include "EDiscordOperationBranching.h"
#include "EDiscordResult.h"
#include "Uint64.h"
#include "DiscordOnMessageDelegate.h"
#include "DiscordOnRouteUpdateDelegate.h"
#include "DiscordNetworkManager.generated.h"

class UDiscordCore;
class UDiscordNetworkManager;

UCLASS(Blueprintable)
class DISCORDNETWORK_API UDiscordNetworkManager : public UDiscordManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnMessage OnMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnRouteUpdate OnRouteUpdate;
    
    UDiscordNetworkManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordNetworkManager* GetNetworkManager(const UDiscordCore* DiscordCore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordResult Blueprint_UpdatePeer(const FUint64 PeerId, const FString& Route, EDiscordOperationBranching& Exec) const;
    
    UFUNCTION(BlueprintCallable)
    EDiscordResult Blueprint_SendMessage(const FUint64 PeerId, const uint8 ChannelId, TArray<uint8> Data, EDiscordOperationBranching& Exec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordResult Blueprint_OpenPeer(const FUint64 PeerId, const FString& Route, EDiscordOperationBranching& Exec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordResult Blueprint_OpenChannel(const FUint64 PeerId, const uint8 ChannelId, const bool bReliable, EDiscordOperationBranching& Exec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUint64 Blueprint_GetPeerId() const;
    
    UFUNCTION(BlueprintCallable)
    EDiscordResult Blueprint_ClosePeer(const FUint64 PeerId, EDiscordOperationBranching& Exec);
    
    UFUNCTION(BlueprintCallable)
    EDiscordResult Blueprint_CloseChannel(const FUint64 PeerId, const uint8 ChannelId, EDiscordOperationBranching& Exec);
    
};

