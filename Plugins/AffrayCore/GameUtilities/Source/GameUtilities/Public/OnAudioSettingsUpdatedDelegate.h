#pragma once
#include "CoreMinimal.h"
#include "EAudioSetting.h"
#include "OnAudioSettingsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioSettingsUpdated, EAudioSetting, Settings);

