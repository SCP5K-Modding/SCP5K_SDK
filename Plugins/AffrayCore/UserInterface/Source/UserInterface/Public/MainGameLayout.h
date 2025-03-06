#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "MainGameLayout.generated.h"

class UActivatableWidget;
class UActivatableWidgetContainerStack;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USERINTERFACE_API UMainGameLayout : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UActivatableWidgetContainerStack*> Layers;
    
public:
    UMainGameLayout();

protected:
    UFUNCTION(BlueprintCallable)
    void RegisterLayer(FGameplayTag LayerTag, UActivatableWidgetContainerStack* LayerWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    UActivatableWidgetContainerStack* GetLayerWidget(FGameplayTag LayerName);
    
    UFUNCTION(BlueprintCallable)
    UActivatableWidget* GetActiveLayerWidget(FGameplayTag LayerName, TSubclassOf<UActivatableWidget> ActivatableWidgetClass);
    
    UFUNCTION(BlueprintCallable)
    UActivatableWidget* AddWidgetToLayer(FGameplayTag Layer, TSubclassOf<UActivatableWidget> ActivatableWidgetClass);
    
};

