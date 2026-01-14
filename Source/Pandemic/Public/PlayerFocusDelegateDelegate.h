#pragma once
#include "CoreMinimal.h"
#include "PlayerFocusDelegateDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerFocusDelegate, APlayerController*, Controller);

