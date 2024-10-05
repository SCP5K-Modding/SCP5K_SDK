#pragma once
#include "CoreMinimal.h"
#include "InteractionStartedMCDelegateDelegate.generated.h"

class UInteractableComponent;
class UInteractionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractionStartedMCDelegate, UInteractionComponent*, InteractionComponent, UInteractableComponent*, Interactable);

