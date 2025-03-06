#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=GameUtilities -ObjectName=EAudioSetting -FallbackName=EAudioSetting
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

