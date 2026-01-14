#pragma once
#include "CoreMinimal.h"
#include "LoadAssetBaseAsyncAction.h"
#include "OnClassesLoadedDelegateDelegate.h"
#include "LoadClassesAsyncAction.generated.h"

class ULoadClassesAsyncAction;

UCLASS(Blueprintable)
class ULoadClassesAsyncAction : public ULoadAssetBaseAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClassesLoadedDelegate OnClassesLoaded;
    
    ULoadClassesAsyncAction();

    UFUNCTION(BlueprintCallable)
    static ULoadClassesAsyncAction* LoadClassListAsync(const TArray<TSoftClassPtr<UObject>>& InClassList);
    
};

