#pragma once
#include "CoreMinimal.h"
#include "ShareInfoMCDelegateDelegate.generated.h"

class UAIInfoSharingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShareInfoMCDelegate, UAIInfoSharingComponent*, Target);

