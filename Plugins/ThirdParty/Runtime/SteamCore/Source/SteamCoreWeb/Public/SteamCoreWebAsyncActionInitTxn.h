#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionInitTxn.generated.h"

class UObject;
class USteamCoreWebAsyncActionInitTxn;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionInitTxn : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionInitTxn();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionInitTxn* InitTxnAsync(UObject* WorldContextObject, const FString& Key, const FString& OrderId, const FString& SteamID, int32 AppID, const FString& Language, const FString& Currency, const FString& userSession, const FString& ipaddress, TArray<int32> ItemId, TArray<int32> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32> associatedBundle, TArray<FString> billingType, TArray<FString> startDate, TArray<FString> endDate, TArray<FString> Period, TArray<int32> Frequency, TArray<FString> recurringAmt, TArray<int32> bundleCount, TArray<int32> bundleID, TArray<int32> bundleQty, TArray<FString> bundleDesc, TArray<FString> bundleCategory);
    
};

