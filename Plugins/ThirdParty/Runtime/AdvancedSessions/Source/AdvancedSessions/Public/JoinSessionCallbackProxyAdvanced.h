#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "JoinSessionCallbackProxyAdvanced.generated.h"

class APlayerController;
class UJoinSessionCallbackProxyAdvanced;
class UWorld;

UCLASS(Blueprintable)
class ADVANCEDSESSIONS_API UJoinSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UJoinSessionCallbackProxyAdvanced();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UJoinSessionCallbackProxyAdvanced* JoinSession(UWorld* WorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult);
    
};

