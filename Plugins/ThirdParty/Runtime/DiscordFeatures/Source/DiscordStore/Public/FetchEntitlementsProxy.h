#pragma once
#include "CoreMinimal.h"
#include "BaseStoreAsyncProxy.h"
#include "FetchEntitlementsProxy.generated.h"

class UDiscordStoreManager;
class UFetchEntitlementsProxy;

UCLASS(Blueprintable)
class UFetchEntitlementsProxy : public UBaseStoreAsyncProxy {
    GENERATED_BODY()
public:
    UFetchEntitlementsProxy();

    UFUNCTION(BlueprintCallable)
    static UFetchEntitlementsProxy* FetchEntitlements(UDiscordStoreManager* StoreManager);
    
};

