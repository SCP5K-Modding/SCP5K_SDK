#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SessionPropertyKeyPair.h"
#include "UpdateSessionCallbackProxyAdvanced.generated.h"

class UObject;
class UUpdateSessionCallbackProxyAdvanced;

UCLASS(Blueprintable, MinimalAPI)
class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UUpdateSessionCallbackProxyAdvanced();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUpdateSessionCallbackProxyAdvanced* UpdateSession(UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);
    
};

