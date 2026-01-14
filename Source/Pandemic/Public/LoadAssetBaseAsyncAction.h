#pragma once
#include "CoreMinimal.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "LoadAssetBaseAsyncAction.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API ULoadAssetBaseAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    ULoadAssetBaseAsyncAction();

protected:
    UFUNCTION(BlueprintCallable)
    void AssetsLoaded();
    
};

