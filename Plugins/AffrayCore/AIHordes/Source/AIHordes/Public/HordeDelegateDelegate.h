#pragma once
#include "CoreMinimal.h"
#include "HordeDelegateDelegate.generated.h"

class AHorde;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHordeDelegate, AHorde*, Horde);

