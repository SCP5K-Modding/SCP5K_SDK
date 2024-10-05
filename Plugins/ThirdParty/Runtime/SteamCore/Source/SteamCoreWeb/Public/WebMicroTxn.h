#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebMicroTxn.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebMicroTxn : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebMicroTxn();

    UFUNCTION(BlueprintCallable)
    void RefundTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderId, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void QueryTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& OrderId, const FString& transID);
    
    UFUNCTION(BlueprintCallable)
    void ProcessAgreement(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderId, const FString& SteamID, const FString& agreementID, int32 AppID, int32 Amount, const FString& Currency);
    
    UFUNCTION(BlueprintCallable)
    static FString MakeTransactionID();
    
    UFUNCTION(BlueprintCallable)
    void InitTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderId, const FString& SteamID, int32 AppID, const FString& Language, const FString& Currency, const FString& userSession, const FString& ipaddress, TArray<int32> ItemId, TArray<int32> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32> associatedBundle, TArray<FString> billingType, TArray<FString> startDate, TArray<FString> endDate, TArray<FString> Period, TArray<int32> Frequency, TArray<FString> recurringAmt, TArray<int32> bundleCount, TArray<int32> bundleID, TArray<int32> bundleQty, TArray<FString> bundleDesc, TArray<FString> bundleCategory);
    
    UFUNCTION(BlueprintCallable)
    void GetUserInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 ipaddress);
    
    UFUNCTION(BlueprintCallable)
    void GetUserAgreementInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetReport(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Time, const FString& Type, int32 MaxResults);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderId, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void CancelAgreement(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& agreementID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void AdjustAgreement(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& agreementID, int32 AppID, const FString& nextProcessDate);
    
};

