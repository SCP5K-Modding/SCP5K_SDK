#pragma once
#include "CoreMinimal.h"
#include "InteractableFocusedMCDelegateDelegate.generated.h"

class UInteractableComponent;
class UInteractionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInteractableFocusedMCDelegate, UInteractionComponent*, InteractionComponent, UInteractableComponent*, OldInteractable, UInteractableComponent*, NewInteractable);

