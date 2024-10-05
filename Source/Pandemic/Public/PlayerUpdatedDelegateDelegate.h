#pragma once
#include "CoreMinimal.h"
#include "PlayerUpdatedDelegateDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerUpdatedDelegate, APlayerState*, Player);

