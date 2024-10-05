#pragma once
#include "CoreMinimal.h"
#include "BaseStoreAsyncProxy.h"
#include "FetchSkusProxy.generated.h"

class UDiscordStoreManager;
class UFetchSkusProxy;

UCLASS(Blueprintable)
class UFetchSkusProxy : public UBaseStoreAsyncProxy {
    GENERATED_BODY()
public:
    UFetchSkusProxy();

    UFUNCTION(BlueprintCallable)
    static UFetchSkusProxy* FetchSkus(UDiscordStoreManager* StoreManager);
    
};

