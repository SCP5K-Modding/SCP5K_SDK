#pragma once
#include "CoreMinimal.h"
#include "HUDVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHUDVisibility, bool, UIHUDVisibility);

