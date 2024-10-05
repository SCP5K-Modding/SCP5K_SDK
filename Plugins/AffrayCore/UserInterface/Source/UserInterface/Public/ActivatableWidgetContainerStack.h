#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidgetPool.h"
#include "Components/Widget.h"
#include "Templates/SubclassOf.h"
#include "ActivatableWidgetContainerStack.generated.h"

class UActivatableWidget;

UCLASS(Blueprintable)
class USERINTERFACE_API UActivatableWidgetContainerStack : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActivatableWidget*> WidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActivatableWidget* DisplayedWidget;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool GeneratedWidgetsPool;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActivatableWidget> RootWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActivatableWidget* RootWidget;
    
public:
    UActivatableWidgetContainerStack();

    UFUNCTION(BlueprintCallable)
    void SetRootWidget(TSubclassOf<UActivatableWidget> WidgetClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveWidget(UActivatableWidget* WidgetToRemove);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsWidgetClassAlreadyPresent(TSubclassOf<UActivatableWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActivatableWidget* GetActiveWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearWidgets();
    
private:
    UFUNCTION(BlueprintCallable)
    void BP_AddWidgetList(TArray<TSubclassOf<UActivatableWidget>> WidgetClassList);
    
    UFUNCTION(BlueprintCallable)
    UActivatableWidget* BP_AddWidget(TSubclassOf<UActivatableWidget> WidgetClass);
    
};

