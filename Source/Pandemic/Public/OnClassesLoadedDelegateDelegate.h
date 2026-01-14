#pragma once
#include "CoreMinimal.h"
#include "OnClassesLoadedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClassesLoadedDelegate, const TArray<TSoftClassPtr<UObject>>&, Classes);

