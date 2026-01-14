#pragma once
#include "CoreMinimal.h"
#include "LoadAssetBaseAsyncAction.h"
#include "OnAssetsLoadedDelegateDelegate.h"
#include "LoadAssetsAsyncAction.generated.h"

class ULoadAssetsAsyncAction;
class UObject;

UCLASS(Blueprintable)
class ULoadAssetsAsyncAction : public ULoadAssetBaseAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAssetsLoadedDelegate OnAssetsLoaded;
    
    ULoadAssetsAsyncAction();

    UFUNCTION(BlueprintCallable)
    static ULoadAssetsAsyncAction* LoadAssetListAsync(const TArray<TSoftObjectPtr<UObject>>& InClassList);
    
};

