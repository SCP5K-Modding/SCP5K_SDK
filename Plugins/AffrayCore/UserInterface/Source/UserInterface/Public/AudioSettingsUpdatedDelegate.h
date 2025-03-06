#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameUtilities -ObjectName=EAudioSetting -FallbackName=EAudioSetting
#include "AudioSettingsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAudioSettingsUpdated, EAudioSetting, Setting);

