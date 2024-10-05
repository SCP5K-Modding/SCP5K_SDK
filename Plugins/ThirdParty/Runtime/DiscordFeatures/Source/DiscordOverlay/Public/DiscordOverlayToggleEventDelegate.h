#pragma once
#include "CoreMinimal.h"
#include "DiscordOverlayToggleEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordOverlayToggleEvent, const bool, bLocked);

