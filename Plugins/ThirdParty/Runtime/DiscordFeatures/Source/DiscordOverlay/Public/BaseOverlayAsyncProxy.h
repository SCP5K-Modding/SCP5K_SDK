#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OverlayResultDelegate.h"
#include "BaseOverlayAsyncProxy.generated.h"

class UDiscordOverlayManager;

UCLASS(Abstract, Blueprintable)
class UBaseOverlayAsyncProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlayResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlayResult OnError;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordOverlayManager* Manager;
    
public:
    UBaseOverlayAsyncProxy();

};

