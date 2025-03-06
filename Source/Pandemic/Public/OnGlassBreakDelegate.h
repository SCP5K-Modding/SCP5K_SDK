#pragma once
#include "CoreMinimal.h"
#include "OnGlassBreakDelegate.generated.h"

class UShootableGlass;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGlassBreak, UShootableGlass*, Glass);

