#pragma once
#include "CoreMinimal.h"
#include "BaseOverlayAsyncProxy.h"
#include "OpenVoiceSettingsProxy.generated.h"

class UDiscordOverlayManager;
class UOpenVoiceSettingsProxy;

UCLASS(Blueprintable)
class UOpenVoiceSettingsProxy : public UBaseOverlayAsyncProxy {
    GENERATED_BODY()
public:
    UOpenVoiceSettingsProxy();

    UFUNCTION(BlueprintCallable)
    static UOpenVoiceSettingsProxy* OpenVoiceSettings(UDiscordOverlayManager* OverlayManager);
    
};

