#include "WebMicroTxn.h"

UWebMicroTxn::UWebMicroTxn() {
}

void UWebMicroTxn::RefundTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderId, int32 AppID) {
}

void UWebMicroTxn::QueryTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& OrderId, const FString& transID) {
}

void UWebMicroTxn::ProcessAgreement(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderId, const FString& SteamID, const FString& agreementID, int32 AppID, int32 Amount, const FString& Currency) {
}

FString UWebMicroTxn::MakeTransactionID() {
    return TEXT("");
}

void UWebMicroTxn::InitTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderId, const FString& SteamID, int32 AppID, const FString& Language, const FString& Currency, const FString& userSession, const FString& ipaddress, TArray<int32> ItemId, TArray<int32> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32> associatedBundle, TArray<FString> billingType, TArray<FString> startDate, TArray<FString> endDate, TArray<FString> Period, TArray<int32> Frequency, TArray<FString> recurringAmt, TArray<int32> bundleCount, TArray<int32> bundleID, TArray<int32> bundleQty, TArray<FString> bundleDesc, TArray<FString> bundleCategory) {
}

void UWebMicroTxn::GetUserInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 ipaddress) {
}

void UWebMicroTxn::GetUserAgreementInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID) {
}

void UWebMicroTxn::GetReport(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Time, const FString& Type, int32 MaxResults) {
}

void UWebMicroTxn::FinalizeTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderId, int32 AppID) {
}

void UWebMicroTxn::CancelAgreement(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& agreementID, int32 AppID) {
}

void UWebMicroTxn::AdjustAgreement(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& agreementID, int32 AppID, const FString& nextProcessDate) {
}


