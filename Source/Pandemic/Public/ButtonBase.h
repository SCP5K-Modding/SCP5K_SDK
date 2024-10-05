#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Framework/Text/TextLayout.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/UserWidget.h"
#include "ButtonColour.h"
#include "ButtonInterface.h"
#include "ButtonTextState.h"
#include "ButtonTextStyle.h"
#include "ButtonTextStyleOverride.h"
#include "EButtonState.h"
#include "EButtonType.h"
#include "EDubugType.h"
#include "OnAsyncLoadedDelegate.h"
#include "OnHoveredDelegate.h"
#include "OnSelectedDelegate.h"
#include "OnUnhoveredDelegate.h"
#include "OnUnselectedDelegate.h"
#include "ButtonBase.generated.h"

class UButton;
class UButtonBase;
class UFMODEvent;
class UImage;
class USizeBox;
class USoundBase;
class UTextBlock;
class UTexture2D;
class UUIButtonStyle;

UCLASS(Blueprintable, EditInlineNew)
class PANDEMIC_API UButtonBase : public UUserWidget, public IButtonInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPressed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDubugType DebugOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonType ButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonState ButtonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonState PreviousState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ButtonSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PrimaryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SecondaryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UButtonBase*> ConnectedButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFMOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BaseHoveredAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BaseSelectedAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODHoveredAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODSelectedAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseHoveredVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSelectedVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisualLock;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelected OnSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnselected OnUnselected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHovered OnHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnhovered OnUnhovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncLoaded OnAsyncLoaded;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> ObjectToLoad;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ObjectClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TextContainerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextStyleOverride PrimaryTextStyle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextStyle SecondaryTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextState DefaultTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonColour BackgroundStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonColour BorderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonColour AccentStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIButtonStyle* ButtonStyle;
    
    UButtonBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisuallySelected();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateConnectedButtons();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unselected();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unhovered();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartVisualUpdate();
    
    UFUNCTION(BlueprintCallable)
    void SetVisualDelta(float Delta);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSecondaryText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPrimaryText(const FText& Text);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetImageTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonState(EButtonState State);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Selected();
    
    UFUNCTION(BlueprintCallable)
    void Released();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreStartVisualUpdate();
    
public:
    UFUNCTION(BlueprintCallable)
    void Pressed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostStartVisualUpdate();
    
    UFUNCTION(BlueprintCallable)
    void PlaySelectedAudio();
    
    UFUNCTION(BlueprintCallable)
    void PlayHoveredAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisualUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialVisualUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsyncLoadCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Hovered();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DrawDebugText();
    

    // Fix for true pure virtual functions not being implemented
};

