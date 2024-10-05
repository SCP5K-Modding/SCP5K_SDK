#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebGameInventory.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebGameInventory : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebGameInventory();

    UFUNCTION(BlueprintCallable)
    void UpdateItemDefs();
    
    UFUNCTION(BlueprintCallable)
    void SupportGetAssetHistory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& AssetID, const FString& contextID);
    
    UFUNCTION(BlueprintCallable)
    void HistoryExecuteCommands(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& contextID, int32 ActorId);
    
    UFUNCTION(BlueprintCallable)
    void GetUserHistory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& contextID, int32 StartTime, int32 EndTime);
    
    UFUNCTION(BlueprintCallable)
    void GetHistoryCommandDetails(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& Command, const FString& contextID, const FString& arguments);
    
};

