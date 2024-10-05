#pragma once
#include "CoreMinimal.h"
#include "AddNotifierDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddNotifier, const FText&, Notifier);

