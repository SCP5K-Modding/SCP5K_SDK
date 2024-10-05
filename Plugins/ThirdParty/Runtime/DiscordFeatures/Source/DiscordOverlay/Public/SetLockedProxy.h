#pragma once
#include "CoreMinimal.h"
#include "BaseOverlayAsyncProxy.h"
#include "SetLockedProxy.generated.h"

class UDiscordOverlayManager;
class USetLockedProxy;

UCLASS(Blueprintable)
class USetLockedProxy : public UBaseOverlayAsyncProxy {
    GENERATED_BODY()
public:
    USetLockedProxy();

    UFUNCTION(BlueprintCallable)
    static USetLockedProxy* SetLocked(UDiscordOverlayManager* OverlayManager, const bool bLocked);
    
};

