#pragma once
#include "CoreMinimal.h"
#include "BaseStoreAsyncProxy.h"
#include "StartPurchaseProxy.generated.h"

class UDiscordStoreManager;
class UStartPurchaseProxy;

UCLASS(Blueprintable)
class UStartPurchaseProxy : public UBaseStoreAsyncProxy {
    GENERATED_BODY()
public:
    UStartPurchaseProxy();

    UFUNCTION(BlueprintCallable)
    static UStartPurchaseProxy* StartPurchase(UDiscordStoreManager* StoreManager, const int64 SkuId);
    
};

