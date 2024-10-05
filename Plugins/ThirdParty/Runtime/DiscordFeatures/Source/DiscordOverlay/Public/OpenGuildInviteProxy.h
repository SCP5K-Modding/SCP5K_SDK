#pragma once
#include "CoreMinimal.h"
#include "BaseOverlayAsyncProxy.h"
#include "OpenGuildInviteProxy.generated.h"

class UDiscordOverlayManager;
class UOpenGuildInviteProxy;

UCLASS(Blueprintable)
class UOpenGuildInviteProxy : public UBaseOverlayAsyncProxy {
    GENERATED_BODY()
public:
    UOpenGuildInviteProxy();

    UFUNCTION(BlueprintCallable)
    static UOpenGuildInviteProxy* OpenGuildInvite(UDiscordOverlayManager* OverlayManager, const FString& Code);
    
};

