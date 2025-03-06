#pragma once
#include "CoreMinimal.h"
#include "PostSignificanceDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPostSignificanceDelegate, float, OldSignificance, float, NewSignificance);

