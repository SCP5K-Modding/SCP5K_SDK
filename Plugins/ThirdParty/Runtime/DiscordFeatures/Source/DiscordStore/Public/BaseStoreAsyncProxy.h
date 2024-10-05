#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnStoreResultEventDelegate.h"
#include "BaseStoreAsyncProxy.generated.h"

class UDiscordStoreManager;

UCLASS(Abstract, Blueprintable)
class UBaseStoreAsyncProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStoreResultEvent OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStoreResultEvent OnError;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordStoreManager* Manager;
    
public:
    UBaseStoreAsyncProxy();

};

