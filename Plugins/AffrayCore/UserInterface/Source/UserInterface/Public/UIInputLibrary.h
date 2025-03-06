#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EInputType.h"
#include "Templates/SubclassOf.h"
#include "UIInputLibrary.generated.h"

class UActivatableWidget;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class USERINTERFACE_API UUIInputLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIInputLibrary();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PushStreamedContentToLayer(FGameplayTag LayerName, TSoftClassPtr<UActivatableWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UActivatableWidget* PushContentToLayer(FGameplayTag LayerName, TSubclassOf<UActivatableWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PopContentFromLayer(UActivatableWidget* ActivatableWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static bool IsPlayerUsingGamepad(const UUserWidget* WidgetContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static EInputType GetOwningPlayerInputType(const UUserWidget* WidgetContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* GetFirstWidgetNative(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* GetFirstWidget(const UUserWidget* Widget);
    
};

