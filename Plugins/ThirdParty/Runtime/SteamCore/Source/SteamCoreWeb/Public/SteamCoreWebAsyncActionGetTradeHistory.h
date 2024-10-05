#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetTradeHistory.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetTradeHistory;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetTradeHistory : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetTradeHistory();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetTradeHistory* GetTradeHistoryAsync(UObject* WorldContextObject, const FString& Key, int32 maxTrades, int32 startAfterTime, const FString& startAfterTradeID, bool bNavigatingBack, bool bGetDescriptions, const FString& Language, bool bIncludeFailed, bool bIncludeTotal);
    
};

