#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EAudioSetting.h"
#include "AudioSettingsUpdatedDelegate.h"
#include "SettingsWidgetAsyncAction.generated.h"

class USettingsWidgetAsyncAction;

UCLASS(Blueprintable)
class USERINTERFACE_API USettingsWidgetAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioSettingsUpdated SettingUpdated;
    
    USettingsWidgetAsyncAction();

    UFUNCTION(BlueprintCallable)
    static USettingsWidgetAsyncAction* BindAudioSettings(EAudioSetting Setting);
    
};

