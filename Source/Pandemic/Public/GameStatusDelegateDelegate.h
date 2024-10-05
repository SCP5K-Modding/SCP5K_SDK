#pragma once
#include "CoreMinimal.h"
#include "EGameStatus.h"
#include "GameStatusDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameStatusDelegate, EGameStatus, Status);

