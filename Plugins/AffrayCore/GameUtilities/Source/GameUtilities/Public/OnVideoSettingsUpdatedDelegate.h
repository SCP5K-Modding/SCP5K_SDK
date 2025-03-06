#pragma once
#include "CoreMinimal.h"
#include "EVideoSetting.h"
#include "OnVideoSettingsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVideoSettingsUpdated, EVideoSetting, Settings);

