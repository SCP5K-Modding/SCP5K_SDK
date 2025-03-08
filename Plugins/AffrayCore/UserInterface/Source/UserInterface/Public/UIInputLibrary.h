#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
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

