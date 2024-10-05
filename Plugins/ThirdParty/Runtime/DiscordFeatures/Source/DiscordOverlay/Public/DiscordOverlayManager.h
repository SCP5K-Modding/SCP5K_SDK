#pragma once
#include "CoreMinimal.h"
#include "DiscordManager.h"
#include "DiscordOverlayToggleEventDelegate.h"
#include "DiscordOverlayManager.generated.h"

class UDiscordCore;
class UDiscordOverlayManager;

UCLASS(Blueprintable)
class DISCORDOVERLAY_API UDiscordOverlayManager : public UDiscordManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOverlayToggleEvent OnOverlayToggle;
    
    UDiscordOverlayManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordOverlayManager* GetOverlayManager(UDiscordCore* DiscordCore);
    
};

