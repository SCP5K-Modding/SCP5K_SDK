#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "DestroySessionCallbackProxyAdvanced.generated.h"

class APlayerController;
class UDestroySessionCallbackProxyAdvanced;
class UWorld;

UCLASS(Blueprintable)
class ADVANCEDSESSIONS_API UDestroySessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UDestroySessionCallbackProxyAdvanced();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDestroySessionCallbackProxyAdvanced* DestroySession(UWorld* WorldContextObject, APlayerController* PlayerController);
    
};

