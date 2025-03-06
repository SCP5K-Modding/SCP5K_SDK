#pragma once
#include "CoreMinimal.h"
#include "EUISetting.h"
#include "OnUISettingsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUISettingsUpdated, EUISetting, Settings);

