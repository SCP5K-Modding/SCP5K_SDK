#pragma once
#include "CoreMinimal.h"
#include "OnSteamInventoryRequestPricesResultAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamInventoryRequestPricesResult.h"
#include "SteamCoreInventoryAsyncActionRequestPricesResult.generated.h"

class UObject;
class USteamCoreInventoryAsyncActionRequestPricesResult;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreInventoryAsyncActionRequestPricesResult : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamInventoryRequestPricesResultAsyncDelegate OnCallback;
    
    USteamCoreInventoryAsyncActionRequestPricesResult();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreInventoryAsyncActionRequestPricesResult* RequestPricesAsync(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful);
    
};

