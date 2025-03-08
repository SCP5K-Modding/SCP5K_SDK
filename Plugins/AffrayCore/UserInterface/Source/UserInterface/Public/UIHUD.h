#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameplayTagContainer.h"
#include "AddChatMessageDelegate.h"
#include "AddNotifierDelegate.h"
#include "EPlayerActionReturn.h"
#include "HUDVisibilityDelegate.h"
#include "LocalPlayerPawnUpdatedDelegate.h"
#include "PlayerHealthUpdatedDelegate.h"
#include "PlayerUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "UIHUD.generated.h"

class APawn;
class APlayerController;
class APlayerState;
class UActivatableWidget;
class UDynamicActivatableWidgetContainer;
class UMainGameLayout;
class UWidget;

UCLASS(Blueprintable, NonTransient)
class USERINTERFACE_API AUIHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddChatMessage OnAddChatMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDVisibility OnHUDVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddNotifier OnAddNotifier;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerUpdated OnPlayerUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerHealthUpdated OnPlayerHealthUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalPlayerPawnUpdated OnLocalPlayerPawnUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChatCharacterAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UActivatableWidget>> PreGameUICache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UActivatableWidget>> PostGameUICache;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMainGameLayout> MainUIWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ChatWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainGameLayout* MainUILayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PushGameUILayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDynamicActivatableWidgetContainer> DynamicContainerWidget;
    
public:
    AUIHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHUDElementVisibility();
    
    UFUNCTION(BlueprintCallable)
    EPlayerActionReturn UnblockPlayer(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void ToggleHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowChatWindow(bool bIsUsingCommand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHUDVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetForceHideHUD(bool bShouldHideHUD);
    
    UFUNCTION(BlueprintCallable)
    void SetChatWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void PushUI(const TArray<TSoftClassPtr<UActivatableWidget>>& WidgetList);
    
    UFUNCTION(BlueprintCallable)
    void PushPostGameUI(const TArray<TSoftClassPtr<UActivatableWidget>>& WidgetList);
    
    UFUNCTION(BlueprintCallable)
    void PushCachedPreGameUI();
    
    UFUNCTION(BlueprintCallable)
    void PushCachedPostGameUI();
    
    UFUNCTION(BlueprintCallable)
    void PlayerUpdated(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHealthUpdated(APlayerState* PlayerState, float Health);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MainUIInitialised();
    
    UFUNCTION(BlueprintCallable)
    void LocalPlayerPawnUpdated(APlayerController* Controller, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerBlocked(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHUDVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayKilledByUI(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    EPlayerActionReturn BlockPlayer(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    UActivatableWidget* AddWidgetToLayer(TSubclassOf<UActivatableWidget> Widget, FGameplayTag Layer);
    
    UFUNCTION(BlueprintCallable)
    void AddNotifier(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddChatMessage(const FString& Name, const FString& Message);
    
};

