#pragma once
#include "CoreMinimal.h"
#include "EDiscordActivityActionType.h"
#include "BaseOverlayAsyncProxy.h"
#include "OpenActivityInviteProxy.generated.h"

class UDiscordOverlayManager;
class UOpenActivityInviteProxy;

UCLASS(Blueprintable)
class UOpenActivityInviteProxy : public UBaseOverlayAsyncProxy {
    GENERATED_BODY()
public:
    UOpenActivityInviteProxy();

    UFUNCTION(BlueprintCallable)
    static UOpenActivityInviteProxy* OpenActivityInvite(UDiscordOverlayManager* OverlayManager, const EDiscordActivityActionType Type);
    
};

