#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EWidgetInputMode.h"
#include "OnWidgetActivationChangedDelegate.h"
#include "ActivatableWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USERINTERFACE_API UActivatableWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetInputMode InputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMouseCaptureMode GameMouseCaptureMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsBackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsActivationFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRestoreFocus;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetActivationChanged BP_OnWidgetActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetActivationChanged BP_OnWidgetDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetVisibilityOnActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ActivatedVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetVisibilityOnDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility DeactivatedVisibility;
    
public:
    UActivatableWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetDesiredFocusTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_OnHandleBackAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* BP_GetDesiredFocusTarget() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateWidget();
    
};

