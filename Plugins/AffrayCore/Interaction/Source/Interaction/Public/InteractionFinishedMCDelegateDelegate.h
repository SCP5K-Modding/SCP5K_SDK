#pragma once
#include "CoreMinimal.h"
#include "InteractionFinishedMCDelegateDelegate.generated.h"

class UInteractableComponent;
class UInteractionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractionFinishedMCDelegate, UInteractionComponent*, InteractionComponent, UInteractableComponent*, Interactable);

