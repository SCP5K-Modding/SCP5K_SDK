#pragma once
#include "CoreMinimal.h"
#include "EGameplaySetting.h"
#include "OnGameplaySettingsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameplaySettingsUpdated, EGameplaySetting, settings);

