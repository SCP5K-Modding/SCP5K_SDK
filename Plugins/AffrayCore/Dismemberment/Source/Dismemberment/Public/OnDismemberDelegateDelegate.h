#pragma once
#include "CoreMinimal.h"
#include "EDismembermentType.h"
#include "OnDismemberDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDismemberDelegate, FName, DismemberableName, TEnumAsByte<EDismembermentType>, DismembermentType);

