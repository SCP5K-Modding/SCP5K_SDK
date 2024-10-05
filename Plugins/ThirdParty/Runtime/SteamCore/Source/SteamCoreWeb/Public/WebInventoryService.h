#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebInventoryService.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebInventoryService : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebInventoryService();

    UFUNCTION(BlueprintCallable)
    void ModifyItems(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& inputJson, const FString& SteamID, int32 Timestamp, const FString& updates);
    
    UFUNCTION(BlueprintCallable)
    void GetQuantity(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> itemdefIDs, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void GetPriceSheet(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 Currency);
    
    UFUNCTION(BlueprintCallable)
    void GetItemDefs(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& modifiedSince, TArray<int32> itemdefIDs, TArray<int32> workshopIDs, int32 cacheMaxAgeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void GetInventory(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void ExchangeItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> materialsItemID, TArray<int32> materialsQuantity, const FString& outputItemdefID);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& ItemId, const FString& Quantity, const FString& SteamID, const FString& RequestID);
    
    UFUNCTION(BlueprintCallable)
    void Consolidate(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> itemdefIDs, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void AddPromoItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 itemdefID, const FString& itemPropsJson, const FString& SteamID, bool bNotify, const FString& RequestID);
    
    UFUNCTION(BlueprintCallable)
    void AddItem(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, TArray<int32> itemdefID, const FString& itemPropsJson, const FString& SteamID, bool bNotify, const FString& RequestID, bool bTradeRestriction);
    
};

