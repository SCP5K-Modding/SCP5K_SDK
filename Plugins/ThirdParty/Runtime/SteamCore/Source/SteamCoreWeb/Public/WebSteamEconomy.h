#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebSteamEconomy.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebSteamEconomy : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebSteamEconomy();

    UFUNCTION(BlueprintCallable)
    void StartTrade(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& steamID1, const FString& steamID2);
    
    UFUNCTION(BlueprintCallable)
    void StartAssetTransaction(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& AssetID, int32 assetQuantity, const FString& Currency, const FString& Language, const FString& ipaddress, const FString& referer, bool bClientAuth);
    
    UFUNCTION(BlueprintCallable)
    void GetMarketPrices(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetExportedAssetsForUser(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& contextID);
    
    UFUNCTION(BlueprintCallable)
    void GetAssetPrices(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Currency, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetAssetClassInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Language, int32 classCount, const FString& classID, const FString& InstanceId);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeAssetTransaction(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& txnID, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void CanTrade(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& TargetId);
    
};

